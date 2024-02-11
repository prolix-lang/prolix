def execute_brainfuck(code):
    memory = [0] * 30000  # Brainfuck has a tape with 30,000 cells
    pointer = 0
    output = []

    code_ptr = 0
    code_length = len(code)

    while code_ptr < code_length:
        command = code[code_ptr]

        if command == '>':
            pointer += 1
        elif command == '<':
            pointer -= 1
        elif command == '+':
            memory[pointer] += 1
        elif command == '-':
            memory[pointer] -= 1
        elif command == '.':
            output.append(chr(memory[pointer]))
        elif command == ',':
            # You can implement input if needed
            pass
        elif command == '[':
            if memory[pointer] == 0:
                # Jump forward to the matching ']'
                loop_depth = 1
                while loop_depth > 0:
                    code_ptr += 1
                    if code_ptr >= code_length:
                        raise ValueError("Unmatched '[' in Brainfuck code")
                    if code[code_ptr] == '[':
                        loop_depth += 1
                    elif code[code_ptr] == ']':
                        loop_depth -= 1
            else:
                # Continue to the next command
                pass
        elif command == ']':
            if memory[pointer] != 0:
                # Jump back to the matching '['
                loop_depth = 1
                while loop_depth > 0:
                    code_ptr -= 1
                    if code_ptr < 0:
                        raise ValueError("Unmatched ']' in Brainfuck code")
                    if code[code_ptr] == ']':
                        loop_depth += 1
                    elif code[code_ptr] == '[':
                        loop_depth -= 1
            else:
                # Continue to the next command
                pass

        code_ptr += 1

    return ''.join(output)

# Example usage:
brainfuck_code = """++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.
+++++++++++++++++++++++++++++.
+++++++.
.
+++.
-------------------------------------------------------------------.
------------.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++.
++++++++++++++++++++++++.
+++.
------.
--------.
-------------------------------------------------------------------.
-."""
result = execute_brainfuck(brainfuck_code)
print(result)
