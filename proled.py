from tkinter import *
from tkinter import ttk
from tkinter.filedialog import asksaveasfilename, askopenfilename
from decimal import Decimal
import re
import os
import zlib, pickle
import time
import keyboard

def get_indentation(input_string):
    lines = input_string.split('\n')
    
    non_empty_lines = [line for line in lines if line.strip()]
    
    if not non_empty_lines:
        return 0
    
    min_indentation = float('inf')
    for line in non_empty_lines:
        leading_whitespace = len(line) - len(line.lstrip())
        min_indentation = min(min_indentation, leading_whitespace)
    
    return min_indentation

def to_tk(text, ind):
    lines = 1
    chars = 0
    for char in text:
        if ind<0:
            break
        if char=="\n":
            lines+=1
            chars = 0
        else:
            chars+=1
        ind-=1
    return f"{lines}.{chars-1}"

def remove_comment(line):
    if "@" in line:
        return line.split("@")[0]
    else:
        return line

def clean(text):
    while text and text[0]==" ":
        text = text[1:]
    while text and text[-1]==" ":
        text = text[:-1]
    return text

class GUI(Tk):
    def __init__(self):
        super().__init__()

        self.depth = 0
        self.user_funs = []
        self.savers = ["<space>", "<KeyRelease-Return>", "<{>", "<}>", "<,>", "<$>", "<KeyRelease-BackSpace>"]
        self._his = []
        self._his_ptr = None
        self.in_curly = False
        self.in_str = False
        self.history = zlib.compress(pickle.dumps([("","1.0")]), 9)
        self.cancelled = []
        self.his_focus = 0
        font = ("Consolas", 14)
        self.title("Prolix Editor")
        self.t_lines = Text(self, relief = FLAT, width = 3, font = font)
        self.t_editor = Text(self, relief = FLAT, font = font, wrap = NONE)
        self.scrollbar = ttk.Scrollbar(self, command=self.multiple_yview)
        self.t_lines['yscrollcommand'] = self.scrollbar.set
        self.t_editor['yscrollcommand'] = self.scrollbar.set
        self.grid_columnconfigure(1, weight = 1)
        self.grid_rowconfigure(0, weight = 1)

        self.t_lines.grid(row = 0, column = 0, sticky = "wens", padx = (0,10))
        self.t_editor.grid(row = 0, column = 1, sticky = "wens")
        self.scrollbar.grid(row = 0, column = 2, sticky = "wens")

        self.t_editor.bind("<Key>", lambda e: (self.input_manager(e), self.scroll_left(e), self.his_update(e)) )
        if os.name=="nt":
            self.t_editor.bind('<MouseWheel>', self.advanced_scroll2)
            self.t_lines.bind('<MouseWheel>', self.advanced_scroll1)
        else:
            self.t_editor.bind('<Button-4>', self.scroll_left)
            self.t_editor.bind('<Button-5>', self.scroll_left)
        self.bind("<\">", self.auto_douquote)
        self.bind("<'>", self.auto_sigquote)
        self.bind("<{>", self.auto_curly)
        self.bind("<}>", self.skip_curly)
        self.bind("<BackSpace>", self.delete_curly)
        self.bind("<Return>", self.expand_curly)
        self.bind("<Control-Shift-{>", self.remove_indent)
        self.bind("<Control-Shift-}>", self.add_indent)
        self.bind("<Control-Shift-S>", self.save_as)
        self.bind("<Control-s>", self.save)
        self.bind("<Control-o>", self.open)
        self.bind("<Control-z>", self.his_left)
        self.bind("<Control-y>", self.his_right)
        for saver in self.savers:
            self.t_editor.bind(saver, self.his_save)
        
        self.indent = 4
        self.fname = ""
        self.synt = ["if", "loop", "break", "skip", "require", "exit", "class"]
        self.exts = [("Prolix script","*.prlx"),("Plain text file","*.txt"),("Other","*.*")]
        self.t_editor.tag_config("synt", foreground = "#00007f", font=("Consolas", 14, "bold"))
        self.t_editor.tag_config("str", foreground = "#A31515")
        self.t_editor.tag_config("num", foreground = "#007f7f")
        self.t_editor.tag_config("var", foreground = "#0070C1")
        self.t_editor.tag_config("com", foreground = "#007f08")
        self.t_editor.tag_config("attr", foreground = "#795E26")
        self.t_editor.tag_config("class", foreground = "#001080")
        self.t_lines.tag_configure("right", justify='right')
        self.t_lines.tag_add("right", 1.0, "end")

        self.menu = Menu(self)
        self.config(menu=self.menu)
        self.filemenu = Menu(self.menu, tearoff = 0)
        self.filemenu.add_command(label = "Save As", command = self.save_as, accelerator = "Ctrl+Shift+S")
        self.filemenu.add_command(label = "Save", command = self.save, accelerator = "Ctrl+S")
        self.filemenu.add_command(label = "Open", command = self.open, accelerator = "Ctrl+O")
        self.menu.add_cascade(label = "File", menu = self.filemenu)
        self.his_menu = Menu(self.menu, tearoff = 0)
        self.his_menu.add_command(label = "Undo", command = self.his_left, accelerator="Ctrl+Z")
        self.his_menu.add_command(label = "Redo", command = self.his_right, accelerator="Ctrl+Y")
        self.menu.add_cascade(label = "History", menu = self.his_menu)

        self.mainloop()
    
    def auto_douquote(self, event=None):
        position = self.t_editor.index(INSERT)
        og = self.t_editor.get("1.0",END)
        self.t_editor.delete("1.0",END)
        self.t_editor.insert("1.0", og[:-1]+'"')
        self.t_editor.mark_set('insert', position)
        self.in_str = True
    
    def auto_sigquote(self, event=None):
        if self.in_str:
            self.in_str = False
            position = self.t_editor.index(INSERT)
            position = str(Decimal(position)+Decimal('.1'))
            og = self.t_editor.get("1.0",END)[:-1]
            self.t_editor.delete("1.0",END)
            self.t_editor.insert("1.0", og[:int(position.split('.')[1])-1])
            self.t_editor.insert("1.0", og[int(position.split('.')[1]):])
            self.t_editor.mark_set('insert', position)
            return
        position = self.t_editor.index(INSERT)
        og = self.t_editor.get("1.0",END)
        self.t_editor.delete("1.0",END)
        self.t_editor.insert("1.0", og[:-1]+'\'')
        self.t_editor.mark_set('insert', position)
        self.in_str = True

    def auto_curly(self, event=None):
        if self.in_str:
            self.in_str = False
            position = self.t_editor.index(INSERT)
            position = str(Decimal(position)+Decimal('.1'))
            og = self.t_editor.get("1.0",END)[:-1]
            self.t_editor.delete("1.0",END)
            self.t_editor.insert("1.0", og[:int(position.split('.')[1])-1])
            self.t_editor.insert("1.0", og[int(position.split('.')[1]):])
            self.t_editor.mark_set('insert', position)
            return
        position = self.t_editor.index(INSERT)
        og = self.t_editor.get("1.0",END)
        self.t_editor.delete("1.0",END)
        self.t_editor.insert("1.0", og[:-1]+'}')
        self.t_editor.mark_set('insert', position)
        self.in_curly = True

    def skip_curly(self, event=None):
        if not self.in_curly: return
        self.in_curly = False
        position = self.t_editor.index(INSERT)
        position = str(Decimal(position)+Decimal('.1'))
        og = self.t_editor.get("1.0",END)[:-1]
        self.t_editor.delete("1.0",END)
        self.t_editor.insert("1.0", og[:int(position.split('.')[1])-1])
        self.t_editor.insert("1.0", og[int(position.split('.')[1]):])
        self.t_editor.mark_set('insert', position)
    
    def delete_curly(self, event=None):
        if self.in_str:
            self.in_str = False
            position = self.t_editor.index(INSERT)
            og = self.t_editor.get("1.0",END)[:-1]
            self.t_editor.delete("1.0",END)
            self.t_editor.insert("1.0", og[:int(position.split('.')[1])-1])
            self.t_editor.insert("1.0", og[int(position.split('.')[1])+1:])
            position = str(Decimal(position)-Decimal('.1'))
            self.t_editor.mark_set('insert', position)
            return
        if not self.in_curly: return
        self.in_curly = False
        position = self.t_editor.index(INSERT)
        og = self.t_editor.get("1.0",END)[:-1]
        self.t_editor.delete("1.0",END)
        self.t_editor.insert("1.0", og[:int(position.split('.')[1])-1])
        self.t_editor.insert("1.0", og[int(position.split('.')[1])+1:])
        position = str(Decimal(position)-Decimal('.1'))
        self.t_editor.mark_set('insert', position)
    
    def expand_curly(self, event=None):
        if not self.in_curly: return
        position = self.t_editor.index(INSERT)
        og = self.t_editor.get("1.0",END)[:-1]
        self.t_editor.delete("1.0",END)
        self.t_editor.insert("1.0", og[int(position.split('.')[1])+1:])
        self.t_editor.insert("1.0", og[:int(position.split('.')[1])+1])
        currentline = og.split('\n')[int(self.t_editor.index(INSERT).split('.')[0])-1]
        self.t_editor.mark_set('insert', position)
        self.t_editor.insert(position, ' '*4+' '*get_indentation(currentline)+'\n')
        self.t_editor.mark_set('insert', str(Decimal(self.t_editor.index(INSERT))-Decimal('.1')))

    def his_update(self, event):
        self.highlight_manager()
        #print(event.keycode, event.keysym)
        if keyboard.is_pressed('ctrl+z'): return
        if keyboard.is_pressed('ctrl+y'): return
        if not keyboard.is_pressed('}') and self.in_curly:
            if not keyboard.is_pressed('backspace') and not keyboard.is_pressed('enter'):
                self.in_curly = False
        if (not keyboard.is_pressed('"') or not keyboard.is_pressed('\'')) and self.in_str:
            if not keyboard.is_pressed('backspace'):
                self.in_curly = False
        if event.keysym in ["Control_L","Shift_L","Up","Left","Down","Right"]: return
        if not hasattr(self, 'lasttime_pressed'):
            self.lasttime_pressed = time.time()
        if time.time() - self.lasttime_pressed >= 0.5:
            if self._his_ptr == None: self._his_ptr = 0; self._his.append(self.t_editor.get("1.0",END))
            else: self._his_ptr += 1; self._his = self._his[:self._his_ptr]; self._his.append(self.t_editor.get("1.0",END))
            self.lasttime_pressed = time.time()
        """
        if self.his_focus<-1 and not event.keysym in ["Control_L","Shift_L","Z","z","Up","Left","Down","Right"]:
            old = pickle.loads(zlib.decompress(self.history))[:self.his_focus+1]
            self.history = zlib.compress(pickle.dumps(old), 9)
            self.his_focus = 0
            self.cancelled = []
        """

    def his_left(self, event = None):

        self._his_ptr -= 1
        self.t_editor.delete("1.0",END)
        if self._his_ptr < 0:
            return
        self.t_editor.insert("1.0", self._his[self._his_ptr][:-1])
        self.highlight_manager()
        """
        old = pickle.loads(zlib.decompress(self.history))
        self.cancelled.append((self.t_editor.get("1.0","end-1c"),self.t_editor.index("insert")))
        if self.his_focus>-len(old):
            self.his_focus-=1
            self.t_editor.delete("1.0",END)
            self.t_editor.insert("1.0", old[self.his_focus][0])
            self.t_editor.mark_set("insert", old[self.his_focus][1])
            self.highlight_manager()
            self.t_editor.see(old[self.his_focus][1])
            self.t_lines.see(old[self.his_focus][1])
        """

    def his_right(self, event = None):
        self._his_ptr += 1
        if self._his_ptr >= len(self._his):
            self._his_ptr -= 1
            return
        self.t_editor.insert("1.0", self._his[self._his_ptr])
        self.highlight_manager()
        """
        if self.cancelled:
            self.his_focus+=1
            text, line = self.cancelled.pop()
            self.t_editor.delete("1.0",END)
            self.t_editor.insert("1.0", text)
            self.t_editor.mark_set("insert", line)
            self.highlight_manager()
            self.t_editor.see(line)
            self.t_lines.see(line)
        """

    def his_save(self, event = None):
        """
        old = pickle.loads(zlib.decompress(self.history))
        self.his_focus = -1
        old.append(
            (self.t_editor.get("1.0","end-1c"), self.t_editor.index("insert"))
            )
        self.history = zlib.compress(pickle.dumps(old), 9)
        self.his_focus = 0
        """

    def remove_indent(self, event = None):
        f = int(self.t_editor.index("sel.first").split(".")[0])-1
        l = int(self.t_editor.index("sel.last").split(".")[0])-1
        lines = self.t_editor.get("1.0", END).split("\n")
        for n, line in enumerate(lines):
            if n<=l and n>=f:
                lines[n] = line[self.indent:] if line.startswith(" "*self.indent) else line
        self.t_editor.delete("1.0", END)
        self.t_editor.insert("1.0", "\n".join(lines))
        self.t_editor.tag_add("sel", f"{f+1}.0", f"{l+1}.end")
        self.t_editor.see(f"{f+1}.0")
        self.t_lines.see(f"{f+1}.0")
        self.highlight_manager()

    def add_indent(self, event = None):
        f = int(self.t_editor.index("sel.first").split(".")[0])-1
        l = int(self.t_editor.index("sel.last").split(".")[0])-1
        lines = self.t_editor.get("1.0", END).split("\n")
        for n, line in enumerate(lines):
            if n<=l and n>=f:
                lines[n] = f"{' '*self.indent}{line}"
        self.t_editor.delete("1.0", END)
        self.t_editor.insert("1.0", "\n".join(lines))
        self.t_editor.tag_add("sel", f"{f+1}.0", f"{l+1}.end")
        self.t_editor.see(f"{f+1}.0")
        self.t_lines.see(f"{f+1}.0")
        self.highlight_manager()
        
    def scroll_left(self, event):
        ratio = self.t_editor.yview()
        self.t_lines.yview(MOVETO, ratio[0])#event_generate("<MouseWheel>", delta=event.delta, when="now")

    def highlight_ufuns(self):
        whole = self.t_editor.get("1.0", END)
        self.user_funs = []
        for line_n, line in enumerate(whole.split("\n")):
            if clean(line).startswith("func "):
                self.user_funs.append(clean(line).split(" ")[1])
        #print(self.user_funs)
        for f in self.user_funs:
            self.highlight(f+" ", "ufuns")
                

    def advanced_scroll1(self, event):
        if self.depth==0:
            self.depth+=1
            #self.t_lines.event_generate("<MouseWheel>", delta=event.delta, when="now")
            self.t_editor.event_generate("<MouseWheel>", delta=event.delta, when="now")
        else:
            self.depth = 0

    def advanced_scroll2(self, event):
        if self.depth==0:
            self.depth+=1
            self.t_lines.event_generate("<MouseWheel>", delta=event.delta, when="now")
            #self.t_editor.event_generate("<MouseWheel>", delta=event.delta, when="now")
        else:
            self.depth = 0

    def open(self, event = None):
        self.fname = askopenfilename(filetypes = self.exts)
        self.title(f"Prolix Editor [{self.fname}]")
        self.t_editor.delete("1.0", END)
        with open(self.fname) as f:
            self.t_editor.insert("1.0", f.read())
        self.history = zlib.compress(pickle.dumps([(self.t_editor.get("1.0",END), self.t_editor.index("insert"))]), 9)
        self.cancelled = []
        self.highlight_manager()

    def save_as(self, event = None):
        self.fname = asksaveasfilename(filetypes = self.exts, defaultextension = "*.prlx")
        if self.fname:
            self.title(f"Prolix Editor [{self.fname}]")
            with open(self.fname, "w") as f:
                f.write(self.t_editor.get("1.0","end-1c"))

    def save(self, event = None):
        if not self.fname:
            self.save_as(event)
        else:
            with open(self.fname, "w") as f:
                f.write(self.t_editor.get("1.0","end-1c"))

    def multiple_yview(self, *args):
        self.t_lines.yview(*args)
        self.t_editor.yview(*args)

    def input_manager(self, event):
        ind = self.t_editor.index("insert")
        line, char = ind.split(".")
        curline = self.t_editor.get(f"{line}.0",f"{line}.end")
        
        if curline.endswith("{") and event.char==chr(13):
            counter = 0
            while curline[counter]==" ":
                counter+=1
            self.after(1, lambda: self.t_editor.insert(f"{int(line)+1}.0", (self.indent+counter)*" ") )
        elif event.char==chr(13):
            counter = 0
            while counter<len(curline) and curline[counter]==" ":
                counter+=1
            self.after(1, lambda: self.t_editor.insert(f"{int(line)+1}.0", counter*" ") )
        elif event.char==chr(8):
            if self.t_editor.get(f"{line}.0", ind).endswith(self.indent*" "):
                self.t_editor.delete(f"{line}.{int(char)-self.indent+1}", ind)
        elif event.char==chr(9):
            self.after(1, lambda: self.replace_tabs(ind))

        self.after(0, self.highlight_manager)
        self.after(0, lambda e=event: self.scroll_left(e))

    def replace_tabs(self, pos):
        self.t_editor.delete(pos,f"{pos}+1c")
        self.t_editor.insert(pos, self.indent*" ")

    def highlight_manager(self):
        [self.t_editor.tag_remove(tag, "1.0", END) for tag in ["synt","str","var","com","attr","num","class"]]
        self.t_lines.delete("1.0", END)
        lines = pad([str(i+1) for i in range(self.t_editor.get("1.0",END).count("\n"))])
        self.t_lines.insert("1.0","\n".join(lines))
        self.t_lines.tag_add("right", 1.0, "end")

        whole = self.t_editor.get("1.0","end-1c")
        pattern = "$(.*):\s(.*);"

        if not hasattr(self, "classes_"):
            self.classes_ = []
        if not hasattr(self, "objects_"):
            self.objects_ = []
        self.classes_.clear()
        self.objects_.clear()
        for builtin_ in ['io', 'math', 'string', 'table', 'cdll', 'utils', 'os']:
            self.classes_.append([0, builtin_])
            self.objects_.append([0, builtin_])

        if "class highlighter":
            pattern = "class\s+(\w+)"
            for obj in re.finditer(pattern, whole):
                start = to_tk(whole, obj.start(0)+6)
                end = to_tk(whole, obj.end(0))
                self.classes_.append([obj.start(0)+6, whole[obj.start(0)+6:obj.end(0)]])

        if "object highlighter":
            pattern = "\w+\s+\$\w+"
            for obj in re.finditer(pattern, whole):
                num1 = len(whole[obj.start(0):obj.end(0)])
                num2 = len(whole[obj.start(0):obj.end(0)].split(' ')[1])
                res = num1-num2
                result_ = whole[obj.start(0):obj.end(0)][res+1:]
                self.objects_.append([obj.start(0), result_])
                
        for class_ in self.classes_:
            pattern = f"{class_[1]}"
            for obj in re.finditer(pattern, whole):
                if obj.start(0) < class_[0]: continue
                start = to_tk(whole, obj.start(0))
                end = to_tk(whole, obj.end(0))
                if obj.start(0) != 0:
                    if whole[obj.start(0)-1] == '$':
                        continue
                if not whole[obj.end(0):obj.end(0)+1]:
                    self.t_editor.tag_add("class", start, str(float(end) + 0.1))
                else:
                    self.t_editor.tag_add("class", start, end)
        
        for object_ in self.objects_:
            pattern = f"{object_[1]}"
            for obj in re.finditer(pattern, whole):
                if obj.start(0) < object_[0]: continue
                start = to_tk(whole, obj.start(0)-1)
                end = to_tk(whole, obj.end(0))
                if not whole[obj.end(0):obj.end(0)+1]:
                    self.t_editor.tag_add("var", start, str(float(end) + 0.1))
                else:
                    self.t_editor.tag_add("var", start, end)

        if "attribute highlighter":
            pattern = ":[_a-zA-Z][_a-zA-Z0-9]*"
            for obj in re.finditer(pattern, whole):
                start = to_tk(whole, obj.start(0)+1)
                end = to_tk(whole, obj.end(0))
                if not whole[obj.end(0):obj.end(0)+1]:
                    self.t_editor.tag_add("attr", start, str(float(end) + 0.1))
                else:
                    self.t_editor.tag_add("attr", start, end)

        if "string highlighter":
            pattern = "['\"].*?['\"]"
            l = []
            for obj in re.finditer(pattern, whole):
                start = to_tk(whole, obj.start(0))
                end = to_tk(whole, obj.end(0))
                if obj.start(0) in l: continue
                if whole[obj.start(0)] != whole[obj.end(0)-1]: continue
                l.append(obj.end(0)-1)
                if not whole[obj.end(0):obj.end(0)+1]:
                    self.t_editor.tag_add("str", start, str(float(end) + 0.1))
                else:
                    self.t_editor.tag_add("str", start, end)

        if "comment highlighter":
            pattern = "#.*"
            for obj in re.finditer(pattern, whole):
                start = to_tk(whole, obj.start(0))
                end = to_tk(whole, obj.end(0)-1)
                self.t_editor.tag_add("com", start, str(float(end) + 0.1))

        if "number highlighter":
            pattern = "[-]?((\d+(\.\d+)?)|(\.\d+))"
            for obj in re.finditer(pattern, whole):
                start = to_tk(whole, obj.start(0))
                end = to_tk(whole, obj.end(0))
                if not whole[obj.end(0):obj.end(0)+1]:
                    self.t_editor.tag_add("num", start, str(float(end) + 0.1))
                else:
                    self.t_editor.tag_add("num", start, end)
        
        for f in self.synt:
            pattern = f"\\b{f}\\b"
            for obj in re.finditer(pattern, whole):
                start = to_tk(whole, obj.start(0))
                self.t_editor.tag_add("synt", start, f"{start}+{len(f)}c")

        #self.highlight_ufuns()

        matches = []
        pattern = '"(.*?)"'
        text = self.t_editor.get("1.0", END).splitlines()
        for i, line in enumerate(text):
            for match in re.finditer(pattern, line):
                matches.append((f"{i + 1}.{match.start()}", f"{i + 1}.{match.end()}"))
        for start, end in matches:
            self.t_editor.tag_add("str", start, end)

    def highlight(self, keyword, tag):
        """https://stackoverflow.com/questions/17829713/tkinter-highlight-colour-specific-lines-of-text-based-on-a-keyword"""
        pos = '1.0'
        while True:
            idx = self.t_editor.search(keyword, pos, END)
            if not idx:
                break
            pos = '{}+{}c'.format(idx, len(keyword))
            self.t_editor.tag_add(tag, idx, pos)

def pad(linelist):
    maxlen = len(linelist[-1])
    return ["0"*(maxlen-len(f"{n}"))+f"{n}" for n in linelist]

if __name__=="__main__":
    gui = GUI()
