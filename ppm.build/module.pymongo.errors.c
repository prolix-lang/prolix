/* Generated code for Python module 'pymongo$errors'
 * created by Nuitka version 1.9.7
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pymongo$errors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pymongo$errors;
PyDictObject *moduledict_pymongo$errors;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[198];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[198];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pymongo.errors"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 198; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pymongo$errors(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 198; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1a140cd26106eff5d314fb441ad641b5;
static PyCodeObject *codeobj_c9fc8f53cf61348aeec1b1922ed76e8f;
static PyCodeObject *codeobj_38d5e02a3ba8e6e0a35c21b59fa91d9c;
static PyCodeObject *codeobj_da9bc4bde47d05fee80c69f3557db7bf;
static PyCodeObject *codeobj_cdd26cf71f54477cc4d46b317e404e85;
static PyCodeObject *codeobj_0033ca81ec020b5db6babffea4ea6482;
static PyCodeObject *codeobj_6f589d0941300be6704ffce8f06fe66a;
static PyCodeObject *codeobj_71b919b969bd06538e4afd6b656ead3b;
static PyCodeObject *codeobj_5d5e17fb5a748cd7a87110966e5dfbdd;
static PyCodeObject *codeobj_3c7e5f39ea8c1d5cdbf7d66d6b636e09;
static PyCodeObject *codeobj_1169348ba462024cc9bdcea2e2c9d3d8;
static PyCodeObject *codeobj_c917aa81138c4a0102b284c1ac214981;
static PyCodeObject *codeobj_bfac416cb509f13b47dcbdd93cb4ee11;
static PyCodeObject *codeobj_8f56182ff45fab2f2c8e9bc9ad9726ef;
static PyCodeObject *codeobj_db03832ba26793a082de9b5fa17b9dc2;
static PyCodeObject *codeobj_84520bc7bf4537b79beadc094f676e8f;
static PyCodeObject *codeobj_fe73da07eb0d428ca8d8f6bbb8904dbc;
static PyCodeObject *codeobj_bab5e77c3c09a7be689f26debe178505;
static PyCodeObject *codeobj_1013718fd9b4906783b0b17aeae7ae11;
static PyCodeObject *codeobj_55311a7416ed241a97a3872a56a0dc2d;
static PyCodeObject *codeobj_1fcdc17cfd06c5d8252273bd743ca2f2;
static PyCodeObject *codeobj_50d2cf52228fc52aa653b00a53404620;
static PyCodeObject *codeobj_94ebbbedb401a8758608a253833e0c6c;
static PyCodeObject *codeobj_51c319edef3110b4528541ecaa0152d1;
static PyCodeObject *codeobj_8a8122d58d7f38515494e1ef8c19f635;
static PyCodeObject *codeobj_297b561b5ee67a008d15a4dd25d04ba1;
static PyCodeObject *codeobj_c286db23d3c13958f2a5c1c21902f4e4;
static PyCodeObject *codeobj_2d6c9a8ecc656d8f204ea20dbdef1ce4;
static PyCodeObject *codeobj_74ddd60abe134fe97fd383f57ec72cc4;
static PyCodeObject *codeobj_7c1562b3e056cf77065141d7cd9912d2;
static PyCodeObject *codeobj_cd790278ec9abbe92274b75a667053ed;
static PyCodeObject *codeobj_8e53e36cf006a747590738da405dee51;
static PyCodeObject *codeobj_d63d36ecc3a3c2a73e3ca47f57c32ccb;
static PyCodeObject *codeobj_89f5a4f831e059236cec7269c92db68c;
static PyCodeObject *codeobj_80d7ed5eef2fd8c7dd6f7645f791f9ab;
static PyCodeObject *codeobj_614b8f6dae4592d915e79d41d020acd0;
static PyCodeObject *codeobj_b02ad87cdc4bebcac38646b7fa87a6e4;
static PyCodeObject *codeobj_36a35a3ac57e9063a62d532f259f5335;
static PyCodeObject *codeobj_f8f4648663e3668e7f9b5c97a00f53df;
static PyCodeObject *codeobj_236d504cb39dacfb1c4b570f329af91b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[183]); CHECK_OBJECT(module_filename_obj);
    codeobj_1a140cd26106eff5d314fb441ad641b5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[184], mod_consts[184], NULL, NULL, 0, 0, 0);
    codeobj_c9fc8f53cf61348aeec1b1922ed76e8f = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_FUTURE_ANNOTATIONS, mod_consts[100], mod_consts[100], mod_consts[185], NULL, 0, 0, 0);
    codeobj_38d5e02a3ba8e6e0a35c21b59fa91d9c = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_FUTURE_ANNOTATIONS, mod_consts[147], mod_consts[147], mod_consts[185], NULL, 0, 0, 0);
    codeobj_da9bc4bde47d05fee80c69f3557db7bf = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_FUTURE_ANNOTATIONS, mod_consts[174], mod_consts[174], mod_consts[185], NULL, 0, 0, 0);
    codeobj_cdd26cf71f54477cc4d46b317e404e85 = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_FUTURE_ANNOTATIONS, mod_consts[166], mod_consts[166], mod_consts[185], NULL, 0, 0, 0);
    codeobj_0033ca81ec020b5db6babffea4ea6482 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_FUTURE_ANNOTATIONS, mod_consts[134], mod_consts[134], mod_consts[185], NULL, 0, 0, 0);
    codeobj_6f589d0941300be6704ffce8f06fe66a = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_FUTURE_ANNOTATIONS, mod_consts[106], mod_consts[106], mod_consts[185], NULL, 0, 0, 0);
    codeobj_71b919b969bd06538e4afd6b656ead3b = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_FUTURE_ANNOTATIONS, mod_consts[110], mod_consts[110], mod_consts[185], NULL, 0, 0, 0);
    codeobj_5d5e17fb5a748cd7a87110966e5dfbdd = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_FUTURE_ANNOTATIONS, mod_consts[119], mod_consts[119], mod_consts[185], NULL, 0, 0, 0);
    codeobj_3c7e5f39ea8c1d5cdbf7d66d6b636e09 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_FUTURE_ANNOTATIONS, mod_consts[37], mod_consts[37], mod_consts[185], NULL, 0, 0, 0);
    codeobj_1169348ba462024cc9bdcea2e2c9d3d8 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_FUTURE_ANNOTATIONS, mod_consts[114], mod_consts[114], mod_consts[185], NULL, 0, 0, 0);
    codeobj_c917aa81138c4a0102b284c1ac214981 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_FUTURE_ANNOTATIONS, mod_consts[141], mod_consts[141], mod_consts[185], NULL, 0, 0, 0);
    codeobj_bfac416cb509f13b47dcbdd93cb4ee11 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_FUTURE_ANNOTATIONS, mod_consts[97], mod_consts[97], mod_consts[185], NULL, 0, 0, 0);
    codeobj_8f56182ff45fab2f2c8e9bc9ad9726ef = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[186], mod_consts[185], 2, 0, 0);
    codeobj_db03832ba26793a082de9b5fa17b9dc2 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[187], mod_consts[185], 3, 0, 0);
    codeobj_84520bc7bf4537b79beadc094f676e8f = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[188], mod_consts[185], 5, 0, 0);
    codeobj_fe73da07eb0d428ca8d8f6bbb8904dbc = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[189], mod_consts[185], 3, 0, 0);
    codeobj_bab5e77c3c09a7be689f26debe178505 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[190], mod_consts[185], 3, 0, 0);
    codeobj_1013718fd9b4906783b0b17aeae7ae11 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[191], mod_consts[185], 3, 0, 0);
    codeobj_55311a7416ed241a97a3872a56a0dc2d = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[192], mod_consts[185], 2, 0, 0);
    codeobj_1fcdc17cfd06c5d8252273bd743ca2f2 = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[193], NULL, 1, 0, 0);
    codeobj_50d2cf52228fc52aa653b00a53404620 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[85], mod_consts[85], mod_consts[194], NULL, 2, 0, 0);
    codeobj_94ebbbedb401a8758608a253833e0c6c = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[15], mod_consts[15], mod_consts[195], NULL, 2, 0, 0);
    codeobj_51c319edef3110b4528541ecaa0152d1 = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[125], mod_consts[125], mod_consts[193], NULL, 1, 0, 0);
    codeobj_8a8122d58d7f38515494e1ef8c19f635 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[87], mod_consts[87], mod_consts[194], NULL, 2, 0, 0);
    codeobj_297b561b5ee67a008d15a4dd25d04ba1 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[32], mod_consts[32], mod_consts[196], NULL, 1, 0, 0);
    codeobj_c286db23d3c13958f2a5c1c21902f4e4 = MAKE_CODE_OBJECT(module_filename_obj, 352, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[171], mod_consts[171], mod_consts[193], NULL, 1, 0, 0);
    codeobj_2d6c9a8ecc656d8f204ea20dbdef1ce4 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[127], mod_consts[127], mod_consts[193], NULL, 1, 0, 0);
    codeobj_74ddd60abe134fe97fd383f57ec72cc4 = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[12], mod_consts[12], mod_consts[193], NULL, 1, 0, 0);
    codeobj_7c1562b3e056cf77065141d7cd9912d2 = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[179], mod_consts[179], mod_consts[193], NULL, 1, 0, 0);
    codeobj_cd790278ec9abbe92274b75a667053ed = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[82], mod_consts[82], mod_consts[194], NULL, 2, 0, 0);
    codeobj_8e53e36cf006a747590738da405dee51 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[38], mod_consts[38], mod_consts[193], NULL, 1, 0, 0);
    codeobj_d63d36ecc3a3c2a73e3ca47f57c32ccb = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[38], mod_consts[38], mod_consts[193], NULL, 1, 0, 0);
    codeobj_89f5a4f831e059236cec7269c92db68c = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[38], mod_consts[38], mod_consts[193], NULL, 1, 0, 0);
    codeobj_80d7ed5eef2fd8c7dd6f7645f791f9ab = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[38], mod_consts[38], mod_consts[193], NULL, 1, 0, 0);
    codeobj_614b8f6dae4592d915e79d41d020acd0 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[38], mod_consts[38], mod_consts[193], NULL, 1, 0, 0);
    codeobj_b02ad87cdc4bebcac38646b7fa87a6e4 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[38], mod_consts[38], mod_consts[193], NULL, 1, 0, 0);
    codeobj_36a35a3ac57e9063a62d532f259f5335 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[38], mod_consts[38], mod_consts[193], NULL, 1, 0, 0);
    codeobj_f8f4648663e3668e7f9b5c97a00f53df = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[38], mod_consts[38], mod_consts[193], NULL, 1, 0, 0);
    codeobj_236d504cb39dacfb1c4b570f329af91b = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[38], mod_consts[38], mod_consts[197], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__10___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__11_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__12___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__13__max_wire_version(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__14_code(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__15_details(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__16_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__17_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__18_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__19__wtimeout_error(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__20___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__21___reduce__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__22_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__23___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__24_cause(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__25_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__26___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__27_encrypted_fields(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__2_has_error_label(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__3__add_error_label(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__4__remove_error_label(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__5_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__6_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__7___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__8_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__9__format_detailed_error(PyObject *annotations);


// The module function definitions.
static PyObject *impl_pymongo$errors$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    PyObject *par_error_labels = python_pars[2];
    struct Nuitka_FrameObject *frame_fe73da07eb0d428ca8d8f6bbb8904dbc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fe73da07eb0d428ca8d8f6bbb8904dbc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fe73da07eb0d428ca8d8f6bbb8904dbc)) {
        Py_XDECREF(cache_frame_fe73da07eb0d428ca8d8f6bbb8904dbc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe73da07eb0d428ca8d8f6bbb8904dbc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe73da07eb0d428ca8d8f6bbb8904dbc = MAKE_FUNCTION_FRAME(tstate, codeobj_fe73da07eb0d428ca8d8f6bbb8904dbc, module_pymongo$errors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fe73da07eb0d428ca8d8f6bbb8904dbc->m_type_description == NULL);
    frame_fe73da07eb0d428ca8d8f6bbb8904dbc = cache_frame_fe73da07eb0d428ca8d8f6bbb8904dbc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fe73da07eb0d428ca8d8f6bbb8904dbc);
    assert(Py_REFCNT(frame_fe73da07eb0d428ca8d8f6bbb8904dbc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 41;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_pymongo$errors, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_fe73da07eb0d428ca8d8f6bbb8904dbc->m_frame.f_lineno = 41;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_message);
        tmp_assattr_value_1 = par_message;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_set_arg_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_error_labels);
        tmp_or_left_value_1 = par_error_labels;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = MAKE_LIST_EMPTY(0);
        tmp_set_arg_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_set_arg_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_assattr_value_2 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fe73da07eb0d428ca8d8f6bbb8904dbc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe73da07eb0d428ca8d8f6bbb8904dbc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe73da07eb0d428ca8d8f6bbb8904dbc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe73da07eb0d428ca8d8f6bbb8904dbc,
        type_description_1,
        par_self,
        par_message,
        par_error_labels,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fe73da07eb0d428ca8d8f6bbb8904dbc == cache_frame_fe73da07eb0d428ca8d8f6bbb8904dbc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fe73da07eb0d428ca8d8f6bbb8904dbc);
        cache_frame_fe73da07eb0d428ca8d8f6bbb8904dbc = NULL;
    }

    assertFrameObject(frame_fe73da07eb0d428ca8d8f6bbb8904dbc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_error_labels);
    Py_DECREF(par_error_labels);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_error_labels);
    Py_DECREF(par_error_labels);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__2_has_error_label(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_label = python_pars[1];
    struct Nuitka_FrameObject *frame_cd790278ec9abbe92274b75a667053ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cd790278ec9abbe92274b75a667053ed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cd790278ec9abbe92274b75a667053ed)) {
        Py_XDECREF(cache_frame_cd790278ec9abbe92274b75a667053ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd790278ec9abbe92274b75a667053ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd790278ec9abbe92274b75a667053ed = MAKE_FUNCTION_FRAME(tstate, codeobj_cd790278ec9abbe92274b75a667053ed, module_pymongo$errors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cd790278ec9abbe92274b75a667053ed->m_type_description == NULL);
    frame_cd790278ec9abbe92274b75a667053ed = cache_frame_cd790278ec9abbe92274b75a667053ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cd790278ec9abbe92274b75a667053ed);
    assert(Py_REFCNT(frame_cd790278ec9abbe92274b75a667053ed) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_label);
        tmp_cmp_expr_left_1 = par_label;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cd790278ec9abbe92274b75a667053ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd790278ec9abbe92274b75a667053ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd790278ec9abbe92274b75a667053ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd790278ec9abbe92274b75a667053ed,
        type_description_1,
        par_self,
        par_label
    );


    // Release cached frame if used for exception.
    if (frame_cd790278ec9abbe92274b75a667053ed == cache_frame_cd790278ec9abbe92274b75a667053ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cd790278ec9abbe92274b75a667053ed);
        cache_frame_cd790278ec9abbe92274b75a667053ed = NULL;
    }

    assertFrameObject(frame_cd790278ec9abbe92274b75a667053ed);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__3__add_error_label(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_label = python_pars[1];
    struct Nuitka_FrameObject *frame_50d2cf52228fc52aa653b00a53404620;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_50d2cf52228fc52aa653b00a53404620 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_50d2cf52228fc52aa653b00a53404620)) {
        Py_XDECREF(cache_frame_50d2cf52228fc52aa653b00a53404620);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50d2cf52228fc52aa653b00a53404620 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50d2cf52228fc52aa653b00a53404620 = MAKE_FUNCTION_FRAME(tstate, codeobj_50d2cf52228fc52aa653b00a53404620, module_pymongo$errors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50d2cf52228fc52aa653b00a53404620->m_type_description == NULL);
    frame_50d2cf52228fc52aa653b00a53404620 = cache_frame_50d2cf52228fc52aa653b00a53404620;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_50d2cf52228fc52aa653b00a53404620);
    assert(Py_REFCNT(frame_50d2cf52228fc52aa653b00a53404620) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_label);
        tmp_args_element_value_1 = par_label;
        frame_50d2cf52228fc52aa653b00a53404620->m_frame.f_lineno = 54;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_50d2cf52228fc52aa653b00a53404620, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50d2cf52228fc52aa653b00a53404620->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50d2cf52228fc52aa653b00a53404620, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50d2cf52228fc52aa653b00a53404620,
        type_description_1,
        par_self,
        par_label
    );


    // Release cached frame if used for exception.
    if (frame_50d2cf52228fc52aa653b00a53404620 == cache_frame_50d2cf52228fc52aa653b00a53404620) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50d2cf52228fc52aa653b00a53404620);
        cache_frame_50d2cf52228fc52aa653b00a53404620 = NULL;
    }

    assertFrameObject(frame_50d2cf52228fc52aa653b00a53404620);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__4__remove_error_label(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_label = python_pars[1];
    struct Nuitka_FrameObject *frame_8a8122d58d7f38515494e1ef8c19f635;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a8122d58d7f38515494e1ef8c19f635 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8a8122d58d7f38515494e1ef8c19f635)) {
        Py_XDECREF(cache_frame_8a8122d58d7f38515494e1ef8c19f635);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a8122d58d7f38515494e1ef8c19f635 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a8122d58d7f38515494e1ef8c19f635 = MAKE_FUNCTION_FRAME(tstate, codeobj_8a8122d58d7f38515494e1ef8c19f635, module_pymongo$errors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a8122d58d7f38515494e1ef8c19f635->m_type_description == NULL);
    frame_8a8122d58d7f38515494e1ef8c19f635 = cache_frame_8a8122d58d7f38515494e1ef8c19f635;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8a8122d58d7f38515494e1ef8c19f635);
    assert(Py_REFCNT(frame_8a8122d58d7f38515494e1ef8c19f635) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_label);
        tmp_args_element_value_1 = par_label;
        frame_8a8122d58d7f38515494e1ef8c19f635->m_frame.f_lineno = 58;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[7], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a8122d58d7f38515494e1ef8c19f635, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a8122d58d7f38515494e1ef8c19f635->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a8122d58d7f38515494e1ef8c19f635, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a8122d58d7f38515494e1ef8c19f635,
        type_description_1,
        par_self,
        par_label
    );


    // Release cached frame if used for exception.
    if (frame_8a8122d58d7f38515494e1ef8c19f635 == cache_frame_8a8122d58d7f38515494e1ef8c19f635) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a8122d58d7f38515494e1ef8c19f635);
        cache_frame_8a8122d58d7f38515494e1ef8c19f635 = NULL;
    }

    assertFrameObject(frame_8a8122d58d7f38515494e1ef8c19f635);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    PyObject *par_errors = python_pars[2];
    PyObject *var_error_labels = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_1013718fd9b4906783b0b17aeae7ae11;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1013718fd9b4906783b0b17aeae7ae11 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_error_labels == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_error_labels = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1013718fd9b4906783b0b17aeae7ae11)) {
        Py_XDECREF(cache_frame_1013718fd9b4906783b0b17aeae7ae11);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1013718fd9b4906783b0b17aeae7ae11 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1013718fd9b4906783b0b17aeae7ae11 = MAKE_FUNCTION_FRAME(tstate, codeobj_1013718fd9b4906783b0b17aeae7ae11, module_pymongo$errors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1013718fd9b4906783b0b17aeae7ae11->m_type_description == NULL);
    frame_1013718fd9b4906783b0b17aeae7ae11 = cache_frame_1013718fd9b4906783b0b17aeae7ae11;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1013718fd9b4906783b0b17aeae7ae11);
    assert(Py_REFCNT(frame_1013718fd9b4906783b0b17aeae7ae11) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_errors);
        tmp_cmp_expr_left_1 = par_errors;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_errors);
        tmp_isinstance_inst_1 = par_errors;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_errors);
        tmp_expression_value_1 = par_errors;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_1013718fd9b4906783b0b17aeae7ae11->m_frame.f_lineno = 112;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[10]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_error_labels;
            assert(old != NULL);
            var_error_labels = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 113;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_pymongo$errors, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        CHECK_OBJECT(var_error_labels);
        tmp_args_element_value_2 = var_error_labels;
        frame_1013718fd9b4906783b0b17aeae7ae11->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        if (par_errors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 114;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }

        tmp_or_left_value_1 = par_errors;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = MAKE_LIST_EMPTY(0);
        tmp_assign_source_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assign_source_3 = tmp_or_left_value_1;
        or_end_1:;
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_1 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assattr_value_2 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1013718fd9b4906783b0b17aeae7ae11, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1013718fd9b4906783b0b17aeae7ae11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1013718fd9b4906783b0b17aeae7ae11, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1013718fd9b4906783b0b17aeae7ae11,
        type_description_1,
        par_self,
        par_message,
        par_errors,
        var_error_labels,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1013718fd9b4906783b0b17aeae7ae11 == cache_frame_1013718fd9b4906783b0b17aeae7ae11) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1013718fd9b4906783b0b17aeae7ae11);
        cache_frame_1013718fd9b4906783b0b17aeae7ae11 = NULL;
    }

    assertFrameObject(frame_1013718fd9b4906783b0b17aeae7ae11);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_error_labels);
    Py_DECREF(var_error_labels);
    var_error_labels = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_error_labels);
    var_error_labels = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__9__format_detailed_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[0];
    PyObject *par_details = python_pars[1];
    struct Nuitka_FrameObject *frame_94ebbbedb401a8758608a253833e0c6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94ebbbedb401a8758608a253833e0c6c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_94ebbbedb401a8758608a253833e0c6c)) {
        Py_XDECREF(cache_frame_94ebbbedb401a8758608a253833e0c6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94ebbbedb401a8758608a253833e0c6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94ebbbedb401a8758608a253833e0c6c = MAKE_FUNCTION_FRAME(tstate, codeobj_94ebbbedb401a8758608a253833e0c6c, module_pymongo$errors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94ebbbedb401a8758608a253833e0c6c->m_type_description == NULL);
    frame_94ebbbedb401a8758608a253833e0c6c = cache_frame_94ebbbedb401a8758608a253833e0c6c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_94ebbbedb401a8758608a253833e0c6c);
    assert(Py_REFCNT(frame_94ebbbedb401a8758608a253833e0c6c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_details);
        tmp_cmp_expr_left_1 = par_details;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_message);
        tmp_format_value_1 = par_message;
        tmp_format_spec_1 = mod_consts[13];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_details);
            tmp_format_value_2 = par_details;
            tmp_format_spec_2 = mod_consts[13];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_message;
            assert(old != NULL);
            par_message = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_94ebbbedb401a8758608a253833e0c6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94ebbbedb401a8758608a253833e0c6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94ebbbedb401a8758608a253833e0c6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94ebbbedb401a8758608a253833e0c6c,
        type_description_1,
        par_message,
        par_details
    );


    // Release cached frame if used for exception.
    if (frame_94ebbbedb401a8758608a253833e0c6c == cache_frame_94ebbbedb401a8758608a253833e0c6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94ebbbedb401a8758608a253833e0c6c);
        cache_frame_94ebbbedb401a8758608a253833e0c6c = NULL;
    }

    assertFrameObject(frame_94ebbbedb401a8758608a253833e0c6c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_message);
    tmp_return_value = par_message;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    par_message = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    par_message = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_details);
    Py_DECREF(par_details);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_details);
    Py_DECREF(par_details);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    PyObject *par_errors = python_pars[2];
    struct Nuitka_FrameObject *frame_bab5e77c3c09a7be689f26debe178505;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bab5e77c3c09a7be689f26debe178505 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bab5e77c3c09a7be689f26debe178505)) {
        Py_XDECREF(cache_frame_bab5e77c3c09a7be689f26debe178505);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bab5e77c3c09a7be689f26debe178505 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bab5e77c3c09a7be689f26debe178505 = MAKE_FUNCTION_FRAME(tstate, codeobj_bab5e77c3c09a7be689f26debe178505, module_pymongo$errors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bab5e77c3c09a7be689f26debe178505->m_type_description == NULL);
    frame_bab5e77c3c09a7be689f26debe178505 = cache_frame_bab5e77c3c09a7be689f26debe178505;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bab5e77c3c09a7be689f26debe178505);
    assert(Py_REFCNT(frame_bab5e77c3c09a7be689f26debe178505) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 158;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pymongo$errors, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 158;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        CHECK_OBJECT(par_errors);
        tmp_args_element_value_2 = par_errors;
        frame_bab5e77c3c09a7be689f26debe178505->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 158;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_errors);
        tmp_kw_call_dict_value_0_1 = par_errors;
        frame_bab5e77c3c09a7be689f26debe178505->m_frame.f_lineno = 158;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bab5e77c3c09a7be689f26debe178505, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bab5e77c3c09a7be689f26debe178505->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bab5e77c3c09a7be689f26debe178505, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bab5e77c3c09a7be689f26debe178505,
        type_description_1,
        par_self,
        par_message,
        par_errors,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_bab5e77c3c09a7be689f26debe178505 == cache_frame_bab5e77c3c09a7be689f26debe178505) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bab5e77c3c09a7be689f26debe178505);
        cache_frame_bab5e77c3c09a7be689f26debe178505 = NULL;
    }

    assertFrameObject(frame_bab5e77c3c09a7be689f26debe178505);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_error = python_pars[1];
    PyObject *par_code = python_pars[2];
    PyObject *par_details = python_pars[3];
    PyObject *par_max_wire_version = python_pars[4];
    PyObject *var_error_labels = NULL;
    struct Nuitka_FrameObject *frame_84520bc7bf4537b79beadc094f676e8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_84520bc7bf4537b79beadc094f676e8f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_error_labels == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_error_labels = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_84520bc7bf4537b79beadc094f676e8f)) {
        Py_XDECREF(cache_frame_84520bc7bf4537b79beadc094f676e8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84520bc7bf4537b79beadc094f676e8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84520bc7bf4537b79beadc094f676e8f = MAKE_FUNCTION_FRAME(tstate, codeobj_84520bc7bf4537b79beadc094f676e8f, module_pymongo$errors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84520bc7bf4537b79beadc094f676e8f->m_type_description == NULL);
    frame_84520bc7bf4537b79beadc094f676e8f = cache_frame_84520bc7bf4537b79beadc094f676e8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_84520bc7bf4537b79beadc094f676e8f);
    assert(Py_REFCNT(frame_84520bc7bf4537b79beadc094f676e8f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_details);
        tmp_cmp_expr_left_1 = par_details;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_details);
        tmp_expression_value_1 = par_details;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_84520bc7bf4537b79beadc094f676e8f->m_frame.f_lineno = 198;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[10]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_error_labels;
            assert(old != NULL);
            var_error_labels = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 199;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_2 = BUILTIN_SUPER0(tstate, moduledict_pymongo$errors, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 199;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_error);
        tmp_args_element_value_1 = par_error;
        if (par_details == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 199;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_details;
        frame_84520bc7bf4537b79beadc094f676e8f->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 199;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_error_labels);
        tmp_kw_call_dict_value_0_1 = var_error_labels;
        frame_84520bc7bf4537b79beadc094f676e8f->m_frame.f_lineno = 199;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_code);
        tmp_assattr_value_1 = par_code;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        if (par_details == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 201;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_2 = par_details;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_max_wire_version);
        tmp_assattr_value_3 = par_max_wire_version;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[20], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84520bc7bf4537b79beadc094f676e8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84520bc7bf4537b79beadc094f676e8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84520bc7bf4537b79beadc094f676e8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84520bc7bf4537b79beadc094f676e8f,
        type_description_1,
        par_self,
        par_error,
        par_code,
        par_details,
        par_max_wire_version,
        var_error_labels,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_84520bc7bf4537b79beadc094f676e8f == cache_frame_84520bc7bf4537b79beadc094f676e8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84520bc7bf4537b79beadc094f676e8f);
        cache_frame_84520bc7bf4537b79beadc094f676e8f = NULL;
    }

    assertFrameObject(frame_84520bc7bf4537b79beadc094f676e8f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_error_labels);
    Py_DECREF(var_error_labels);
    var_error_labels = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_error_labels);
    var_error_labels = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_error);
    Py_DECREF(par_error);
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_details);
    Py_DECREF(par_details);
    CHECK_OBJECT(par_max_wire_version);
    Py_DECREF(par_max_wire_version);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_error);
    Py_DECREF(par_error);
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_details);
    Py_DECREF(par_details);
    CHECK_OBJECT(par_max_wire_version);
    Py_DECREF(par_max_wire_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__13__max_wire_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_51c319edef3110b4528541ecaa0152d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51c319edef3110b4528541ecaa0152d1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51c319edef3110b4528541ecaa0152d1)) {
        Py_XDECREF(cache_frame_51c319edef3110b4528541ecaa0152d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51c319edef3110b4528541ecaa0152d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51c319edef3110b4528541ecaa0152d1 = MAKE_FUNCTION_FRAME(tstate, codeobj_51c319edef3110b4528541ecaa0152d1, module_pymongo$errors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51c319edef3110b4528541ecaa0152d1->m_type_description == NULL);
    frame_51c319edef3110b4528541ecaa0152d1 = cache_frame_51c319edef3110b4528541ecaa0152d1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_51c319edef3110b4528541ecaa0152d1);
    assert(Py_REFCNT(frame_51c319edef3110b4528541ecaa0152d1) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51c319edef3110b4528541ecaa0152d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51c319edef3110b4528541ecaa0152d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51c319edef3110b4528541ecaa0152d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51c319edef3110b4528541ecaa0152d1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_51c319edef3110b4528541ecaa0152d1 == cache_frame_51c319edef3110b4528541ecaa0152d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51c319edef3110b4528541ecaa0152d1);
        cache_frame_51c319edef3110b4528541ecaa0152d1 = NULL;
    }

    assertFrameObject(frame_51c319edef3110b4528541ecaa0152d1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__14_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2d6c9a8ecc656d8f204ea20dbdef1ce4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d6c9a8ecc656d8f204ea20dbdef1ce4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2d6c9a8ecc656d8f204ea20dbdef1ce4)) {
        Py_XDECREF(cache_frame_2d6c9a8ecc656d8f204ea20dbdef1ce4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d6c9a8ecc656d8f204ea20dbdef1ce4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d6c9a8ecc656d8f204ea20dbdef1ce4 = MAKE_FUNCTION_FRAME(tstate, codeobj_2d6c9a8ecc656d8f204ea20dbdef1ce4, module_pymongo$errors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2d6c9a8ecc656d8f204ea20dbdef1ce4->m_type_description == NULL);
    frame_2d6c9a8ecc656d8f204ea20dbdef1ce4 = cache_frame_2d6c9a8ecc656d8f204ea20dbdef1ce4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2d6c9a8ecc656d8f204ea20dbdef1ce4);
    assert(Py_REFCNT(frame_2d6c9a8ecc656d8f204ea20dbdef1ce4) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d6c9a8ecc656d8f204ea20dbdef1ce4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d6c9a8ecc656d8f204ea20dbdef1ce4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d6c9a8ecc656d8f204ea20dbdef1ce4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d6c9a8ecc656d8f204ea20dbdef1ce4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2d6c9a8ecc656d8f204ea20dbdef1ce4 == cache_frame_2d6c9a8ecc656d8f204ea20dbdef1ce4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2d6c9a8ecc656d8f204ea20dbdef1ce4);
        cache_frame_2d6c9a8ecc656d8f204ea20dbdef1ce4 = NULL;
    }

    assertFrameObject(frame_2d6c9a8ecc656d8f204ea20dbdef1ce4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__15_details(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_74ddd60abe134fe97fd383f57ec72cc4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_74ddd60abe134fe97fd383f57ec72cc4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_74ddd60abe134fe97fd383f57ec72cc4)) {
        Py_XDECREF(cache_frame_74ddd60abe134fe97fd383f57ec72cc4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_74ddd60abe134fe97fd383f57ec72cc4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_74ddd60abe134fe97fd383f57ec72cc4 = MAKE_FUNCTION_FRAME(tstate, codeobj_74ddd60abe134fe97fd383f57ec72cc4, module_pymongo$errors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_74ddd60abe134fe97fd383f57ec72cc4->m_type_description == NULL);
    frame_74ddd60abe134fe97fd383f57ec72cc4 = cache_frame_74ddd60abe134fe97fd383f57ec72cc4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_74ddd60abe134fe97fd383f57ec72cc4);
    assert(Py_REFCNT(frame_74ddd60abe134fe97fd383f57ec72cc4) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74ddd60abe134fe97fd383f57ec72cc4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74ddd60abe134fe97fd383f57ec72cc4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74ddd60abe134fe97fd383f57ec72cc4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_74ddd60abe134fe97fd383f57ec72cc4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_74ddd60abe134fe97fd383f57ec72cc4 == cache_frame_74ddd60abe134fe97fd383f57ec72cc4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_74ddd60abe134fe97fd383f57ec72cc4);
        cache_frame_74ddd60abe134fe97fd383f57ec72cc4 = NULL;
    }

    assertFrameObject(frame_74ddd60abe134fe97fd383f57ec72cc4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__16_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_614b8f6dae4592d915e79d41d020acd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_614b8f6dae4592d915e79d41d020acd0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_614b8f6dae4592d915e79d41d020acd0)) {
        Py_XDECREF(cache_frame_614b8f6dae4592d915e79d41d020acd0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_614b8f6dae4592d915e79d41d020acd0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_614b8f6dae4592d915e79d41d020acd0 = MAKE_FUNCTION_FRAME(tstate, codeobj_614b8f6dae4592d915e79d41d020acd0, module_pymongo$errors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_614b8f6dae4592d915e79d41d020acd0->m_type_description == NULL);
    frame_614b8f6dae4592d915e79d41d020acd0 = cache_frame_614b8f6dae4592d915e79d41d020acd0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_614b8f6dae4592d915e79d41d020acd0);
    assert(Py_REFCNT(frame_614b8f6dae4592d915e79d41d020acd0) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[23];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_614b8f6dae4592d915e79d41d020acd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_614b8f6dae4592d915e79d41d020acd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_614b8f6dae4592d915e79d41d020acd0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_614b8f6dae4592d915e79d41d020acd0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_614b8f6dae4592d915e79d41d020acd0 == cache_frame_614b8f6dae4592d915e79d41d020acd0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_614b8f6dae4592d915e79d41d020acd0);
        cache_frame_614b8f6dae4592d915e79d41d020acd0 = NULL;
    }

    assertFrameObject(frame_614b8f6dae4592d915e79d41d020acd0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__19__wtimeout_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_error = python_pars[0];
    struct Nuitka_FrameObject *frame_297b561b5ee67a008d15a4dd25d04ba1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_297b561b5ee67a008d15a4dd25d04ba1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_297b561b5ee67a008d15a4dd25d04ba1)) {
        Py_XDECREF(cache_frame_297b561b5ee67a008d15a4dd25d04ba1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_297b561b5ee67a008d15a4dd25d04ba1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_297b561b5ee67a008d15a4dd25d04ba1 = MAKE_FUNCTION_FRAME(tstate, codeobj_297b561b5ee67a008d15a4dd25d04ba1, module_pymongo$errors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_297b561b5ee67a008d15a4dd25d04ba1->m_type_description == NULL);
    frame_297b561b5ee67a008d15a4dd25d04ba1 = cache_frame_297b561b5ee67a008d15a4dd25d04ba1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_297b561b5ee67a008d15a4dd25d04ba1);
    assert(Py_REFCNT(frame_297b561b5ee67a008d15a4dd25d04ba1) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_error);
        tmp_expression_value_1 = par_error;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_297b561b5ee67a008d15a4dd25d04ba1->m_frame.f_lineno = 287;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[24]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[25];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_cmp_expr_left_2 = mod_consts[26];
        CHECK_OBJECT(par_error);
        tmp_cmp_expr_right_2 = par_error;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_error);
        tmp_expression_value_3 = par_error;
        tmp_subscript_value_1 = mod_consts[26];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_297b561b5ee67a008d15a4dd25d04ba1->m_frame.f_lineno = 287;
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[27]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_297b561b5ee67a008d15a4dd25d04ba1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_297b561b5ee67a008d15a4dd25d04ba1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_297b561b5ee67a008d15a4dd25d04ba1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_297b561b5ee67a008d15a4dd25d04ba1,
        type_description_1,
        par_error
    );


    // Release cached frame if used for exception.
    if (frame_297b561b5ee67a008d15a4dd25d04ba1 == cache_frame_297b561b5ee67a008d15a4dd25d04ba1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_297b561b5ee67a008d15a4dd25d04ba1);
        cache_frame_297b561b5ee67a008d15a4dd25d04ba1 = NULL;
    }

    assertFrameObject(frame_297b561b5ee67a008d15a4dd25d04ba1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_error);
    Py_DECREF(par_error);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_error);
    Py_DECREF(par_error);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__20___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_results = python_pars[1];
    struct Nuitka_FrameObject *frame_55311a7416ed241a97a3872a56a0dc2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55311a7416ed241a97a3872a56a0dc2d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55311a7416ed241a97a3872a56a0dc2d)) {
        Py_XDECREF(cache_frame_55311a7416ed241a97a3872a56a0dc2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55311a7416ed241a97a3872a56a0dc2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55311a7416ed241a97a3872a56a0dc2d = MAKE_FUNCTION_FRAME(tstate, codeobj_55311a7416ed241a97a3872a56a0dc2d, module_pymongo$errors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55311a7416ed241a97a3872a56a0dc2d->m_type_description == NULL);
    frame_55311a7416ed241a97a3872a56a0dc2d = cache_frame_55311a7416ed241a97a3872a56a0dc2d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_55311a7416ed241a97a3872a56a0dc2d);
    assert(Py_REFCNT(frame_55311a7416ed241a97a3872a56a0dc2d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 299;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_pymongo$errors, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[29];
        tmp_args_element_value_2 = mod_consts[30];
        CHECK_OBJECT(par_results);
        tmp_args_element_value_3 = par_results;
        frame_55311a7416ed241a97a3872a56a0dc2d->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_55311a7416ed241a97a3872a56a0dc2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55311a7416ed241a97a3872a56a0dc2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55311a7416ed241a97a3872a56a0dc2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55311a7416ed241a97a3872a56a0dc2d,
        type_description_1,
        par_self,
        par_results,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_55311a7416ed241a97a3872a56a0dc2d == cache_frame_55311a7416ed241a97a3872a56a0dc2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55311a7416ed241a97a3872a56a0dc2d);
        cache_frame_55311a7416ed241a97a3872a56a0dc2d = NULL;
    }

    assertFrameObject(frame_55311a7416ed241a97a3872a56a0dc2d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_results);
    Py_DECREF(par_results);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_results);
    Py_DECREF(par_results);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__21___reduce__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1fcdc17cfd06c5d8252273bd743ca2f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1fcdc17cfd06c5d8252273bd743ca2f2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1fcdc17cfd06c5d8252273bd743ca2f2)) {
        Py_XDECREF(cache_frame_1fcdc17cfd06c5d8252273bd743ca2f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1fcdc17cfd06c5d8252273bd743ca2f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1fcdc17cfd06c5d8252273bd743ca2f2 = MAKE_FUNCTION_FRAME(tstate, codeobj_1fcdc17cfd06c5d8252273bd743ca2f2, module_pymongo$errors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1fcdc17cfd06c5d8252273bd743ca2f2->m_type_description == NULL);
    frame_1fcdc17cfd06c5d8252273bd743ca2f2 = cache_frame_1fcdc17cfd06c5d8252273bd743ca2f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1fcdc17cfd06c5d8252273bd743ca2f2);
    assert(Py_REFCNT(frame_1fcdc17cfd06c5d8252273bd743ca2f2) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1fcdc17cfd06c5d8252273bd743ca2f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1fcdc17cfd06c5d8252273bd743ca2f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1fcdc17cfd06c5d8252273bd743ca2f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1fcdc17cfd06c5d8252273bd743ca2f2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1fcdc17cfd06c5d8252273bd743ca2f2 == cache_frame_1fcdc17cfd06c5d8252273bd743ca2f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1fcdc17cfd06c5d8252273bd743ca2f2);
        cache_frame_1fcdc17cfd06c5d8252273bd743ca2f2 = NULL;
    }

    assertFrameObject(frame_1fcdc17cfd06c5d8252273bd743ca2f2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__22_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_wces = NULL;
    PyObject *var_werrs = NULL;
    struct Nuitka_FrameObject *frame_236d504cb39dacfb1c4b570f329af91b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_236d504cb39dacfb1c4b570f329af91b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_236d504cb39dacfb1c4b570f329af91b)) {
        Py_XDECREF(cache_frame_236d504cb39dacfb1c4b570f329af91b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_236d504cb39dacfb1c4b570f329af91b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_236d504cb39dacfb1c4b570f329af91b = MAKE_FUNCTION_FRAME(tstate, codeobj_236d504cb39dacfb1c4b570f329af91b, module_pymongo$errors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_236d504cb39dacfb1c4b570f329af91b->m_type_description == NULL);
    frame_236d504cb39dacfb1c4b570f329af91b = cache_frame_236d504cb39dacfb1c4b570f329af91b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_236d504cb39dacfb1c4b570f329af91b);
    assert(Py_REFCNT(frame_236d504cb39dacfb1c4b570f329af91b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[31];
        tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
        frame_236d504cb39dacfb1c4b570f329af91b->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_wces == NULL);
        var_wces = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_wces);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_wces);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_wces);
        tmp_expression_value_3 = var_wces;
        tmp_subscript_value_1 = mod_consts[33];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, -1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_236d504cb39dacfb1c4b570f329af91b->m_frame.f_lineno = 309;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[12]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_3 = mod_consts[34];
        tmp_call_arg_element_4 = MAKE_LIST_EMPTY(0);
        frame_236d504cb39dacfb1c4b570f329af91b->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_werrs == NULL);
        var_werrs = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_werrs);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_werrs);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_werrs);
        tmp_expression_value_7 = var_werrs;
        tmp_subscript_value_2 = mod_consts[33];
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, -1);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[9]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_236d504cb39dacfb1c4b570f329af91b->m_frame.f_lineno = 313;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[24]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[25];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_236d504cb39dacfb1c4b570f329af91b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_236d504cb39dacfb1c4b570f329af91b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_236d504cb39dacfb1c4b570f329af91b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_236d504cb39dacfb1c4b570f329af91b,
        type_description_1,
        par_self,
        var_wces,
        var_werrs
    );


    // Release cached frame if used for exception.
    if (frame_236d504cb39dacfb1c4b570f329af91b == cache_frame_236d504cb39dacfb1c4b570f329af91b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_236d504cb39dacfb1c4b570f329af91b);
        cache_frame_236d504cb39dacfb1c4b570f329af91b = NULL;
    }

    assertFrameObject(frame_236d504cb39dacfb1c4b570f329af91b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wces);
    Py_DECREF(var_wces);
    var_wces = NULL;
    Py_XDECREF(var_werrs);
    var_werrs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_wces);
    var_wces = NULL;
    Py_XDECREF(var_werrs);
    var_werrs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__23___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cause = python_pars[1];
    struct Nuitka_FrameObject *frame_8f56182ff45fab2f2c8e9bc9ad9726ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8f56182ff45fab2f2c8e9bc9ad9726ef = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f56182ff45fab2f2c8e9bc9ad9726ef)) {
        Py_XDECREF(cache_frame_8f56182ff45fab2f2c8e9bc9ad9726ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f56182ff45fab2f2c8e9bc9ad9726ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f56182ff45fab2f2c8e9bc9ad9726ef = MAKE_FUNCTION_FRAME(tstate, codeobj_8f56182ff45fab2f2c8e9bc9ad9726ef, module_pymongo$errors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f56182ff45fab2f2c8e9bc9ad9726ef->m_type_description == NULL);
    frame_8f56182ff45fab2f2c8e9bc9ad9726ef = cache_frame_8f56182ff45fab2f2c8e9bc9ad9726ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8f56182ff45fab2f2c8e9bc9ad9726ef);
    assert(Py_REFCNT(frame_8f56182ff45fab2f2c8e9bc9ad9726ef) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_unicode_arg_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 348;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_pymongo$errors, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cause);
        tmp_unicode_arg_1 = par_cause;
        tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 348;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_8f56182ff45fab2f2c8e9bc9ad9726ef->m_frame.f_lineno = 348;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_cause);
        tmp_assattr_value_1 = par_cause;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f56182ff45fab2f2c8e9bc9ad9726ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f56182ff45fab2f2c8e9bc9ad9726ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f56182ff45fab2f2c8e9bc9ad9726ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f56182ff45fab2f2c8e9bc9ad9726ef,
        type_description_1,
        par_self,
        par_cause,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8f56182ff45fab2f2c8e9bc9ad9726ef == cache_frame_8f56182ff45fab2f2c8e9bc9ad9726ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f56182ff45fab2f2c8e9bc9ad9726ef);
        cache_frame_8f56182ff45fab2f2c8e9bc9ad9726ef = NULL;
    }

    assertFrameObject(frame_8f56182ff45fab2f2c8e9bc9ad9726ef);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cause);
    Py_DECREF(par_cause);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cause);
    Py_DECREF(par_cause);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__24_cause(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c286db23d3c13958f2a5c1c21902f4e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c286db23d3c13958f2a5c1c21902f4e4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c286db23d3c13958f2a5c1c21902f4e4)) {
        Py_XDECREF(cache_frame_c286db23d3c13958f2a5c1c21902f4e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c286db23d3c13958f2a5c1c21902f4e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c286db23d3c13958f2a5c1c21902f4e4 = MAKE_FUNCTION_FRAME(tstate, codeobj_c286db23d3c13958f2a5c1c21902f4e4, module_pymongo$errors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c286db23d3c13958f2a5c1c21902f4e4->m_type_description == NULL);
    frame_c286db23d3c13958f2a5c1c21902f4e4 = cache_frame_c286db23d3c13958f2a5c1c21902f4e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c286db23d3c13958f2a5c1c21902f4e4);
    assert(Py_REFCNT(frame_c286db23d3c13958f2a5c1c21902f4e4) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c286db23d3c13958f2a5c1c21902f4e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c286db23d3c13958f2a5c1c21902f4e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c286db23d3c13958f2a5c1c21902f4e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c286db23d3c13958f2a5c1c21902f4e4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c286db23d3c13958f2a5c1c21902f4e4 == cache_frame_c286db23d3c13958f2a5c1c21902f4e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c286db23d3c13958f2a5c1c21902f4e4);
        cache_frame_c286db23d3c13958f2a5c1c21902f4e4 = NULL;
    }

    assertFrameObject(frame_c286db23d3c13958f2a5c1c21902f4e4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__25_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f8f4648663e3668e7f9b5c97a00f53df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f8f4648663e3668e7f9b5c97a00f53df = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f8f4648663e3668e7f9b5c97a00f53df)) {
        Py_XDECREF(cache_frame_f8f4648663e3668e7f9b5c97a00f53df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8f4648663e3668e7f9b5c97a00f53df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8f4648663e3668e7f9b5c97a00f53df = MAKE_FUNCTION_FRAME(tstate, codeobj_f8f4648663e3668e7f9b5c97a00f53df, module_pymongo$errors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f8f4648663e3668e7f9b5c97a00f53df->m_type_description == NULL);
    frame_f8f4648663e3668e7f9b5c97a00f53df = cache_frame_f8f4648663e3668e7f9b5c97a00f53df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f8f4648663e3668e7f9b5c97a00f53df);
    assert(Py_REFCNT(frame_f8f4648663e3668e7f9b5c97a00f53df) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 358;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f8f4648663e3668e7f9b5c97a00f53df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8f4648663e3668e7f9b5c97a00f53df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8f4648663e3668e7f9b5c97a00f53df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8f4648663e3668e7f9b5c97a00f53df,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f8f4648663e3668e7f9b5c97a00f53df == cache_frame_f8f4648663e3668e7f9b5c97a00f53df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f8f4648663e3668e7f9b5c97a00f53df);
        cache_frame_f8f4648663e3668e7f9b5c97a00f53df = NULL;
    }

    assertFrameObject(frame_f8f4648663e3668e7f9b5c97a00f53df);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__26___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cause = python_pars[1];
    PyObject *par_encrypted_fields = python_pars[2];
    struct Nuitka_FrameObject *frame_db03832ba26793a082de9b5fa17b9dc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_db03832ba26793a082de9b5fa17b9dc2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_db03832ba26793a082de9b5fa17b9dc2)) {
        Py_XDECREF(cache_frame_db03832ba26793a082de9b5fa17b9dc2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db03832ba26793a082de9b5fa17b9dc2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db03832ba26793a082de9b5fa17b9dc2 = MAKE_FUNCTION_FRAME(tstate, codeobj_db03832ba26793a082de9b5fa17b9dc2, module_pymongo$errors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_db03832ba26793a082de9b5fa17b9dc2->m_type_description == NULL);
    frame_db03832ba26793a082de9b5fa17b9dc2 = cache_frame_db03832ba26793a082de9b5fa17b9dc2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_db03832ba26793a082de9b5fa17b9dc2);
    assert(Py_REFCNT(frame_db03832ba26793a082de9b5fa17b9dc2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 370;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_pymongo$errors, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cause);
        tmp_args_element_value_1 = par_cause;
        frame_db03832ba26793a082de9b5fa17b9dc2->m_frame.f_lineno = 370;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_encrypted_fields);
        tmp_assattr_value_1 = par_encrypted_fields;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db03832ba26793a082de9b5fa17b9dc2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db03832ba26793a082de9b5fa17b9dc2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db03832ba26793a082de9b5fa17b9dc2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db03832ba26793a082de9b5fa17b9dc2,
        type_description_1,
        par_self,
        par_cause,
        par_encrypted_fields,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_db03832ba26793a082de9b5fa17b9dc2 == cache_frame_db03832ba26793a082de9b5fa17b9dc2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_db03832ba26793a082de9b5fa17b9dc2);
        cache_frame_db03832ba26793a082de9b5fa17b9dc2 = NULL;
    }

    assertFrameObject(frame_db03832ba26793a082de9b5fa17b9dc2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cause);
    Py_DECREF(par_cause);
    CHECK_OBJECT(par_encrypted_fields);
    Py_DECREF(par_encrypted_fields);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cause);
    Py_DECREF(par_cause);
    CHECK_OBJECT(par_encrypted_fields);
    Py_DECREF(par_encrypted_fields);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pymongo$errors$$$function__27_encrypted_fields(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7c1562b3e056cf77065141d7cd9912d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c1562b3e056cf77065141d7cd9912d2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c1562b3e056cf77065141d7cd9912d2)) {
        Py_XDECREF(cache_frame_7c1562b3e056cf77065141d7cd9912d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c1562b3e056cf77065141d7cd9912d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c1562b3e056cf77065141d7cd9912d2 = MAKE_FUNCTION_FRAME(tstate, codeobj_7c1562b3e056cf77065141d7cd9912d2, module_pymongo$errors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c1562b3e056cf77065141d7cd9912d2->m_type_description == NULL);
    frame_7c1562b3e056cf77065141d7cd9912d2 = cache_frame_7c1562b3e056cf77065141d7cd9912d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7c1562b3e056cf77065141d7cd9912d2);
    assert(Py_REFCNT(frame_7c1562b3e056cf77065141d7cd9912d2) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[39]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c1562b3e056cf77065141d7cd9912d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c1562b3e056cf77065141d7cd9912d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c1562b3e056cf77065141d7cd9912d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c1562b3e056cf77065141d7cd9912d2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7c1562b3e056cf77065141d7cd9912d2 == cache_frame_7c1562b3e056cf77065141d7cd9912d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c1562b3e056cf77065141d7cd9912d2);
        cache_frame_7c1562b3e056cf77065141d7cd9912d2 = NULL;
    }

    assertFrameObject(frame_7c1562b3e056cf77065141d7cd9912d2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__10___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__10___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_bab5e77c3c09a7be689f26debe178505,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__11_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_80d7ed5eef2fd8c7dd6f7645f791f9ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__12___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__12___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_84520bc7bf4537b79beadc094f676e8f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__13__max_wire_version(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__13__max_wire_version,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_51c319edef3110b4528541ecaa0152d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__14_code(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__14_code,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_2d6c9a8ecc656d8f204ea20dbdef1ce4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__15_details(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__15_details,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_74ddd60abe134fe97fd383f57ec72cc4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__16_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__16_timeout,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_614b8f6dae4592d915e79d41d020acd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__17_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_b02ad87cdc4bebcac38646b7fa87a6e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__18_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_36a35a3ac57e9063a62d532f259f5335,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__19__wtimeout_error(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__19__wtimeout_error,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_297b561b5ee67a008d15a4dd25d04ba1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_fe73da07eb0d428ca8d8f6bbb8904dbc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__20___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__20___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_55311a7416ed241a97a3872a56a0dc2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__21___reduce__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__21___reduce__,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_1fcdc17cfd06c5d8252273bd743ca2f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__22_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__22_timeout,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_236d504cb39dacfb1c4b570f329af91b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__23___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__23___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_8f56182ff45fab2f2c8e9bc9ad9726ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__24_cause(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__24_cause,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_c286db23d3c13958f2a5c1c21902f4e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__25_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__25_timeout,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_f8f4648663e3668e7f9b5c97a00f53df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__26___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__26___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_db03832ba26793a082de9b5fa17b9dc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__27_encrypted_fields(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__27_encrypted_fields,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_7c1562b3e056cf77065141d7cd9912d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__2_has_error_label(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__2_has_error_label,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        mod_consts[83],
#endif
        codeobj_cd790278ec9abbe92274b75a667053ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__3__add_error_label(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__3__add_error_label,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_50d2cf52228fc52aa653b00a53404620,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__4__remove_error_label(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__4__remove_error_label,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_8a8122d58d7f38515494e1ef8c19f635,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__5_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_8e53e36cf006a747590738da405dee51,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        mod_consts[91],
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__6_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_d63d36ecc3a3c2a73e3ca47f57c32ccb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__7___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__7___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_1013718fd9b4906783b0b17aeae7ae11,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__8_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_89f5a4f831e059236cec7269c92db68c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymongo$errors$$$function__9__format_detailed_error(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymongo$errors$$$function__9__format_detailed_error,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_94ebbbedb401a8758608a253833e0c6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pymongo$errors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_pymongo$errors[] = {
    impl_pymongo$errors$$$function__1___init__,
    impl_pymongo$errors$$$function__2_has_error_label,
    impl_pymongo$errors$$$function__3__add_error_label,
    impl_pymongo$errors$$$function__4__remove_error_label,
    impl_pymongo$errors$$$function__7___init__,
    impl_pymongo$errors$$$function__9__format_detailed_error,
    impl_pymongo$errors$$$function__10___init__,
    impl_pymongo$errors$$$function__12___init__,
    impl_pymongo$errors$$$function__13__max_wire_version,
    impl_pymongo$errors$$$function__14_code,
    impl_pymongo$errors$$$function__15_details,
    impl_pymongo$errors$$$function__16_timeout,
    impl_pymongo$errors$$$function__19__wtimeout_error,
    impl_pymongo$errors$$$function__20___init__,
    impl_pymongo$errors$$$function__21___reduce__,
    impl_pymongo$errors$$$function__22_timeout,
    impl_pymongo$errors$$$function__23___init__,
    impl_pymongo$errors$$$function__24_cause,
    impl_pymongo$errors$$$function__25_timeout,
    impl_pymongo$errors$$$function__26___init__,
    impl_pymongo$errors$$$function__27_encrypted_fields,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pymongo$errors);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_pymongo$errors,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_pymongo$errors,
        sizeof(function_table_pymongo$errors) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pymongo$errors(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pymongo$errors");

    // Store the module for future use.
    module_pymongo$errors = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pymongo$errors: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pymongo$errors: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pymongo.errors" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpymongo$errors\n");

    moduledict_pymongo$errors = MODULE_DICT(module_pymongo$errors);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pymongo$errors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pymongo$errors,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[13]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pymongo$errors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pymongo$errors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pymongo$errors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pymongo$errors);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pymongo$errors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pymongo$errors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pymongo$errors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pymongo$errors);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    struct Nuitka_CellObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    struct Nuitka_CellObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    struct Nuitka_CellObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    struct Nuitka_CellObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *outline_22_var___class__ = NULL;
    struct Nuitka_CellObject *outline_23_var___class__ = NULL;
    struct Nuitka_CellObject *outline_24_var___class__ = NULL;
    PyObject *outline_25_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__bases_orig = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__bases_orig = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__bases_orig = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__bases_orig = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__bases_orig = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__bases_orig = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__bases_orig = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__bases_orig = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__bases_orig = NULL;
    PyObject *tmp_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_23__prepared = NULL;
    PyObject *tmp_class_creation_24__bases = NULL;
    PyObject *tmp_class_creation_24__bases_orig = NULL;
    PyObject *tmp_class_creation_24__class_decl_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_24__prepared = NULL;
    PyObject *tmp_class_creation_25__bases = NULL;
    PyObject *tmp_class_creation_25__bases_orig = NULL;
    PyObject *tmp_class_creation_25__class_decl_dict = NULL;
    PyObject *tmp_class_creation_25__metaclass = NULL;
    PyObject *tmp_class_creation_25__prepared = NULL;
    PyObject *tmp_class_creation_26__bases = NULL;
    PyObject *tmp_class_creation_26__bases_orig = NULL;
    PyObject *tmp_class_creation_26__class_decl_dict = NULL;
    PyObject *tmp_class_creation_26__metaclass = NULL;
    PyObject *tmp_class_creation_26__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_1a140cd26106eff5d314fb441ad641b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *locals_pymongo$errors$$$class__1__CertificateError_33 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_pymongo$errors$$$class__2_PyMongoError_37 = NULL;
    struct Nuitka_FrameObject *frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_pymongo$errors$$$class__3_ProtocolError_69 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_pymongo$errors$$$class__4_ConnectionFailure_73 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77 = NULL;
    struct Nuitka_FrameObject *frame_bfac416cb509f13b47dcbdd93cb4ee11_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_pymongo$errors$$$class__6_AutoReconnect_90 = NULL;
    struct Nuitka_FrameObject *frame_c9fc8f53cf61348aeec1b1922ed76e8f_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_pymongo$errors$$$class__7_NetworkTimeout_117 = NULL;
    struct Nuitka_FrameObject *frame_6f589d0941300be6704ffce8f06fe66a_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *locals_pymongo$errors$$$class__8_NotPrimaryError_139 = NULL;
    struct Nuitka_FrameObject *frame_71b919b969bd06538e4afd6b656ead3b_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161 = NULL;
    struct Nuitka_FrameObject *frame_1169348ba462024cc9bdcea2e2c9d3d8_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *locals_pymongo$errors$$$class__10_ConfigurationError_178 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *locals_pymongo$errors$$$class__11_OperationFailure_182 = NULL;
    struct Nuitka_FrameObject *frame_5d5e17fb5a748cd7a87110966e5dfbdd_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *locals_pymongo$errors$$$class__12_CursorNotFound_230 = NULL;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *locals_pymongo$errors$$$class__13_ExecutionTimeout_238 = NULL;
    struct Nuitka_FrameObject *frame_0033ca81ec020b5db6babffea4ea6482_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *locals_pymongo$errors$$$class__14_WriteConcernError_252 = NULL;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *locals_pymongo$errors$$$class__15_WriteError_259 = NULL;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *locals_pymongo$errors$$$class__16_WTimeoutError_266 = NULL;
    struct Nuitka_FrameObject *frame_c917aa81138c4a0102b284c1ac214981_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *locals_pymongo$errors$$$class__17_DuplicateKeyError_281 = NULL;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *locals_pymongo$errors$$$class__18_BulkWriteError_290 = NULL;
    struct Nuitka_FrameObject *frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *locals_pymongo$errors$$$class__19_InvalidOperation_318 = NULL;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *locals_pymongo$errors$$$class__20_InvalidName_322 = NULL;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *locals_pymongo$errors$$$class__21_CollectionInvalid_326 = NULL;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *locals_pymongo$errors$$$class__22_InvalidURI_330 = NULL;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *locals_pymongo$errors$$$class__23_DocumentTooLarge_334 = NULL;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
    PyObject *locals_pymongo$errors$$$class__24_EncryptionError_338 = NULL;
    struct Nuitka_FrameObject *frame_cdd26cf71f54477cc4d46b317e404e85_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_75;
    PyObject *exception_keeper_value_75;
    PyTracebackObject *exception_keeper_tb_75;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
    PyObject *exception_keeper_type_76;
    PyObject *exception_keeper_value_76;
    PyTracebackObject *exception_keeper_tb_76;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
    PyObject *exception_keeper_type_77;
    PyObject *exception_keeper_value_77;
    PyTracebackObject *exception_keeper_tb_77;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;
    PyObject *locals_pymongo$errors$$$class__25_EncryptedCollectionError_363 = NULL;
    struct Nuitka_FrameObject *frame_da9bc4bde47d05fee80c69f3557db7bf_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_78;
    PyObject *exception_keeper_value_78;
    PyTracebackObject *exception_keeper_tb_78;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_78;
    PyObject *exception_keeper_type_79;
    PyObject *exception_keeper_value_79;
    PyTracebackObject *exception_keeper_tb_79;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_79;
    PyObject *exception_keeper_type_80;
    PyObject *exception_keeper_value_80;
    PyTracebackObject *exception_keeper_tb_80;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_80;
    PyObject *locals_pymongo$errors$$$class__26__OperationCancelled_385 = NULL;
    PyObject *exception_keeper_type_81;
    PyObject *exception_keeper_value_81;
    PyTracebackObject *exception_keeper_tb_81;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_81;
    PyObject *exception_keeper_type_82;
    PyObject *exception_keeper_value_82;
    PyTracebackObject *exception_keeper_tb_82;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_82;
    PyObject *exception_keeper_type_83;
    PyObject *exception_keeper_value_83;
    PyTracebackObject *exception_keeper_tb_83;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_83;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_2);
    }
    frame_1a140cd26106eff5d314fb441ad641b5 = MAKE_MODULE_FRAME(codeobj_1a140cd26106eff5d314fb441ad641b5, module_pymongo$errors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a140cd26106eff5d314fb441ad641b5);
    assert(Py_REFCNT(frame_1a140cd26106eff5d314fb441ad641b5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[46], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[48]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_6);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pymongo$errors,
                mod_consts[50],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[50]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pymongo$errors,
                mod_consts[52],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[52]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pymongo$errors,
                mod_consts[53],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[53]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pymongo$errors,
                mod_consts[54],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[54]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pymongo$errors,
                mod_consts[55],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[55]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pymongo$errors,
                mod_consts[56],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[56]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[57];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pymongo$errors;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[58];
        tmp_level_value_1 = mod_consts[51];
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 20;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pymongo$errors,
                mod_consts[59],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_13);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[60];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pymongo$errors;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[61];
        tmp_level_value_2 = mod_consts[51];
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 27;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pymongo$errors,
                mod_consts[62],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_14);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_1a140cd26106eff5d314fb441ad641b5, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_1a140cd26106eff5d314fb441ad641b5, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[60];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pymongo$errors;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[64];
        tmp_level_value_3 = mod_consts[51];
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 30;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pymongo$errors,
                mod_consts[65],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_15);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_1a140cd26106eff5d314fb441ad641b5, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_1a140cd26106eff5d314fb441ad641b5, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[66];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_16 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[51];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_18 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[67]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_tuple_element_1 = mod_consts[63];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 33;
        tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_4 = mod_consts[70];
        tmp_default_value_1 = mod_consts[71];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_4, tmp_default_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[70]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 33;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pymongo$errors$$$class__1__CertificateError_33 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__1__CertificateError_33, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__1__CertificateError_33, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_3 = mod_consts[66];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        tmp_dictset_value = mod_consts[66];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__1__CertificateError_33, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[63];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_pymongo$errors$$$class__1__CertificateError_33;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 33;
            tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_8;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_21 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_pymongo$errors$$$class__1__CertificateError_33);
        locals_pymongo$errors$$$class__1__CertificateError_33 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__1__CertificateError_33);
        locals_pymongo$errors$$$class__1__CertificateError_33 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 33;
        goto try_except_handler_6;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_21);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 29;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1a140cd26106eff5d314fb441ad641b5->m_frame) frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_3;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 25;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1a140cd26106eff5d314fb441ad641b5->m_frame) frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[76];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_23 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[51];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[67]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        tmp_tuple_element_4 = mod_consts[37];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 37;
        tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_name_value_5 = mod_consts[70];
        tmp_default_value_2 = mod_consts[71];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_5, tmp_default_value_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[70]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 37;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_28;
        outline_1_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pymongo$errors$$$class__2_PyMongoError_37 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_11;
        }
        frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2 = MAKE_CLASS_FRAME(tstate, codeobj_3c7e5f39ea8c1d5cdbf7d66d6b636e09, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2);
        assert(Py_REFCNT(frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[78];
            tmp_annotations_1 = DICT_COPY(mod_consts[79]);
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__1___init__(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[81]);


            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__2_has_error_label(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[82], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[84]);


            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__3__add_error_label(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(mod_consts[84]);


            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__4__remove_error_label(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_5;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_6;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[89]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 60;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_1 = MAKE_FUNCTION_pymongo$errors$$$function__5_timeout(tmp_annotations_5);

            frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2->m_frame.f_lineno = 60;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_annotations_6 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_2 = MAKE_FUNCTION_pymongo$errors$$$function__5_timeout(tmp_annotations_6);

            frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2->m_frame.f_lineno = 60;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_3c7e5f39ea8c1d5cdbf7d66d6b636e09_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_11;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_4 = mod_consts[76];
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__2_PyMongoError_37, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_11;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = mod_consts[37];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_pymongo$errors$$$class__2_PyMongoError_37;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 37;
            tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto try_except_handler_11;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_29);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_28 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_pymongo$errors$$$class__2_PyMongoError_37);
        locals_pymongo$errors$$$class__2_PyMongoError_37 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__2_PyMongoError_37);
        locals_pymongo$errors$$$class__2_PyMongoError_37 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 37;
        goto try_except_handler_9;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_28);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_31 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        tmp_condition_result_12 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_13 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[51];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[67]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        tmp_tuple_element_8 = mod_consts[93];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_8 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 69;
        tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_17 = tmp_class_creation_3__metaclass;
        tmp_name_value_6 = mod_consts[70];
        tmp_default_value_3 = mod_consts[71];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_6, tmp_default_value_3);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[70]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 69;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_35;
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pymongo$errors$$$class__3_ProtocolError_69 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__3_ProtocolError_69, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__3_ProtocolError_69, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__3_ProtocolError_69, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_14;
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__3_ProtocolError_69, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_14;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_8 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = mod_consts[93];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_pymongo$errors$$$class__3_ProtocolError_69;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 69;
            tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto try_except_handler_14;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_36 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_pymongo$errors$$$class__3_ProtocolError_69);
        locals_pymongo$errors$$$class__3_ProtocolError_69 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__3_ProtocolError_69);
        locals_pymongo$errors$$$class__3_ProtocolError_69 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 69;
        goto try_except_handler_12;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_36);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        tmp_assign_source_38 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_39 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        tmp_condition_result_16 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_19 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[51];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_41 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_20 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_21 = tmp_class_creation_4__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[67]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        tmp_tuple_element_12 = mod_consts[95];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_12 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 73;
        tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_22 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_23 = tmp_class_creation_4__metaclass;
        tmp_name_value_7 = mod_consts[70];
        tmp_default_value_4 = mod_consts[71];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_7, tmp_default_value_4);
        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[70]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 73;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_43;
    }
    branch_end_12:;
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pymongo$errors$$$class__4_ConnectionFailure_73 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__4_ConnectionFailure_73, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__4_ConnectionFailure_73, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__4_ConnectionFailure_73, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_17;
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__4_ConnectionFailure_73, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_17;
        }
        branch_no_14:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_10 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_14 = mod_consts[95];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_14 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_pymongo$errors$$$class__4_ConnectionFailure_73;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 73;
            tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_17;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_44 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_pymongo$errors$$$class__4_ConnectionFailure_73);
        locals_pymongo$errors$$$class__4_ConnectionFailure_73 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__4_ConnectionFailure_73);
        locals_pymongo$errors$$$class__4_ConnectionFailure_73 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 73;
        goto try_except_handler_15;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_44);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        tmp_assign_source_46 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_15);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_47 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        tmp_condition_result_20 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_25 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[51];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_49 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_26 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_27 = tmp_class_creation_5__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[67]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        tmp_tuple_element_16 = mod_consts[97];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_16 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 77;
        tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_28 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_22 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_29 = tmp_class_creation_5__metaclass;
        tmp_name_value_8 = mod_consts[70];
        tmp_default_value_5 = mod_consts[71];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_8, tmp_default_value_5);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[70]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 77;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_16:;
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_51;
    }
    branch_end_15:;
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_20;
        }
        frame_bfac416cb509f13b47dcbdd93cb4ee11_3 = MAKE_CLASS_FRAME(tstate, codeobj_bfac416cb509f13b47dcbdd93cb4ee11, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bfac416cb509f13b47dcbdd93cb4ee11_3);
        assert(Py_REFCNT(frame_bfac416cb509f13b47dcbdd93cb4ee11_3) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_7;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_8;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_23 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_12 = PyObject_GetItem(locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77, mod_consts[89]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_7 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_3 = MAKE_FUNCTION_pymongo$errors$$$function__6_timeout(tmp_annotations_7);

            frame_bfac416cb509f13b47dcbdd93cb4ee11_3->m_frame.f_lineno = 85;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;
            tmp_annotations_8 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_4 = MAKE_FUNCTION_pymongo$errors$$$function__6_timeout(tmp_annotations_8);

            frame_bfac416cb509f13b47dcbdd93cb4ee11_3->m_frame.f_lineno = 85;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bfac416cb509f13b47dcbdd93cb4ee11_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bfac416cb509f13b47dcbdd93cb4ee11_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bfac416cb509f13b47dcbdd93cb4ee11_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bfac416cb509f13b47dcbdd93cb4ee11_3,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_bfac416cb509f13b47dcbdd93cb4ee11_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_20;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_20;
        }
        branch_no_17:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_14 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_18 = mod_consts[97];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_18 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 77;
            tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto try_except_handler_20;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_52 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_52);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77);
        locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77);
        locals_pymongo$errors$$$class__5_WaitQueueTimeoutError_77 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 77;
        goto try_except_handler_18;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_52);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        tmp_assign_source_54 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_54, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_55 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        tmp_condition_result_25 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_31 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[51];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_32 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_33 = tmp_class_creation_6__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[67]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        tmp_tuple_element_20 = mod_consts[100];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_20 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 90;
        tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_34 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_35 = tmp_class_creation_6__metaclass;
        tmp_name_value_9 = mod_consts[70];
        tmp_default_value_6 = mod_consts[71];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_9, tmp_default_value_6);
        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[70]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 90;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_59;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_60;
        outline_5_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pymongo$errors$$$class__6_AutoReconnect_90 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__6_AutoReconnect_90, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__6_AutoReconnect_90, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__6_AutoReconnect_90, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_23;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__6_AutoReconnect_90, mod_consts[102], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_23;
        }
        frame_c9fc8f53cf61348aeec1b1922ed76e8f_4 = MAKE_CLASS_FRAME(tstate, codeobj_c9fc8f53cf61348aeec1b1922ed76e8f, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c9fc8f53cf61348aeec1b1922ed76e8f_4);
        assert(Py_REFCNT(frame_c9fc8f53cf61348aeec1b1922ed76e8f_4) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = mod_consts[103];
            tmp_ass_subscribed_1 = PyObject_GetItem(locals_pymongo$errors$$$class__6_AutoReconnect_90, mod_consts[102]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_1 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = mod_consts[103];
            tmp_ass_subscribed_2 = PyObject_GetItem(locals_pymongo$errors$$$class__6_AutoReconnect_90, mod_consts[102]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_2 = mod_consts[12];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_9;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_defaults_2 = mod_consts[78];
            tmp_annotations_9 = DICT_COPY(mod_consts[104]);
            Py_INCREF(tmp_defaults_2);

            tmp_closure_2[0] = outline_5_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__7___init__(tmp_defaults_2, tmp_annotations_9, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__6_AutoReconnect_90, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c9fc8f53cf61348aeec1b1922ed76e8f_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c9fc8f53cf61348aeec1b1922ed76e8f_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c9fc8f53cf61348aeec1b1922ed76e8f_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c9fc8f53cf61348aeec1b1922ed76e8f_4,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_c9fc8f53cf61348aeec1b1922ed76e8f_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_23;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__6_AutoReconnect_90, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_23;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_16 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_22 = mod_consts[100];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_22 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_pymongo$errors$$$class__6_AutoReconnect_90;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 90;
            tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto try_except_handler_23;
            }
            assert(Nuitka_Cell_GET(outline_5_var___class__) == NULL);
            PyCell_SET(outline_5_var___class__, tmp_assign_source_61);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_5_var___class__));
        tmp_assign_source_60 = Nuitka_Cell_GET(outline_5_var___class__);
        Py_INCREF(tmp_assign_source_60);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_pymongo$errors$$$class__6_AutoReconnect_90);
        locals_pymongo$errors$$$class__6_AutoReconnect_90 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__6_AutoReconnect_90);
        locals_pymongo$errors$$$class__6_AutoReconnect_90 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 90;
        goto try_except_handler_21;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_60);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_tuple_element_23;
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_tuple_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        tmp_assign_source_62 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_62, 0, tmp_tuple_element_23);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_63 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        tmp_condition_result_29 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_37 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[51];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_65 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_38 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_39 = tmp_class_creation_7__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[67]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        tmp_tuple_element_24 = mod_consts[106];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_24);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_24 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_24);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 117;
        tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_40 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_41 = tmp_class_creation_7__metaclass;
        tmp_name_value_10 = mod_consts[70];
        tmp_default_value_7 = mod_consts[71];
        tmp_tuple_element_25 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_10, tmp_default_value_7);
        if (tmp_tuple_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_42 == NULL));
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[70]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_24;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 117;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_24;
    }
    branch_no_22:;
    goto branch_end_21;
    branch_no_21:;
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_67;
    }
    branch_end_21:;
    {
        PyObject *tmp_assign_source_68;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pymongo$errors$$$class__7_NetworkTimeout_117 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__7_NetworkTimeout_117, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__7_NetworkTimeout_117, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__7_NetworkTimeout_117, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_26;
        }
        frame_6f589d0941300be6704ffce8f06fe66a_5 = MAKE_CLASS_FRAME(tstate, codeobj_6f589d0941300be6704ffce8f06fe66a, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6f589d0941300be6704ffce8f06fe66a_5);
        assert(Py_REFCNT(frame_6f589d0941300be6704ffce8f06fe66a_5) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_10;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_11;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__7_NetworkTimeout_117, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_32 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_18 = PyObject_GetItem(locals_pymongo$errors$$$class__7_NetworkTimeout_117, mod_consts[89]);

            if (unlikely(tmp_called_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_10 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_5 = MAKE_FUNCTION_pymongo$errors$$$function__8_timeout(tmp_annotations_10);

            frame_6f589d0941300be6704ffce8f06fe66a_5->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_19 = (PyObject *)&PyProperty_Type;
            tmp_annotations_11 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_6 = MAKE_FUNCTION_pymongo$errors$$$function__8_timeout(tmp_annotations_11);

            frame_6f589d0941300be6704ffce8f06fe66a_5->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__7_NetworkTimeout_117, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6f589d0941300be6704ffce8f06fe66a_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6f589d0941300be6704ffce8f06fe66a_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6f589d0941300be6704ffce8f06fe66a_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6f589d0941300be6704ffce8f06fe66a_5,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_6f589d0941300be6704ffce8f06fe66a_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_26;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_33;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_33 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_33 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto try_except_handler_26;
            }
            if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
                goto branch_yes_23;
            } else {
                goto branch_no_23;
            }
        }
        branch_yes_23:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__7_NetworkTimeout_117, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_26;
        }
        branch_no_23:;
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_20 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_26 = mod_consts[106];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_26 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_pymongo$errors$$$class__7_NetworkTimeout_117;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 117;
            tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto try_except_handler_26;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_69;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_68 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_68);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_pymongo$errors$$$class__7_NetworkTimeout_117);
        locals_pymongo$errors$$$class__7_NetworkTimeout_117 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__7_NetworkTimeout_117);
        locals_pymongo$errors$$$class__7_NetworkTimeout_117 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 117;
        goto try_except_handler_24;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_68);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_annotations_12;
        tmp_annotations_12 = DICT_COPY(mod_consts[109]);


        tmp_assign_source_70 = MAKE_FUNCTION_pymongo$errors$$$function__9__format_detailed_error(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_70);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_tuple_element_27;
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_assign_source_71 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_71, 0, tmp_tuple_element_27);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_72 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_34;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_condition_result_34 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_43 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[51];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_74 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_74;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_44 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_condition_result_35 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_45 = tmp_class_creation_8__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[67]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_tuple_element_28 = mod_consts[110];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_28 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 139;
        tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_75;
    }
    {
        bool tmp_condition_result_36;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_46 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_36 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_47 = tmp_class_creation_8__metaclass;
        tmp_name_value_11 = mod_consts[70];
        tmp_default_value_8 = mod_consts[71];
        tmp_tuple_element_29 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_11, tmp_default_value_8);
        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_48 == NULL));
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[70]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 139;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_27;
    }
    branch_no_25:;
    goto branch_end_24;
    branch_no_24:;
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_76;
    }
    branch_end_24:;
    {
        PyObject *tmp_assign_source_77;
        outline_7_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pymongo$errors$$$class__8_NotPrimaryError_139 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__8_NotPrimaryError_139, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_29;
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__8_NotPrimaryError_139, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_29;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__8_NotPrimaryError_139, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_29;
        }
        frame_71b919b969bd06538e4afd6b656ead3b_6 = MAKE_CLASS_FRAME(tstate, codeobj_71b919b969bd06538e4afd6b656ead3b, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_71b919b969bd06538e4afd6b656ead3b_6);
        assert(Py_REFCNT(frame_71b919b969bd06538e4afd6b656ead3b_6) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_13;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_defaults_3 = mod_consts[78];
            tmp_annotations_13 = DICT_COPY(mod_consts[112]);
            Py_INCREF(tmp_defaults_3);

            tmp_closure_3[0] = outline_7_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__10___init__(tmp_defaults_3, tmp_annotations_13, tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__8_NotPrimaryError_139, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_71b919b969bd06538e4afd6b656ead3b_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_71b919b969bd06538e4afd6b656ead3b_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_71b919b969bd06538e4afd6b656ead3b_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_71b919b969bd06538e4afd6b656ead3b_6,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_71b919b969bd06538e4afd6b656ead3b_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_29;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_37;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_37 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_37 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto try_except_handler_29;
            }
            if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
                goto branch_yes_26;
            } else {
                goto branch_no_26;
            }
        }
        branch_yes_26:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__8_NotPrimaryError_139, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_29;
        }
        branch_no_26:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_22 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_30 = mod_consts[110];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_30 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_pymongo$errors$$$class__8_NotPrimaryError_139;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 139;
            tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto try_except_handler_29;
            }
            assert(Nuitka_Cell_GET(outline_7_var___class__) == NULL);
            PyCell_SET(outline_7_var___class__, tmp_assign_source_78);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_7_var___class__));
        tmp_assign_source_77 = Nuitka_Cell_GET(outline_7_var___class__);
        Py_INCREF(tmp_assign_source_77);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_DECREF(locals_pymongo$errors$$$class__8_NotPrimaryError_139);
        locals_pymongo$errors$$$class__8_NotPrimaryError_139 = NULL;
        goto try_return_handler_28;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__8_NotPrimaryError_139);
        locals_pymongo$errors$$$class__8_NotPrimaryError_139 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 139;
        goto try_except_handler_27;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_77);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_tuple_element_31;
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_31 == NULL)) {
            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_tuple_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        tmp_assign_source_79 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_79, 0, tmp_tuple_element_31);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_80 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        tmp_condition_result_38 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_49 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[51];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_82 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_50 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_51 = tmp_class_creation_9__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[67]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        tmp_tuple_element_32 = mod_consts[114];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_32);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_32 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_32);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 161;
        tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_83;
    }
    {
        bool tmp_condition_result_40;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_52 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_40 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_53 = tmp_class_creation_9__metaclass;
        tmp_name_value_12 = mod_consts[70];
        tmp_default_value_9 = mod_consts[71];
        tmp_tuple_element_33 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_12, tmp_default_value_9);
        if (tmp_tuple_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_54 == NULL));
            tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[70]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_30;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_30;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 161;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_30;
    }
    branch_no_28:;
    goto branch_end_27;
    branch_no_27:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_84;
    }
    branch_end_27:;
    {
        PyObject *tmp_assign_source_85;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_32;
        }
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_32;
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_32;
        }
        frame_1169348ba462024cc9bdcea2e2c9d3d8_7 = MAKE_CLASS_FRAME(tstate, codeobj_1169348ba462024cc9bdcea2e2c9d3d8, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_1169348ba462024cc9bdcea2e2c9d3d8_7);
        assert(Py_REFCNT(frame_1169348ba462024cc9bdcea2e2c9d3d8_7) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_41;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_14;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_15;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_41 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_24 = PyObject_GetItem(locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161, mod_consts[89]);

            if (unlikely(tmp_called_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_annotations_14 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_7 = MAKE_FUNCTION_pymongo$errors$$$function__11_timeout(tmp_annotations_14);

            frame_1169348ba462024cc9bdcea2e2c9d3d8_7->m_frame.f_lineno = 173;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_25 = (PyObject *)&PyProperty_Type;
            tmp_annotations_15 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_8 = MAKE_FUNCTION_pymongo$errors$$$function__11_timeout(tmp_annotations_15);

            frame_1169348ba462024cc9bdcea2e2c9d3d8_7->m_frame.f_lineno = 173;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1169348ba462024cc9bdcea2e2c9d3d8_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1169348ba462024cc9bdcea2e2c9d3d8_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1169348ba462024cc9bdcea2e2c9d3d8_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1169348ba462024cc9bdcea2e2c9d3d8_7,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_1169348ba462024cc9bdcea2e2c9d3d8_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_32;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto try_except_handler_32;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_29;
            } else {
                goto branch_no_29;
            }
        }
        branch_yes_29:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_32;
        }
        branch_no_29:;
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_26 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_34 = mod_consts[114];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_34 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 161;
            tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto try_except_handler_32;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_86;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_85 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_85);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF(locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161);
        locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161 = NULL;
        goto try_return_handler_31;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161);
        locals_pymongo$errors$$$class__9_ServerSelectionTimeoutError_161 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 161;
        goto try_except_handler_30;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_85);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_tuple_element_35;
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_tuple_element_35 == NULL)) {
            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_tuple_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        tmp_assign_source_87 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_35);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_88 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_43;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        tmp_condition_result_43 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_55 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[51];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_90 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_90;
    }
    {
        bool tmp_condition_result_44;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_56 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        tmp_condition_result_44 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_44 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_57 = tmp_class_creation_10__metaclass;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[67]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        tmp_tuple_element_36 = mod_consts[117];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_36 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 178;
        tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_91;
    }
    {
        bool tmp_condition_result_45;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_58 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_59 = tmp_class_creation_10__metaclass;
        tmp_name_value_13 = mod_consts[70];
        tmp_default_value_10 = mod_consts[71];
        tmp_tuple_element_37 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_13, tmp_default_value_10);
        if (tmp_tuple_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_60 == NULL));
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[70]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_33;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 178;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_33;
    }
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_92;
    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_93;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_pymongo$errors$$$class__10_ConfigurationError_178 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__10_ConfigurationError_178, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_35;
        }
        tmp_dictset_value = mod_consts[118];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__10_ConfigurationError_178, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_35;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__10_ConfigurationError_178, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_35;
        }
        {
            nuitka_bool tmp_condition_result_46;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_12 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_12 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_46 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_46 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto try_except_handler_35;
            }
            if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
                goto branch_yes_32;
            } else {
                goto branch_no_32;
            }
        }
        branch_yes_32:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__10_ConfigurationError_178, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_35;
        }
        branch_no_32:;
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_28 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_38 = mod_consts[117];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_38 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = locals_pymongo$errors$$$class__10_ConfigurationError_178;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 178;
            tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto try_except_handler_35;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_94;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_93 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_93);
        goto try_return_handler_35;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF(locals_pymongo$errors$$$class__10_ConfigurationError_178);
        locals_pymongo$errors$$$class__10_ConfigurationError_178 = NULL;
        goto try_return_handler_34;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__10_ConfigurationError_178);
        locals_pymongo$errors$$$class__10_ConfigurationError_178 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto try_except_handler_34;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 178;
        goto try_except_handler_33;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_93);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_tuple_element_39;
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_tuple_element_39 == NULL)) {
            tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_tuple_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        tmp_assign_source_95 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_95, 0, tmp_tuple_element_39);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_96 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_metaclass_value_11;
        nuitka_bool tmp_condition_result_47;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        tmp_condition_result_47 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_61 = tmp_class_creation_11__bases;
        tmp_subscript_value_11 = mod_consts[51];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_98 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_98;
    }
    {
        bool tmp_condition_result_48;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_62 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        tmp_condition_result_48 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_48 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_63 = tmp_class_creation_11__metaclass;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[67]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        tmp_tuple_element_40 = mod_consts[119];
        tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_40 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 182;
        tmp_assign_source_99 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_99;
    }
    {
        bool tmp_condition_result_49;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_64 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_49 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_65 = tmp_class_creation_11__metaclass;
        tmp_name_value_14 = mod_consts[70];
        tmp_default_value_11 = mod_consts[71];
        tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_14, tmp_default_value_11);
        if (tmp_tuple_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_66;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_66 == NULL));
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[70]);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_36;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 182;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_36;
    }
    branch_no_34:;
    goto branch_end_33;
    branch_no_33:;
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_100;
    }
    branch_end_33:;
    {
        PyObject *tmp_assign_source_101;
        outline_10_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_pymongo$errors$$$class__11_OperationFailure_182 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_38;
        }
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_38;
        }
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_38;
        }
        frame_5d5e17fb5a748cd7a87110966e5dfbdd_8 = MAKE_CLASS_FRAME(tstate, codeobj_5d5e17fb5a748cd7a87110966e5dfbdd, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5d5e17fb5a748cd7a87110966e5dfbdd_8);
        assert(Py_REFCNT(frame_5d5e17fb5a748cd7a87110966e5dfbdd_8) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_16;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_defaults_4 = mod_consts[121];
            tmp_annotations_16 = DICT_COPY(mod_consts[122]);
            Py_INCREF(tmp_defaults_4);

            tmp_closure_4[0] = outline_10_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__12___init__(tmp_defaults_4, tmp_annotations_16, tmp_closure_4);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
        }
        {
            nuitka_bool tmp_condition_result_50;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_17;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_18;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            tmp_condition_result_50 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            tmp_called_value_30 = PyObject_GetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[89]);

            if (unlikely(tmp_called_value_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            tmp_annotations_17 = DICT_COPY(mod_consts[124]);


            tmp_args_element_value_9 = MAKE_FUNCTION_pymongo$errors$$$function__13__max_wire_version(tmp_annotations_17);

            frame_5d5e17fb5a748cd7a87110966e5dfbdd_8->m_frame.f_lineno = 204;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_31 = (PyObject *)&PyProperty_Type;
            tmp_annotations_18 = DICT_COPY(mod_consts[124]);


            tmp_args_element_value_10 = MAKE_FUNCTION_pymongo$errors$$$function__13__max_wire_version(tmp_annotations_18);

            frame_5d5e17fb5a748cd7a87110966e5dfbdd_8->m_frame.f_lineno = 204;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
        }
        {
            nuitka_bool tmp_condition_result_51;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_19;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_20;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            tmp_condition_result_51 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            tmp_called_value_32 = PyObject_GetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[89]);

            if (unlikely(tmp_called_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            tmp_annotations_19 = DICT_COPY(mod_consts[124]);


            tmp_args_element_value_11 = MAKE_FUNCTION_pymongo$errors$$$function__14_code(tmp_annotations_19);

            frame_5d5e17fb5a748cd7a87110966e5dfbdd_8->m_frame.f_lineno = 208;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_33 = (PyObject *)&PyProperty_Type;
            tmp_annotations_20 = DICT_COPY(mod_consts[124]);


            tmp_args_element_value_12 = MAKE_FUNCTION_pymongo$errors$$$function__14_code(tmp_annotations_20);

            frame_5d5e17fb5a748cd7a87110966e5dfbdd_8->m_frame.f_lineno = 208;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[127], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
        }
        {
            nuitka_bool tmp_condition_result_52;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_21;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_22;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            tmp_condition_result_52 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_18;
            } else {
                goto condexpr_false_18;
            }
            condexpr_true_18:;
            tmp_called_value_34 = PyObject_GetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[89]);

            if (unlikely(tmp_called_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            tmp_annotations_21 = DICT_COPY(mod_consts[129]);


            tmp_args_element_value_13 = MAKE_FUNCTION_pymongo$errors$$$function__15_details(tmp_annotations_21);

            frame_5d5e17fb5a748cd7a87110966e5dfbdd_8->m_frame.f_lineno = 213;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_35 = (PyObject *)&PyProperty_Type;
            tmp_annotations_22 = DICT_COPY(mod_consts[129]);


            tmp_args_element_value_14 = MAKE_FUNCTION_pymongo$errors$$$function__15_details(tmp_annotations_22);

            frame_5d5e17fb5a748cd7a87110966e5dfbdd_8->m_frame.f_lineno = 213;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
        }
        {
            nuitka_bool tmp_condition_result_53;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_23;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_24;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            tmp_condition_result_53 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_19;
            } else {
                goto condexpr_false_19;
            }
            condexpr_true_19:;
            tmp_called_value_36 = PyObject_GetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[89]);

            if (unlikely(tmp_called_value_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 225;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            tmp_annotations_23 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_15 = MAKE_FUNCTION_pymongo$errors$$$function__16_timeout(tmp_annotations_23);

            frame_5d5e17fb5a748cd7a87110966e5dfbdd_8->m_frame.f_lineno = 225;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            goto condexpr_end_19;
            condexpr_false_19:;
            tmp_called_value_37 = (PyObject *)&PyProperty_Type;
            tmp_annotations_24 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_16 = MAKE_FUNCTION_pymongo$errors$$$function__16_timeout(tmp_annotations_24);

            frame_5d5e17fb5a748cd7a87110966e5dfbdd_8->m_frame.f_lineno = 225;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
            condexpr_end_19:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5d5e17fb5a748cd7a87110966e5dfbdd_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5d5e17fb5a748cd7a87110966e5dfbdd_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5d5e17fb5a748cd7a87110966e5dfbdd_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5d5e17fb5a748cd7a87110966e5dfbdd_8,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_5d5e17fb5a748cd7a87110966e5dfbdd_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_38;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_54;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_13 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_13 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_54 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_54 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto try_except_handler_38;
            }
            if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
                goto branch_yes_35;
            } else {
                goto branch_no_35;
            }
        }
        branch_yes_35:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__11_OperationFailure_182, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_38;
        }
        branch_no_35:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_38 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_42 = mod_consts[119];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_42 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = locals_pymongo$errors$$$class__11_OperationFailure_182;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 182;
            tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto try_except_handler_38;
            }
            assert(Nuitka_Cell_GET(outline_10_var___class__) == NULL);
            PyCell_SET(outline_10_var___class__, tmp_assign_source_102);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_10_var___class__));
        tmp_assign_source_101 = Nuitka_Cell_GET(outline_10_var___class__);
        Py_INCREF(tmp_assign_source_101);
        goto try_return_handler_38;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        Py_DECREF(locals_pymongo$errors$$$class__11_OperationFailure_182);
        locals_pymongo$errors$$$class__11_OperationFailure_182 = NULL;
        goto try_return_handler_37;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__11_OperationFailure_182);
        locals_pymongo$errors$$$class__11_OperationFailure_182 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto try_except_handler_37;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 182;
        goto try_except_handler_36;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_101);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_tuple_element_43;
        tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_tuple_element_43 == NULL)) {
            tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_tuple_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        tmp_assign_source_103 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_103, 0, tmp_tuple_element_43);
        assert(tmp_class_creation_12__bases_orig == NULL);
        tmp_class_creation_12__bases_orig = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_dircall_arg1_12;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dircall_arg1_12 = tmp_class_creation_12__bases_orig;
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_104 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_metaclass_value_12;
        nuitka_bool tmp_condition_result_55;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_12;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_12 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        tmp_condition_result_55 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_67 = tmp_class_creation_12__bases;
        tmp_subscript_value_12 = mod_consts[51];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_12, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_20:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_12 = tmp_class_creation_12__bases;
        tmp_assign_source_106 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_106;
    }
    {
        bool tmp_condition_result_56;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_68 = tmp_class_creation_12__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        tmp_condition_result_56 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_56 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_kwargs_value_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_69 = tmp_class_creation_12__metaclass;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[67]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        tmp_tuple_element_44 = mod_consts[132];
        tmp_args_value_23 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_44);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_44 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_44);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 230;
        tmp_assign_source_107 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_value_23);
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_107;
    }
    {
        bool tmp_condition_result_57;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_70 = tmp_class_creation_12__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_57 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_57 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_71 = tmp_class_creation_12__metaclass;
        tmp_name_value_15 = mod_consts[70];
        tmp_default_value_12 = mod_consts[71];
        tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_15, tmp_default_value_12);
        if (tmp_tuple_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_72;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_24 = tmp_class_creation_12__prepared;
            tmp_expression_value_72 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_72 == NULL));
            tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[70]);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_45);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_39;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_39;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 230;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_39;
    }
    branch_no_37:;
    goto branch_end_36;
    branch_no_36:;
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_108;
    }
    branch_end_36:;
    {
        PyObject *tmp_assign_source_109;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_pymongo$errors$$$class__12_CursorNotFound_230 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__12_CursorNotFound_230, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_41;
        }
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__12_CursorNotFound_230, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_41;
        }
        tmp_dictset_value = mod_consts[132];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__12_CursorNotFound_230, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_41;
        }
        {
            nuitka_bool tmp_condition_result_58;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_14 = tmp_class_creation_12__bases;
            CHECK_OBJECT(tmp_class_creation_12__bases_orig);
            tmp_cmp_expr_right_14 = tmp_class_creation_12__bases_orig;
            tmp_condition_result_58 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_58 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto try_except_handler_41;
            }
            if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
                goto branch_yes_38;
            } else {
                goto branch_no_38;
            }
        }
        branch_yes_38:;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dictset_value = tmp_class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__12_CursorNotFound_230, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_41;
        }
        branch_no_38:;
        {
            PyObject *tmp_assign_source_110;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_40 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_46 = mod_consts[132];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_46 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_pymongo$errors$$$class__12_CursorNotFound_230;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 230;
            tmp_assign_source_110 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto try_except_handler_41;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_110;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_109 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_109);
        goto try_return_handler_41;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        Py_DECREF(locals_pymongo$errors$$$class__12_CursorNotFound_230);
        locals_pymongo$errors$$$class__12_CursorNotFound_230 = NULL;
        goto try_return_handler_40;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__12_CursorNotFound_230);
        locals_pymongo$errors$$$class__12_CursorNotFound_230 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto try_except_handler_40;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 230;
        goto try_except_handler_39;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_109);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_12__bases_orig);
    Py_DECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_tuple_element_47;
        tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_tuple_element_47 == NULL)) {
            tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_tuple_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        tmp_assign_source_111 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_111, 0, tmp_tuple_element_47);
        assert(tmp_class_creation_13__bases_orig == NULL);
        tmp_class_creation_13__bases_orig = tmp_assign_source_111;
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_dircall_arg1_13;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dircall_arg1_13 = tmp_class_creation_13__bases_orig;
        Py_INCREF(tmp_dircall_arg1_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_assign_source_112 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_112;
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_metaclass_value_13;
        nuitka_bool tmp_condition_result_59;
        int tmp_truth_name_13;
        PyObject *tmp_type_arg_25;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_13;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_13 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        tmp_condition_result_59 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_59 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_73 = tmp_class_creation_13__bases;
        tmp_subscript_value_13 = mod_consts[51];
        tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_13, 0);
        if (tmp_type_arg_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
        Py_DECREF(tmp_type_arg_25);
        if (tmp_metaclass_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_13);
        condexpr_end_21:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_13 = tmp_class_creation_13__bases;
        tmp_assign_source_114 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_114;
    }
    {
        bool tmp_condition_result_60;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_74 = tmp_class_creation_13__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        tmp_condition_result_60 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_60 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_value_25;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_kwargs_value_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_75 = tmp_class_creation_13__metaclass;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[67]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        tmp_tuple_element_48 = mod_consts[134];
        tmp_args_value_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_48 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_25 = tmp_class_creation_13__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 238;
        tmp_assign_source_115 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_25, tmp_kwargs_value_25);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_value_25);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_115;
    }
    {
        bool tmp_condition_result_61;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_76 = tmp_class_creation_13__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_61 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_61 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_name_value_16;
        PyObject *tmp_default_value_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_77 = tmp_class_creation_13__metaclass;
        tmp_name_value_16 = mod_consts[70];
        tmp_default_value_13 = mod_consts[71];
        tmp_tuple_element_49 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_16, tmp_default_value_13);
        if (tmp_tuple_element_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_78;
            PyObject *tmp_type_arg_26;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_26 = tmp_class_creation_13__prepared;
            tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_expression_value_78 == NULL));
            tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[70]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_42;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_42;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 238;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_42;
    }
    branch_no_40:;
    goto branch_end_39;
    branch_no_39:;
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_116;
    }
    branch_end_39:;
    {
        PyObject *tmp_assign_source_117;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_pymongo$errors$$$class__13_ExecutionTimeout_238 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__13_ExecutionTimeout_238, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_44;
        }
        tmp_dictset_value = mod_consts[135];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__13_ExecutionTimeout_238, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_44;
        }
        tmp_dictset_value = mod_consts[134];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__13_ExecutionTimeout_238, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_44;
        }
        frame_0033ca81ec020b5db6babffea4ea6482_9 = MAKE_CLASS_FRAME(tstate, codeobj_0033ca81ec020b5db6babffea4ea6482, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0033ca81ec020b5db6babffea4ea6482_9);
        assert(Py_REFCNT(frame_0033ca81ec020b5db6babffea4ea6482_9) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_62;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_25;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_26;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__13_ExecutionTimeout_238, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_condition_result_62 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_22;
            } else {
                goto condexpr_false_22;
            }
            condexpr_true_22:;
            tmp_called_value_42 = PyObject_GetItem(locals_pymongo$errors$$$class__13_ExecutionTimeout_238, mod_consts[89]);

            if (unlikely(tmp_called_value_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_annotations_25 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_17 = MAKE_FUNCTION_pymongo$errors$$$function__17_timeout(tmp_annotations_25);

            frame_0033ca81ec020b5db6babffea4ea6482_9->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            goto condexpr_end_22;
            condexpr_false_22:;
            tmp_called_value_43 = (PyObject *)&PyProperty_Type;
            tmp_annotations_26 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_18 = MAKE_FUNCTION_pymongo$errors$$$function__17_timeout(tmp_annotations_26);

            frame_0033ca81ec020b5db6babffea4ea6482_9->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            condexpr_end_22:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__13_ExecutionTimeout_238, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0033ca81ec020b5db6babffea4ea6482_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0033ca81ec020b5db6babffea4ea6482_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0033ca81ec020b5db6babffea4ea6482_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0033ca81ec020b5db6babffea4ea6482_9,
            type_description_2,
            outline_12_var___class__
        );



        assertFrameObject(frame_0033ca81ec020b5db6babffea4ea6482_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_44;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_63;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_cmp_expr_left_15 = tmp_class_creation_13__bases;
            CHECK_OBJECT(tmp_class_creation_13__bases_orig);
            tmp_cmp_expr_right_15 = tmp_class_creation_13__bases_orig;
            tmp_condition_result_63 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_63 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto try_except_handler_44;
            }
            if (tmp_condition_result_63 == NUITKA_BOOL_TRUE) {
                goto branch_yes_41;
            } else {
                goto branch_no_41;
            }
        }
        branch_yes_41:;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dictset_value = tmp_class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__13_ExecutionTimeout_238, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_44;
        }
        branch_no_41:;
        {
            PyObject *tmp_assign_source_118;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_44 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_50 = mod_consts[134];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_50 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_50);
            tmp_tuple_element_50 = locals_pymongo$errors$$$class__13_ExecutionTimeout_238;
            PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_26 = tmp_class_creation_13__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 238;
            tmp_assign_source_118 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto try_except_handler_44;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_118;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_117 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_117);
        goto try_return_handler_44;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        Py_DECREF(locals_pymongo$errors$$$class__13_ExecutionTimeout_238);
        locals_pymongo$errors$$$class__13_ExecutionTimeout_238 = NULL;
        goto try_return_handler_43;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__13_ExecutionTimeout_238);
        locals_pymongo$errors$$$class__13_ExecutionTimeout_238 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto try_except_handler_43;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 238;
        goto try_except_handler_42;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_117);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_class_creation_13__bases_orig);
    Py_DECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_tuple_element_51;
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_tuple_element_51 == NULL)) {
            tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_tuple_element_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        tmp_assign_source_119 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_119, 0, tmp_tuple_element_51);
        assert(tmp_class_creation_14__bases_orig == NULL);
        tmp_class_creation_14__bases_orig = tmp_assign_source_119;
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_dircall_arg1_14;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dircall_arg1_14 = tmp_class_creation_14__bases_orig;
        Py_INCREF(tmp_dircall_arg1_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_assign_source_120 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_120;
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_121;
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_metaclass_value_14;
        nuitka_bool tmp_condition_result_64;
        int tmp_truth_name_14;
        PyObject *tmp_type_arg_27;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_14;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_14 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        tmp_condition_result_64 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_value_79 = tmp_class_creation_14__bases;
        tmp_subscript_value_14 = mod_consts[51];
        tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_14, 0);
        if (tmp_type_arg_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
        Py_DECREF(tmp_type_arg_27);
        if (tmp_metaclass_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_14);
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_value_14 = tmp_class_creation_14__bases;
        tmp_assign_source_122 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
        Py_DECREF(tmp_metaclass_value_14);
        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_122;
    }
    {
        bool tmp_condition_result_65;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_80 = tmp_class_creation_14__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        tmp_condition_result_65 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_65 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_value_27;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_kwargs_value_27;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_81 = tmp_class_creation_14__metaclass;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[67]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        tmp_tuple_element_52 = mod_consts[137];
        tmp_args_value_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_52);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_52 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_52);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_27 = tmp_class_creation_14__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 252;
        tmp_assign_source_123 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_27, tmp_kwargs_value_27);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_value_27);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_123;
    }
    {
        bool tmp_condition_result_66;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_82;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_82 = tmp_class_creation_14__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_66 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_66 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_name_value_17;
        PyObject *tmp_default_value_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_83 = tmp_class_creation_14__metaclass;
        tmp_name_value_17 = mod_consts[70];
        tmp_default_value_14 = mod_consts[71];
        tmp_tuple_element_53 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_17, tmp_default_value_14);
        if (tmp_tuple_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_84;
            PyObject *tmp_type_arg_28;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_53);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_28 = tmp_class_creation_14__prepared;
            tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_expression_value_84 == NULL));
            tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[70]);
            Py_DECREF(tmp_expression_value_84);
            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_53);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_45;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_45;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 252;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_45;
    }
    branch_no_43:;
    goto branch_end_42;
    branch_no_42:;
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_124;
    }
    branch_end_42:;
    {
        PyObject *tmp_assign_source_125;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_pymongo$errors$$$class__14_WriteConcernError_252 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__14_WriteConcernError_252, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_47;
        }
        tmp_dictset_value = mod_consts[138];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__14_WriteConcernError_252, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_47;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__14_WriteConcernError_252, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_47;
        }
        {
            nuitka_bool tmp_condition_result_67;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_cmp_expr_left_16 = tmp_class_creation_14__bases;
            CHECK_OBJECT(tmp_class_creation_14__bases_orig);
            tmp_cmp_expr_right_16 = tmp_class_creation_14__bases_orig;
            tmp_condition_result_67 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            if (tmp_condition_result_67 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto try_except_handler_47;
            }
            if (tmp_condition_result_67 == NUITKA_BOOL_TRUE) {
                goto branch_yes_44;
            } else {
                goto branch_no_44;
            }
        }
        branch_yes_44:;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dictset_value = tmp_class_creation_14__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__14_WriteConcernError_252, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_47;
        }
        branch_no_44:;
        {
            PyObject *tmp_assign_source_126;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_46 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_54 = mod_consts[137];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_54 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_54);
            tmp_tuple_element_54 = locals_pymongo$errors$$$class__14_WriteConcernError_252;
            PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_28 = tmp_class_creation_14__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 252;
            tmp_assign_source_126 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto try_except_handler_47;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_126;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_125 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_125);
        goto try_return_handler_47;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_47:;
        Py_DECREF(locals_pymongo$errors$$$class__14_WriteConcernError_252);
        locals_pymongo$errors$$$class__14_WriteConcernError_252 = NULL;
        goto try_return_handler_46;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__14_WriteConcernError_252);
        locals_pymongo$errors$$$class__14_WriteConcernError_252 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto try_except_handler_46;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 252;
        goto try_except_handler_45;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_125);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_class_creation_14__bases_orig);
    Py_DECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_14__bases);
    Py_DECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_tuple_element_55;
        tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_tuple_element_55 == NULL)) {
            tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_tuple_element_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        tmp_assign_source_127 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_127, 0, tmp_tuple_element_55);
        assert(tmp_class_creation_15__bases_orig == NULL);
        tmp_class_creation_15__bases_orig = tmp_assign_source_127;
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_dircall_arg1_15;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dircall_arg1_15 = tmp_class_creation_15__bases_orig;
        Py_INCREF(tmp_dircall_arg1_15);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
            tmp_assign_source_128 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_128;
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_129;
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_metaclass_value_15;
        nuitka_bool tmp_condition_result_68;
        int tmp_truth_name_15;
        PyObject *tmp_type_arg_29;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_bases_value_15;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_15 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        tmp_condition_result_68 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_85 = tmp_class_creation_15__bases;
        tmp_subscript_value_15 = mod_consts[51];
        tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_85, tmp_subscript_value_15, 0);
        if (tmp_type_arg_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
        Py_DECREF(tmp_type_arg_29);
        if (tmp_metaclass_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_15);
        condexpr_end_24:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_15 = tmp_class_creation_15__bases;
        tmp_assign_source_130 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
        Py_DECREF(tmp_metaclass_value_15);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_130;
    }
    {
        bool tmp_condition_result_69;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_86 = tmp_class_creation_15__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        tmp_condition_result_69 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_69 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_value_29;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_kwargs_value_29;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_87 = tmp_class_creation_15__metaclass;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[67]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        tmp_tuple_element_56 = mod_consts[139];
        tmp_args_value_29 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_56);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_56 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_56);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_29 = tmp_class_creation_15__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 259;
        tmp_assign_source_131 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_29, tmp_kwargs_value_29);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_value_29);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_131;
    }
    {
        bool tmp_condition_result_70;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_88 = tmp_class_creation_15__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_70 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_70 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_name_value_18;
        PyObject *tmp_default_value_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_mod_expr_left_15 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_89 = tmp_class_creation_15__metaclass;
        tmp_name_value_18 = mod_consts[70];
        tmp_default_value_15 = mod_consts[71];
        tmp_tuple_element_57 = BUILTIN_GETATTR(tstate, tmp_expression_value_89, tmp_name_value_18, tmp_default_value_15);
        if (tmp_tuple_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_type_arg_30;
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_30 = tmp_class_creation_15__prepared;
            tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_30);
            assert(!(tmp_expression_value_90 == NULL));
            tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[70]);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_tuple_element_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_57);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_15);
        goto try_except_handler_48;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        Py_DECREF(tmp_mod_expr_right_15);
        if (tmp_raise_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_48;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 259;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_48;
    }
    branch_no_46:;
    goto branch_end_45;
    branch_no_45:;
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_132;
    }
    branch_end_45:;
    {
        PyObject *tmp_assign_source_133;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_pymongo$errors$$$class__15_WriteError_259 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__15_WriteError_259, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_50;
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__15_WriteError_259, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_50;
        }
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__15_WriteError_259, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_50;
        }
        {
            nuitka_bool tmp_condition_result_71;
            PyObject *tmp_cmp_expr_left_17;
            PyObject *tmp_cmp_expr_right_17;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_cmp_expr_left_17 = tmp_class_creation_15__bases;
            CHECK_OBJECT(tmp_class_creation_15__bases_orig);
            tmp_cmp_expr_right_17 = tmp_class_creation_15__bases_orig;
            tmp_condition_result_71 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
            if (tmp_condition_result_71 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto try_except_handler_50;
            }
            if (tmp_condition_result_71 == NUITKA_BOOL_TRUE) {
                goto branch_yes_47;
            } else {
                goto branch_no_47;
            }
        }
        branch_yes_47:;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dictset_value = tmp_class_creation_15__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__15_WriteError_259, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_50;
        }
        branch_no_47:;
        {
            PyObject *tmp_assign_source_134;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_48 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_58 = mod_consts[139];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_58 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_58);
            tmp_tuple_element_58 = locals_pymongo$errors$$$class__15_WriteError_259;
            PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_30 = tmp_class_creation_15__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 259;
            tmp_assign_source_134 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto try_except_handler_50;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_134;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_assign_source_133 = outline_14_var___class__;
        Py_INCREF(tmp_assign_source_133);
        goto try_return_handler_50;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_50:;
        Py_DECREF(locals_pymongo$errors$$$class__15_WriteError_259);
        locals_pymongo$errors$$$class__15_WriteError_259 = NULL;
        goto try_return_handler_49;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__15_WriteError_259);
        locals_pymongo$errors$$$class__15_WriteError_259 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;
        exception_lineno = exception_keeper_lineno_48;

        goto try_except_handler_49;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 259;
        goto try_except_handler_48;
        outline_result_15:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_133);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_class_creation_15__bases_orig);
    Py_DECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_tuple_element_59;
        tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_tuple_element_59 == NULL)) {
            tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_tuple_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        tmp_assign_source_135 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_135, 0, tmp_tuple_element_59);
        assert(tmp_class_creation_16__bases_orig == NULL);
        tmp_class_creation_16__bases_orig = tmp_assign_source_135;
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_dircall_arg1_16;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dircall_arg1_16 = tmp_class_creation_16__bases_orig;
        Py_INCREF(tmp_dircall_arg1_16);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
            tmp_assign_source_136 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_136;
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_137;
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_metaclass_value_16;
        nuitka_bool tmp_condition_result_72;
        int tmp_truth_name_16;
        PyObject *tmp_type_arg_31;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_16;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
        if (tmp_truth_name_16 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        tmp_condition_result_72 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_25;
        } else {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_value_91 = tmp_class_creation_16__bases;
        tmp_subscript_value_16 = mod_consts[51];
        tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_91, tmp_subscript_value_16, 0);
        if (tmp_type_arg_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
        Py_DECREF(tmp_type_arg_31);
        if (tmp_metaclass_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        goto condexpr_end_25;
        condexpr_false_25:;
        tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_16);
        condexpr_end_25:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_value_16 = tmp_class_creation_16__bases;
        tmp_assign_source_138 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
        Py_DECREF(tmp_metaclass_value_16);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_138;
    }
    {
        bool tmp_condition_result_73;
        PyObject *tmp_expression_value_92;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_92 = tmp_class_creation_16__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        tmp_condition_result_73 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_73 != false) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_value_31;
        PyObject *tmp_tuple_element_60;
        PyObject *tmp_kwargs_value_31;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_93 = tmp_class_creation_16__metaclass;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[67]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        tmp_tuple_element_60 = mod_consts[141];
        tmp_args_value_31 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_60);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_60 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_60);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_31 = tmp_class_creation_16__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 266;
        tmp_assign_source_139 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_31, tmp_kwargs_value_31);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_value_31);
        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_139;
    }
    {
        bool tmp_condition_result_74;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_94 = tmp_class_creation_16__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_74 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_74 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_name_value_19;
        PyObject *tmp_default_value_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_mod_expr_left_16 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_95 = tmp_class_creation_16__metaclass;
        tmp_name_value_19 = mod_consts[70];
        tmp_default_value_16 = mod_consts[71];
        tmp_tuple_element_61 = BUILTIN_GETATTR(tstate, tmp_expression_value_95, tmp_name_value_19, tmp_default_value_16);
        if (tmp_tuple_element_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_96;
            PyObject *tmp_type_arg_32;
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_61);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_32 = tmp_class_creation_16__prepared;
            tmp_expression_value_96 = BUILTIN_TYPE1(tmp_type_arg_32);
            assert(!(tmp_expression_value_96 == NULL));
            tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[70]);
            Py_DECREF(tmp_expression_value_96);
            if (tmp_tuple_element_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_61);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_16);
        goto try_except_handler_51;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        Py_DECREF(tmp_mod_expr_right_16);
        if (tmp_raise_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_51;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 266;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_51;
    }
    branch_no_49:;
    goto branch_end_48;
    branch_no_48:;
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_140;
    }
    branch_end_48:;
    {
        PyObject *tmp_assign_source_141;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_pymongo$errors$$$class__16_WTimeoutError_266 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__16_WTimeoutError_266, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_53;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__16_WTimeoutError_266, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_53;
        }
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__16_WTimeoutError_266, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_53;
        }
        frame_c917aa81138c4a0102b284c1ac214981_10 = MAKE_CLASS_FRAME(tstate, codeobj_c917aa81138c4a0102b284c1ac214981, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c917aa81138c4a0102b284c1ac214981_10);
        assert(Py_REFCNT(frame_c917aa81138c4a0102b284c1ac214981_10) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_75;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_27;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_28;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__16_WTimeoutError_266, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_condition_result_75 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_75 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_26;
            } else {
                goto condexpr_false_26;
            }
            condexpr_true_26:;
            tmp_called_value_50 = PyObject_GetItem(locals_pymongo$errors$$$class__16_WTimeoutError_266, mod_consts[89]);

            if (unlikely(tmp_called_value_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_called_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_annotations_27 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_19 = MAKE_FUNCTION_pymongo$errors$$$function__18_timeout(tmp_annotations_27);

            frame_c917aa81138c4a0102b284c1ac214981_10->m_frame.f_lineno = 276;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            goto condexpr_end_26;
            condexpr_false_26:;
            tmp_called_value_51 = (PyObject *)&PyProperty_Type;
            tmp_annotations_28 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_20 = MAKE_FUNCTION_pymongo$errors$$$function__18_timeout(tmp_annotations_28);

            frame_c917aa81138c4a0102b284c1ac214981_10->m_frame.f_lineno = 276;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            condexpr_end_26:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__16_WTimeoutError_266, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c917aa81138c4a0102b284c1ac214981_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c917aa81138c4a0102b284c1ac214981_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c917aa81138c4a0102b284c1ac214981_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c917aa81138c4a0102b284c1ac214981_10,
            type_description_2,
            outline_15_var___class__
        );



        assertFrameObject(frame_c917aa81138c4a0102b284c1ac214981_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_53;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_76;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_cmp_expr_left_18 = tmp_class_creation_16__bases;
            CHECK_OBJECT(tmp_class_creation_16__bases_orig);
            tmp_cmp_expr_right_18 = tmp_class_creation_16__bases_orig;
            tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto try_except_handler_53;
            }
            if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
                goto branch_yes_50;
            } else {
                goto branch_no_50;
            }
        }
        branch_yes_50:;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dictset_value = tmp_class_creation_16__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__16_WTimeoutError_266, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto try_except_handler_53;
        }
        branch_no_50:;
        {
            PyObject *tmp_assign_source_142;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_52 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_62 = mod_consts[141];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_62 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_62);
            tmp_tuple_element_62 = locals_pymongo$errors$$$class__16_WTimeoutError_266;
            PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_32 = tmp_class_creation_16__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 266;
            tmp_assign_source_142 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_142 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto try_except_handler_53;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_142;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_assign_source_141 = outline_15_var___class__;
        Py_INCREF(tmp_assign_source_141);
        goto try_return_handler_53;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_53:;
        Py_DECREF(locals_pymongo$errors$$$class__16_WTimeoutError_266);
        locals_pymongo$errors$$$class__16_WTimeoutError_266 = NULL;
        goto try_return_handler_52;
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_51 = exception_type;
        exception_keeper_value_51 = exception_value;
        exception_keeper_tb_51 = exception_tb;
        exception_keeper_lineno_51 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__16_WTimeoutError_266);
        locals_pymongo$errors$$$class__16_WTimeoutError_266 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_51;
        exception_value = exception_keeper_value_51;
        exception_tb = exception_keeper_tb_51;
        exception_lineno = exception_keeper_lineno_51;

        goto try_except_handler_52;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_52:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;
        exception_lineno = exception_keeper_lineno_52;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 266;
        goto try_except_handler_51;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_141);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_class_creation_16__bases_orig);
    Py_DECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_16__bases);
    Py_DECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_tuple_element_63;
        tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_tuple_element_63 == NULL)) {
            tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
        }

        if (tmp_tuple_element_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        tmp_assign_source_143 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_143, 0, tmp_tuple_element_63);
        assert(tmp_class_creation_17__bases_orig == NULL);
        tmp_class_creation_17__bases_orig = tmp_assign_source_143;
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_dircall_arg1_17;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dircall_arg1_17 = tmp_class_creation_17__bases_orig;
        Py_INCREF(tmp_dircall_arg1_17);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
            tmp_assign_source_144 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        assert(tmp_class_creation_17__bases == NULL);
        tmp_class_creation_17__bases = tmp_assign_source_144;
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_145;
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_metaclass_value_17;
        nuitka_bool tmp_condition_result_77;
        int tmp_truth_name_17;
        PyObject *tmp_type_arg_33;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_bases_value_17;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_creation_17__bases);
        if (tmp_truth_name_17 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        tmp_condition_result_77 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_27;
        } else {
            goto condexpr_false_27;
        }
        condexpr_true_27:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_expression_value_97 = tmp_class_creation_17__bases;
        tmp_subscript_value_17 = mod_consts[51];
        tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_17, 0);
        if (tmp_type_arg_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
        Py_DECREF(tmp_type_arg_33);
        if (tmp_metaclass_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        goto condexpr_end_27;
        condexpr_false_27:;
        tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_17);
        condexpr_end_27:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_bases_value_17 = tmp_class_creation_17__bases;
        tmp_assign_source_146 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
        Py_DECREF(tmp_metaclass_value_17);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_146;
    }
    {
        bool tmp_condition_result_78;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_98 = tmp_class_creation_17__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        tmp_condition_result_78 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_78 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_value_33;
        PyObject *tmp_tuple_element_64;
        PyObject *tmp_kwargs_value_33;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_99 = tmp_class_creation_17__metaclass;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[67]);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        tmp_tuple_element_64 = mod_consts[144];
        tmp_args_value_33 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_64);
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_tuple_element_64 = tmp_class_creation_17__bases;
        PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_64);
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_kwargs_value_33 = tmp_class_creation_17__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 281;
        tmp_assign_source_147 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_33, tmp_kwargs_value_33);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_value_33);
        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_147;
    }
    {
        bool tmp_condition_result_79;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_expression_value_100;
        CHECK_OBJECT(tmp_class_creation_17__prepared);
        tmp_expression_value_100 = tmp_class_creation_17__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_79 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_79 != false) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_raise_type_17;
        PyObject *tmp_raise_value_17;
        PyObject *tmp_mod_expr_left_17;
        PyObject *tmp_mod_expr_right_17;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_name_value_20;
        PyObject *tmp_default_value_17;
        tmp_raise_type_17 = PyExc_TypeError;
        tmp_mod_expr_left_17 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_101 = tmp_class_creation_17__metaclass;
        tmp_name_value_20 = mod_consts[70];
        tmp_default_value_17 = mod_consts[71];
        tmp_tuple_element_65 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_20, tmp_default_value_17);
        if (tmp_tuple_element_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_102;
            PyObject *tmp_type_arg_34;
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_type_arg_34 = tmp_class_creation_17__prepared;
            tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_34);
            assert(!(tmp_expression_value_102 == NULL));
            tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[70]);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_tuple_element_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_65);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_17);
        goto try_except_handler_54;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
        Py_DECREF(tmp_mod_expr_right_17);
        if (tmp_raise_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_54;
        }
        exception_type = tmp_raise_type_17;
        Py_INCREF(tmp_raise_type_17);
        exception_value = tmp_raise_value_17;
        exception_lineno = 281;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_54;
    }
    branch_no_52:;
    goto branch_end_51;
    branch_no_51:;
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_148;
    }
    branch_end_51:;
    {
        PyObject *tmp_assign_source_149;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_pymongo$errors$$$class__17_DuplicateKeyError_281 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__17_DuplicateKeyError_281, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_56;
        }
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__17_DuplicateKeyError_281, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_56;
        }
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__17_DuplicateKeyError_281, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_56;
        }
        {
            nuitka_bool tmp_condition_result_80;
            PyObject *tmp_cmp_expr_left_19;
            PyObject *tmp_cmp_expr_right_19;
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_cmp_expr_left_19 = tmp_class_creation_17__bases;
            CHECK_OBJECT(tmp_class_creation_17__bases_orig);
            tmp_cmp_expr_right_19 = tmp_class_creation_17__bases_orig;
            tmp_condition_result_80 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
            if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto try_except_handler_56;
            }
            if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
                goto branch_yes_53;
            } else {
                goto branch_no_53;
            }
        }
        branch_yes_53:;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dictset_value = tmp_class_creation_17__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__17_DuplicateKeyError_281, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_56;
        }
        branch_no_53:;
        {
            PyObject *tmp_assign_source_150;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_kwargs_value_34;
            CHECK_OBJECT(tmp_class_creation_17__metaclass);
            tmp_called_value_54 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_66 = mod_consts[144];
            tmp_args_value_34 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_tuple_element_66 = tmp_class_creation_17__bases;
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_66);
            tmp_tuple_element_66 = locals_pymongo$errors$$$class__17_DuplicateKeyError_281;
            PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_value_34 = tmp_class_creation_17__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 281;
            tmp_assign_source_150 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_34, tmp_kwargs_value_34);
            Py_DECREF(tmp_args_value_34);
            if (tmp_assign_source_150 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto try_except_handler_56;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_150;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_assign_source_149 = outline_16_var___class__;
        Py_INCREF(tmp_assign_source_149);
        goto try_return_handler_56;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_56:;
        Py_DECREF(locals_pymongo$errors$$$class__17_DuplicateKeyError_281);
        locals_pymongo$errors$$$class__17_DuplicateKeyError_281 = NULL;
        goto try_return_handler_55;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__17_DuplicateKeyError_281);
        locals_pymongo$errors$$$class__17_DuplicateKeyError_281 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_54;
        exception_value = exception_keeper_value_54;
        exception_tb = exception_keeper_tb_54;
        exception_lineno = exception_keeper_lineno_54;

        goto try_except_handler_55;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_55:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_55:;
        exception_keeper_type_55 = exception_type;
        exception_keeper_value_55 = exception_value;
        exception_keeper_tb_55 = exception_tb;
        exception_keeper_lineno_55 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;
        exception_lineno = exception_keeper_lineno_55;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 281;
        goto try_except_handler_54;
        outline_result_17:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_149);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_class_creation_17__bases_orig);
    Py_DECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_17__bases);
    Py_DECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__metaclass);
    Py_DECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_annotations_29;
        tmp_annotations_29 = DICT_COPY(mod_consts[146]);


        tmp_assign_source_151 = MAKE_FUNCTION_pymongo$errors$$$function__19__wtimeout_error(tmp_annotations_29);

        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_151);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_tuple_element_67;
        tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_tuple_element_67 == NULL)) {
            tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_tuple_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        tmp_assign_source_152 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_152, 0, tmp_tuple_element_67);
        assert(tmp_class_creation_18__bases_orig == NULL);
        tmp_class_creation_18__bases_orig = tmp_assign_source_152;
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_dircall_arg1_18;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dircall_arg1_18 = tmp_class_creation_18__bases_orig;
        Py_INCREF(tmp_dircall_arg1_18);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
            tmp_assign_source_153 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        assert(tmp_class_creation_18__bases == NULL);
        tmp_class_creation_18__bases = tmp_assign_source_153;
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__class_decl_dict == NULL);
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_154;
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_metaclass_value_18;
        nuitka_bool tmp_condition_result_81;
        int tmp_truth_name_18;
        PyObject *tmp_type_arg_35;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_bases_value_18;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_creation_18__bases);
        if (tmp_truth_name_18 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        tmp_condition_result_81 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_28;
        } else {
            goto condexpr_false_28;
        }
        condexpr_true_28:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_expression_value_103 = tmp_class_creation_18__bases;
        tmp_subscript_value_18 = mod_consts[51];
        tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_18, 0);
        if (tmp_type_arg_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
        Py_DECREF(tmp_type_arg_35);
        if (tmp_metaclass_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        goto condexpr_end_28;
        condexpr_false_28:;
        tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_18);
        condexpr_end_28:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_bases_value_18 = tmp_class_creation_18__bases;
        tmp_assign_source_155 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
        Py_DECREF(tmp_metaclass_value_18);
        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_155;
    }
    {
        bool tmp_condition_result_82;
        PyObject *tmp_expression_value_104;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_104 = tmp_class_creation_18__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        tmp_condition_result_82 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_82 != false) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
    }
    branch_yes_54:;
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_value_35;
        PyObject *tmp_tuple_element_68;
        PyObject *tmp_kwargs_value_35;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_105 = tmp_class_creation_18__metaclass;
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[67]);
        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        tmp_tuple_element_68 = mod_consts[147];
        tmp_args_value_35 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_68);
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_tuple_element_68 = tmp_class_creation_18__bases;
        PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_68);
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_kwargs_value_35 = tmp_class_creation_18__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 290;
        tmp_assign_source_156 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_35, tmp_kwargs_value_35);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_value_35);
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_156;
    }
    {
        bool tmp_condition_result_83;
        PyObject *tmp_operand_value_18;
        PyObject *tmp_expression_value_106;
        CHECK_OBJECT(tmp_class_creation_18__prepared);
        tmp_expression_value_106 = tmp_class_creation_18__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_83 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_83 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        PyObject *tmp_raise_type_18;
        PyObject *tmp_raise_value_18;
        PyObject *tmp_mod_expr_left_18;
        PyObject *tmp_mod_expr_right_18;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_name_value_21;
        PyObject *tmp_default_value_18;
        tmp_raise_type_18 = PyExc_TypeError;
        tmp_mod_expr_left_18 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_107 = tmp_class_creation_18__metaclass;
        tmp_name_value_21 = mod_consts[70];
        tmp_default_value_18 = mod_consts[71];
        tmp_tuple_element_69 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_21, tmp_default_value_18);
        if (tmp_tuple_element_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_108;
            PyObject *tmp_type_arg_36;
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_69);
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_type_arg_36 = tmp_class_creation_18__prepared;
            tmp_expression_value_108 = BUILTIN_TYPE1(tmp_type_arg_36);
            assert(!(tmp_expression_value_108 == NULL));
            tmp_tuple_element_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[70]);
            Py_DECREF(tmp_expression_value_108);
            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_69);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_18);
        goto try_except_handler_57;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
        Py_DECREF(tmp_mod_expr_right_18);
        if (tmp_raise_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_57;
        }
        exception_type = tmp_raise_type_18;
        Py_INCREF(tmp_raise_type_18);
        exception_value = tmp_raise_value_18;
        exception_lineno = 290;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_57;
    }
    branch_no_55:;
    goto branch_end_54;
    branch_no_54:;
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_157;
    }
    branch_end_54:;
    {
        PyObject *tmp_assign_source_158;
        outline_17_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_pymongo$errors$$$class__18_BulkWriteError_290 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_59;
        }
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_59;
        }
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_59;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[102], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_59;
        }
        frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11 = MAKE_CLASS_FRAME(tstate, codeobj_38d5e02a3ba8e6e0a35c21b59fa91d9c, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11);
        assert(Py_REFCNT(frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = mod_consts[149];
            tmp_ass_subscribed_3 = PyObject_GetItem(locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[102]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[102]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 296;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }
            tmp_ass_subscript_3 = mod_consts[12];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_annotations_30;
            struct Nuitka_CellObject *tmp_closure_5[1];
            tmp_annotations_30 = DICT_COPY(mod_consts[150]);

            tmp_closure_5[0] = outline_17_var___class__;
            Py_INCREF(tmp_closure_5[0]);

            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__20___init__(tmp_annotations_30, tmp_closure_5);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_annotations_31;
            tmp_annotations_31 = DICT_COPY(mod_consts[152]);


            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__21___reduce__(tmp_annotations_31);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }
        }
        {
            nuitka_bool tmp_condition_result_84;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_32;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_33;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }
            tmp_condition_result_84 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_29;
            } else {
                goto condexpr_false_29;
            }
            condexpr_true_29:;
            tmp_called_value_56 = PyObject_GetItem(locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[89]);

            if (unlikely(tmp_called_value_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }

            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }
            tmp_annotations_32 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_21 = MAKE_FUNCTION_pymongo$errors$$$function__22_timeout(tmp_annotations_32);

            frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11->m_frame.f_lineno = 304;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }
            goto condexpr_end_29;
            condexpr_false_29:;
            tmp_called_value_57 = (PyObject *)&PyProperty_Type;
            tmp_annotations_33 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_22 = MAKE_FUNCTION_pymongo$errors$$$function__22_timeout(tmp_annotations_33);

            frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11->m_frame.f_lineno = 304;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }
            condexpr_end_29:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "c";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11,
            type_description_2,
            outline_17_var___class__
        );



        assertFrameObject(frame_38d5e02a3ba8e6e0a35c21b59fa91d9c_11);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_59;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_85;
            PyObject *tmp_cmp_expr_left_20;
            PyObject *tmp_cmp_expr_right_20;
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_cmp_expr_left_20 = tmp_class_creation_18__bases;
            CHECK_OBJECT(tmp_class_creation_18__bases_orig);
            tmp_cmp_expr_right_20 = tmp_class_creation_18__bases_orig;
            tmp_condition_result_85 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
            if (tmp_condition_result_85 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto try_except_handler_59;
            }
            if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
                goto branch_yes_56;
            } else {
                goto branch_no_56;
            }
        }
        branch_yes_56:;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dictset_value = tmp_class_creation_18__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__18_BulkWriteError_290, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto try_except_handler_59;
        }
        branch_no_56:;
        {
            PyObject *tmp_assign_source_159;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_kwargs_value_36;
            CHECK_OBJECT(tmp_class_creation_18__metaclass);
            tmp_called_value_58 = tmp_class_creation_18__metaclass;
            tmp_tuple_element_70 = mod_consts[147];
            tmp_args_value_36 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_tuple_element_70 = tmp_class_creation_18__bases;
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_70);
            tmp_tuple_element_70 = locals_pymongo$errors$$$class__18_BulkWriteError_290;
            PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
            tmp_kwargs_value_36 = tmp_class_creation_18__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 290;
            tmp_assign_source_159 = CALL_FUNCTION(tstate, tmp_called_value_58, tmp_args_value_36, tmp_kwargs_value_36);
            Py_DECREF(tmp_args_value_36);
            if (tmp_assign_source_159 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto try_except_handler_59;
            }
            assert(Nuitka_Cell_GET(outline_17_var___class__) == NULL);
            PyCell_SET(outline_17_var___class__, tmp_assign_source_159);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_17_var___class__));
        tmp_assign_source_158 = Nuitka_Cell_GET(outline_17_var___class__);
        Py_INCREF(tmp_assign_source_158);
        goto try_return_handler_59;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_59:;
        Py_DECREF(locals_pymongo$errors$$$class__18_BulkWriteError_290);
        locals_pymongo$errors$$$class__18_BulkWriteError_290 = NULL;
        goto try_return_handler_58;
        // Exception handler code:
        try_except_handler_59:;
        exception_keeper_type_57 = exception_type;
        exception_keeper_value_57 = exception_value;
        exception_keeper_tb_57 = exception_tb;
        exception_keeper_lineno_57 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__18_BulkWriteError_290);
        locals_pymongo$errors$$$class__18_BulkWriteError_290 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_57;
        exception_value = exception_keeper_value_57;
        exception_tb = exception_keeper_tb_57;
        exception_lineno = exception_keeper_lineno_57;

        goto try_except_handler_58;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_58:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_58:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;
        exception_lineno = exception_keeper_lineno_58;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 290;
        goto try_except_handler_57;
        outline_result_18:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_158);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    Py_XDECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_class_creation_18__bases_orig);
    Py_DECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_18__bases);
    Py_DECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    Py_DECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__metaclass);
    Py_DECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_tuple_element_71;
        tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_tuple_element_71 == NULL)) {
            tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_tuple_element_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        tmp_assign_source_160 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_160, 0, tmp_tuple_element_71);
        assert(tmp_class_creation_19__bases_orig == NULL);
        tmp_class_creation_19__bases_orig = tmp_assign_source_160;
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_dircall_arg1_19;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dircall_arg1_19 = tmp_class_creation_19__bases_orig;
        Py_INCREF(tmp_dircall_arg1_19);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
            tmp_assign_source_161 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        assert(tmp_class_creation_19__bases == NULL);
        tmp_class_creation_19__bases = tmp_assign_source_161;
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__class_decl_dict == NULL);
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_162;
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_metaclass_value_19;
        nuitka_bool tmp_condition_result_86;
        int tmp_truth_name_19;
        PyObject *tmp_type_arg_37;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_bases_value_19;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_creation_19__bases);
        if (tmp_truth_name_19 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        tmp_condition_result_86 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_86 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_30;
        } else {
            goto condexpr_false_30;
        }
        condexpr_true_30:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_expression_value_109 = tmp_class_creation_19__bases;
        tmp_subscript_value_19 = mod_consts[51];
        tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_109, tmp_subscript_value_19, 0);
        if (tmp_type_arg_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
        Py_DECREF(tmp_type_arg_37);
        if (tmp_metaclass_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        goto condexpr_end_30;
        condexpr_false_30:;
        tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_19);
        condexpr_end_30:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_bases_value_19 = tmp_class_creation_19__bases;
        tmp_assign_source_163 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
        Py_DECREF(tmp_metaclass_value_19);
        if (tmp_assign_source_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        assert(tmp_class_creation_19__metaclass == NULL);
        tmp_class_creation_19__metaclass = tmp_assign_source_163;
    }
    {
        bool tmp_condition_result_87;
        PyObject *tmp_expression_value_110;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_110 = tmp_class_creation_19__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_110, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        tmp_condition_result_87 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_87 != false) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
    }
    branch_yes_57:;
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_value_37;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_kwargs_value_37;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_111 = tmp_class_creation_19__metaclass;
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[67]);
        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        tmp_tuple_element_72 = mod_consts[156];
        tmp_args_value_37 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_72);
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_tuple_element_72 = tmp_class_creation_19__bases;
        PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_72);
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_kwargs_value_37 = tmp_class_creation_19__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 318;
        tmp_assign_source_164 = CALL_FUNCTION(tstate, tmp_called_value_59, tmp_args_value_37, tmp_kwargs_value_37);
        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_value_37);
        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_164;
    }
    {
        bool tmp_condition_result_88;
        PyObject *tmp_operand_value_19;
        PyObject *tmp_expression_value_112;
        CHECK_OBJECT(tmp_class_creation_19__prepared);
        tmp_expression_value_112 = tmp_class_creation_19__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_112, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_88 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_88 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        PyObject *tmp_raise_type_19;
        PyObject *tmp_raise_value_19;
        PyObject *tmp_mod_expr_left_19;
        PyObject *tmp_mod_expr_right_19;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_name_value_22;
        PyObject *tmp_default_value_19;
        tmp_raise_type_19 = PyExc_TypeError;
        tmp_mod_expr_left_19 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_113 = tmp_class_creation_19__metaclass;
        tmp_name_value_22 = mod_consts[70];
        tmp_default_value_19 = mod_consts[71];
        tmp_tuple_element_73 = BUILTIN_GETATTR(tstate, tmp_expression_value_113, tmp_name_value_22, tmp_default_value_19);
        if (tmp_tuple_element_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_114;
            PyObject *tmp_type_arg_38;
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_type_arg_38 = tmp_class_creation_19__prepared;
            tmp_expression_value_114 = BUILTIN_TYPE1(tmp_type_arg_38);
            assert(!(tmp_expression_value_114 == NULL));
            tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[70]);
            Py_DECREF(tmp_expression_value_114);
            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_73);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_19);
        goto try_except_handler_60;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
        Py_DECREF(tmp_mod_expr_right_19);
        if (tmp_raise_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_60;
        }
        exception_type = tmp_raise_type_19;
        Py_INCREF(tmp_raise_type_19);
        exception_value = tmp_raise_value_19;
        exception_lineno = 318;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_60;
    }
    branch_no_58:;
    goto branch_end_57;
    branch_no_57:;
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_165;
    }
    branch_end_57:;
    {
        PyObject *tmp_assign_source_166;
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_pymongo$errors$$$class__19_InvalidOperation_318 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__19_InvalidOperation_318, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_62;
        }
        tmp_dictset_value = mod_consts[157];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__19_InvalidOperation_318, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_62;
        }
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__19_InvalidOperation_318, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_62;
        }
        {
            nuitka_bool tmp_condition_result_89;
            PyObject *tmp_cmp_expr_left_21;
            PyObject *tmp_cmp_expr_right_21;
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_cmp_expr_left_21 = tmp_class_creation_19__bases;
            CHECK_OBJECT(tmp_class_creation_19__bases_orig);
            tmp_cmp_expr_right_21 = tmp_class_creation_19__bases_orig;
            tmp_condition_result_89 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
            if (tmp_condition_result_89 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto try_except_handler_62;
            }
            if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
                goto branch_yes_59;
            } else {
                goto branch_no_59;
            }
        }
        branch_yes_59:;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dictset_value = tmp_class_creation_19__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__19_InvalidOperation_318, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_62;
        }
        branch_no_59:;
        {
            PyObject *tmp_assign_source_167;
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_value_38;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_kwargs_value_38;
            CHECK_OBJECT(tmp_class_creation_19__metaclass);
            tmp_called_value_60 = tmp_class_creation_19__metaclass;
            tmp_tuple_element_74 = mod_consts[156];
            tmp_args_value_38 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_tuple_element_74 = tmp_class_creation_19__bases;
            PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_74);
            tmp_tuple_element_74 = locals_pymongo$errors$$$class__19_InvalidOperation_318;
            PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
            tmp_kwargs_value_38 = tmp_class_creation_19__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 318;
            tmp_assign_source_167 = CALL_FUNCTION(tstate, tmp_called_value_60, tmp_args_value_38, tmp_kwargs_value_38);
            Py_DECREF(tmp_args_value_38);
            if (tmp_assign_source_167 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto try_except_handler_62;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_167;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_assign_source_166 = outline_18_var___class__;
        Py_INCREF(tmp_assign_source_166);
        goto try_return_handler_62;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_62:;
        Py_DECREF(locals_pymongo$errors$$$class__19_InvalidOperation_318);
        locals_pymongo$errors$$$class__19_InvalidOperation_318 = NULL;
        goto try_return_handler_61;
        // Exception handler code:
        try_except_handler_62:;
        exception_keeper_type_60 = exception_type;
        exception_keeper_value_60 = exception_value;
        exception_keeper_tb_60 = exception_tb;
        exception_keeper_lineno_60 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__19_InvalidOperation_318);
        locals_pymongo$errors$$$class__19_InvalidOperation_318 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_60;
        exception_value = exception_keeper_value_60;
        exception_tb = exception_keeper_tb_60;
        exception_lineno = exception_keeper_lineno_60;

        goto try_except_handler_61;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_61:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_61:;
        exception_keeper_type_61 = exception_type;
        exception_keeper_value_61 = exception_value;
        exception_keeper_tb_61 = exception_tb;
        exception_keeper_lineno_61 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_61;
        exception_value = exception_keeper_value_61;
        exception_tb = exception_keeper_tb_61;
        exception_lineno = exception_keeper_lineno_61;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 318;
        goto try_except_handler_60;
        outline_result_19:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_166);
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    Py_XDECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_62;
    exception_value = exception_keeper_value_62;
    exception_tb = exception_keeper_tb_62;
    exception_lineno = exception_keeper_lineno_62;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_class_creation_19__bases_orig);
    Py_DECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_19__bases);
    Py_DECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    Py_DECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__metaclass);
    Py_DECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_tuple_element_75;
        tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_tuple_element_75 == NULL)) {
            tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_tuple_element_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        tmp_assign_source_168 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_168, 0, tmp_tuple_element_75);
        assert(tmp_class_creation_20__bases_orig == NULL);
        tmp_class_creation_20__bases_orig = tmp_assign_source_168;
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_dircall_arg1_20;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dircall_arg1_20 = tmp_class_creation_20__bases_orig;
        Py_INCREF(tmp_dircall_arg1_20);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
            tmp_assign_source_169 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        assert(tmp_class_creation_20__bases == NULL);
        tmp_class_creation_20__bases = tmp_assign_source_169;
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__class_decl_dict == NULL);
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_170;
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_metaclass_value_20;
        nuitka_bool tmp_condition_result_90;
        int tmp_truth_name_20;
        PyObject *tmp_type_arg_39;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_20;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_creation_20__bases);
        if (tmp_truth_name_20 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        tmp_condition_result_90 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_90 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_31;
        } else {
            goto condexpr_false_31;
        }
        condexpr_true_31:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_expression_value_115 = tmp_class_creation_20__bases;
        tmp_subscript_value_20 = mod_consts[51];
        tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_115, tmp_subscript_value_20, 0);
        if (tmp_type_arg_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
        Py_DECREF(tmp_type_arg_39);
        if (tmp_metaclass_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        goto condexpr_end_31;
        condexpr_false_31:;
        tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_20);
        condexpr_end_31:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_bases_value_20 = tmp_class_creation_20__bases;
        tmp_assign_source_171 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
        Py_DECREF(tmp_metaclass_value_20);
        if (tmp_assign_source_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_171;
    }
    {
        bool tmp_condition_result_91;
        PyObject *tmp_expression_value_116;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_116 = tmp_class_creation_20__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_116, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        tmp_condition_result_91 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_91 != false) {
            goto branch_yes_60;
        } else {
            goto branch_no_60;
        }
    }
    branch_yes_60:;
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_value_39;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_kwargs_value_39;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_117 = tmp_class_creation_20__metaclass;
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[67]);
        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        tmp_tuple_element_76 = mod_consts[158];
        tmp_args_value_39 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_76);
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_tuple_element_76 = tmp_class_creation_20__bases;
        PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_76);
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_kwargs_value_39 = tmp_class_creation_20__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 322;
        tmp_assign_source_172 = CALL_FUNCTION(tstate, tmp_called_value_61, tmp_args_value_39, tmp_kwargs_value_39);
        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_value_39);
        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_172;
    }
    {
        bool tmp_condition_result_92;
        PyObject *tmp_operand_value_20;
        PyObject *tmp_expression_value_118;
        CHECK_OBJECT(tmp_class_creation_20__prepared);
        tmp_expression_value_118 = tmp_class_creation_20__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_118, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
        assert(!(tmp_res == -1));
        tmp_condition_result_92 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_92 != false) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    {
        PyObject *tmp_raise_type_20;
        PyObject *tmp_raise_value_20;
        PyObject *tmp_mod_expr_left_20;
        PyObject *tmp_mod_expr_right_20;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_name_value_23;
        PyObject *tmp_default_value_20;
        tmp_raise_type_20 = PyExc_TypeError;
        tmp_mod_expr_left_20 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_119 = tmp_class_creation_20__metaclass;
        tmp_name_value_23 = mod_consts[70];
        tmp_default_value_20 = mod_consts[71];
        tmp_tuple_element_77 = BUILTIN_GETATTR(tstate, tmp_expression_value_119, tmp_name_value_23, tmp_default_value_20);
        if (tmp_tuple_element_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_120;
            PyObject *tmp_type_arg_40;
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_77);
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_type_arg_40 = tmp_class_creation_20__prepared;
            tmp_expression_value_120 = BUILTIN_TYPE1(tmp_type_arg_40);
            assert(!(tmp_expression_value_120 == NULL));
            tmp_tuple_element_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[70]);
            Py_DECREF(tmp_expression_value_120);
            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_77);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_mod_expr_right_20);
        goto try_except_handler_63;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_raise_value_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
        Py_DECREF(tmp_mod_expr_right_20);
        if (tmp_raise_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_63;
        }
        exception_type = tmp_raise_type_20;
        Py_INCREF(tmp_raise_type_20);
        exception_value = tmp_raise_value_20;
        exception_lineno = 322;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_63;
    }
    branch_no_61:;
    goto branch_end_60;
    branch_no_60:;
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_173;
    }
    branch_end_60:;
    {
        PyObject *tmp_assign_source_174;
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_pymongo$errors$$$class__20_InvalidName_322 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__20_InvalidName_322, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_65;
        }
        tmp_dictset_value = mod_consts[159];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__20_InvalidName_322, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_65;
        }
        tmp_dictset_value = mod_consts[158];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__20_InvalidName_322, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_65;
        }
        {
            nuitka_bool tmp_condition_result_93;
            PyObject *tmp_cmp_expr_left_22;
            PyObject *tmp_cmp_expr_right_22;
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_cmp_expr_left_22 = tmp_class_creation_20__bases;
            CHECK_OBJECT(tmp_class_creation_20__bases_orig);
            tmp_cmp_expr_right_22 = tmp_class_creation_20__bases_orig;
            tmp_condition_result_93 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
            if (tmp_condition_result_93 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto try_except_handler_65;
            }
            if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
                goto branch_yes_62;
            } else {
                goto branch_no_62;
            }
        }
        branch_yes_62:;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dictset_value = tmp_class_creation_20__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__20_InvalidName_322, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto try_except_handler_65;
        }
        branch_no_62:;
        {
            PyObject *tmp_assign_source_175;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_value_40;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_kwargs_value_40;
            CHECK_OBJECT(tmp_class_creation_20__metaclass);
            tmp_called_value_62 = tmp_class_creation_20__metaclass;
            tmp_tuple_element_78 = mod_consts[158];
            tmp_args_value_40 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_tuple_element_78 = tmp_class_creation_20__bases;
            PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_78);
            tmp_tuple_element_78 = locals_pymongo$errors$$$class__20_InvalidName_322;
            PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
            tmp_kwargs_value_40 = tmp_class_creation_20__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 322;
            tmp_assign_source_175 = CALL_FUNCTION(tstate, tmp_called_value_62, tmp_args_value_40, tmp_kwargs_value_40);
            Py_DECREF(tmp_args_value_40);
            if (tmp_assign_source_175 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;

                goto try_except_handler_65;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_175;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_assign_source_174 = outline_19_var___class__;
        Py_INCREF(tmp_assign_source_174);
        goto try_return_handler_65;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_65:;
        Py_DECREF(locals_pymongo$errors$$$class__20_InvalidName_322);
        locals_pymongo$errors$$$class__20_InvalidName_322 = NULL;
        goto try_return_handler_64;
        // Exception handler code:
        try_except_handler_65:;
        exception_keeper_type_63 = exception_type;
        exception_keeper_value_63 = exception_value;
        exception_keeper_tb_63 = exception_tb;
        exception_keeper_lineno_63 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__20_InvalidName_322);
        locals_pymongo$errors$$$class__20_InvalidName_322 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_63;
        exception_value = exception_keeper_value_63;
        exception_tb = exception_keeper_tb_63;
        exception_lineno = exception_keeper_lineno_63;

        goto try_except_handler_64;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_64:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_64:;
        exception_keeper_type_64 = exception_type;
        exception_keeper_value_64 = exception_value;
        exception_keeper_tb_64 = exception_tb;
        exception_keeper_lineno_64 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_64;
        exception_value = exception_keeper_value_64;
        exception_tb = exception_keeper_tb_64;
        exception_lineno = exception_keeper_lineno_64;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 322;
        goto try_except_handler_63;
        outline_result_20:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_174);
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    Py_XDECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_65;
    exception_value = exception_keeper_value_65;
    exception_tb = exception_keeper_tb_65;
    exception_lineno = exception_keeper_lineno_65;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_class_creation_20__bases_orig);
    Py_DECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_20__bases);
    Py_DECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    Py_DECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__metaclass);
    Py_DECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_tuple_element_79;
        tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_tuple_element_79 == NULL)) {
            tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_tuple_element_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        tmp_assign_source_176 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_176, 0, tmp_tuple_element_79);
        assert(tmp_class_creation_21__bases_orig == NULL);
        tmp_class_creation_21__bases_orig = tmp_assign_source_176;
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_dircall_arg1_21;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dircall_arg1_21 = tmp_class_creation_21__bases_orig;
        Py_INCREF(tmp_dircall_arg1_21);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_21};
            tmp_assign_source_177 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        assert(tmp_class_creation_21__bases == NULL);
        tmp_class_creation_21__bases = tmp_assign_source_177;
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__class_decl_dict == NULL);
        tmp_class_creation_21__class_decl_dict = tmp_assign_source_178;
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_metaclass_value_21;
        nuitka_bool tmp_condition_result_94;
        int tmp_truth_name_21;
        PyObject *tmp_type_arg_41;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_bases_value_21;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_creation_21__bases);
        if (tmp_truth_name_21 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        tmp_condition_result_94 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_94 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_32;
        } else {
            goto condexpr_false_32;
        }
        condexpr_true_32:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_expression_value_121 = tmp_class_creation_21__bases;
        tmp_subscript_value_21 = mod_consts[51];
        tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_121, tmp_subscript_value_21, 0);
        if (tmp_type_arg_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
        Py_DECREF(tmp_type_arg_41);
        if (tmp_metaclass_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        goto condexpr_end_32;
        condexpr_false_32:;
        tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_21);
        condexpr_end_32:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_bases_value_21 = tmp_class_creation_21__bases;
        tmp_assign_source_179 = SELECT_METACLASS(tstate, tmp_metaclass_value_21, tmp_bases_value_21);
        Py_DECREF(tmp_metaclass_value_21);
        if (tmp_assign_source_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        assert(tmp_class_creation_21__metaclass == NULL);
        tmp_class_creation_21__metaclass = tmp_assign_source_179;
    }
    {
        bool tmp_condition_result_95;
        PyObject *tmp_expression_value_122;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_122 = tmp_class_creation_21__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        tmp_condition_result_95 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_95 != false) {
            goto branch_yes_63;
        } else {
            goto branch_no_63;
        }
    }
    branch_yes_63:;
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_args_value_41;
        PyObject *tmp_tuple_element_80;
        PyObject *tmp_kwargs_value_41;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_123 = tmp_class_creation_21__metaclass;
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[67]);
        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        tmp_tuple_element_80 = mod_consts[160];
        tmp_args_value_41 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_80);
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_tuple_element_80 = tmp_class_creation_21__bases;
        PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_80);
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_kwargs_value_41 = tmp_class_creation_21__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 326;
        tmp_assign_source_180 = CALL_FUNCTION(tstate, tmp_called_value_63, tmp_args_value_41, tmp_kwargs_value_41);
        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_args_value_41);
        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_180;
    }
    {
        bool tmp_condition_result_96;
        PyObject *tmp_operand_value_21;
        PyObject *tmp_expression_value_124;
        CHECK_OBJECT(tmp_class_creation_21__prepared);
        tmp_expression_value_124 = tmp_class_creation_21__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_124, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        tmp_operand_value_21 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_96 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_96 != false) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
    }
    branch_yes_64:;
    {
        PyObject *tmp_raise_type_21;
        PyObject *tmp_raise_value_21;
        PyObject *tmp_mod_expr_left_21;
        PyObject *tmp_mod_expr_right_21;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_name_value_24;
        PyObject *tmp_default_value_21;
        tmp_raise_type_21 = PyExc_TypeError;
        tmp_mod_expr_left_21 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_125 = tmp_class_creation_21__metaclass;
        tmp_name_value_24 = mod_consts[70];
        tmp_default_value_21 = mod_consts[71];
        tmp_tuple_element_81 = BUILTIN_GETATTR(tstate, tmp_expression_value_125, tmp_name_value_24, tmp_default_value_21);
        if (tmp_tuple_element_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_126;
            PyObject *tmp_type_arg_42;
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_81);
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_type_arg_42 = tmp_class_creation_21__prepared;
            tmp_expression_value_126 = BUILTIN_TYPE1(tmp_type_arg_42);
            assert(!(tmp_expression_value_126 == NULL));
            tmp_tuple_element_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[70]);
            Py_DECREF(tmp_expression_value_126);
            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_81);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_21);
        goto try_except_handler_66;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
        Py_DECREF(tmp_mod_expr_right_21);
        if (tmp_raise_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_66;
        }
        exception_type = tmp_raise_type_21;
        Py_INCREF(tmp_raise_type_21);
        exception_value = tmp_raise_value_21;
        exception_lineno = 326;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_66;
    }
    branch_no_64:;
    goto branch_end_63;
    branch_no_63:;
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_181;
    }
    branch_end_63:;
    {
        PyObject *tmp_assign_source_182;
        {
            PyObject *tmp_set_locals_21;
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_set_locals_21 = tmp_class_creation_21__prepared;
            locals_pymongo$errors$$$class__21_CollectionInvalid_326 = tmp_set_locals_21;
            Py_INCREF(tmp_set_locals_21);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__21_CollectionInvalid_326, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_68;
        }
        tmp_dictset_value = mod_consts[161];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__21_CollectionInvalid_326, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_68;
        }
        tmp_dictset_value = mod_consts[160];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__21_CollectionInvalid_326, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_68;
        }
        {
            nuitka_bool tmp_condition_result_97;
            PyObject *tmp_cmp_expr_left_23;
            PyObject *tmp_cmp_expr_right_23;
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_cmp_expr_left_23 = tmp_class_creation_21__bases;
            CHECK_OBJECT(tmp_class_creation_21__bases_orig);
            tmp_cmp_expr_right_23 = tmp_class_creation_21__bases_orig;
            tmp_condition_result_97 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
            if (tmp_condition_result_97 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto try_except_handler_68;
            }
            if (tmp_condition_result_97 == NUITKA_BOOL_TRUE) {
                goto branch_yes_65;
            } else {
                goto branch_no_65;
            }
        }
        branch_yes_65:;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dictset_value = tmp_class_creation_21__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__21_CollectionInvalid_326, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto try_except_handler_68;
        }
        branch_no_65:;
        {
            PyObject *tmp_assign_source_183;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_value_42;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_kwargs_value_42;
            CHECK_OBJECT(tmp_class_creation_21__metaclass);
            tmp_called_value_64 = tmp_class_creation_21__metaclass;
            tmp_tuple_element_82 = mod_consts[160];
            tmp_args_value_42 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_tuple_element_82 = tmp_class_creation_21__bases;
            PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_82);
            tmp_tuple_element_82 = locals_pymongo$errors$$$class__21_CollectionInvalid_326;
            PyTuple_SET_ITEM0(tmp_args_value_42, 2, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
            tmp_kwargs_value_42 = tmp_class_creation_21__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 326;
            tmp_assign_source_183 = CALL_FUNCTION(tstate, tmp_called_value_64, tmp_args_value_42, tmp_kwargs_value_42);
            Py_DECREF(tmp_args_value_42);
            if (tmp_assign_source_183 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto try_except_handler_68;
            }
            assert(outline_20_var___class__ == NULL);
            outline_20_var___class__ = tmp_assign_source_183;
        }
        CHECK_OBJECT(outline_20_var___class__);
        tmp_assign_source_182 = outline_20_var___class__;
        Py_INCREF(tmp_assign_source_182);
        goto try_return_handler_68;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_68:;
        Py_DECREF(locals_pymongo$errors$$$class__21_CollectionInvalid_326);
        locals_pymongo$errors$$$class__21_CollectionInvalid_326 = NULL;
        goto try_return_handler_67;
        // Exception handler code:
        try_except_handler_68:;
        exception_keeper_type_66 = exception_type;
        exception_keeper_value_66 = exception_value;
        exception_keeper_tb_66 = exception_tb;
        exception_keeper_lineno_66 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__21_CollectionInvalid_326);
        locals_pymongo$errors$$$class__21_CollectionInvalid_326 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_66;
        exception_value = exception_keeper_value_66;
        exception_tb = exception_keeper_tb_66;
        exception_lineno = exception_keeper_lineno_66;

        goto try_except_handler_67;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_67:;
        CHECK_OBJECT(outline_20_var___class__);
        Py_DECREF(outline_20_var___class__);
        outline_20_var___class__ = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_67:;
        exception_keeper_type_67 = exception_type;
        exception_keeper_value_67 = exception_value;
        exception_keeper_tb_67 = exception_tb;
        exception_keeper_lineno_67 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_67;
        exception_value = exception_keeper_value_67;
        exception_tb = exception_keeper_tb_67;
        exception_lineno = exception_keeper_lineno_67;

        goto outline_exception_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_21:;
        exception_lineno = 326;
        goto try_except_handler_66;
        outline_result_21:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_182);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    Py_XDECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_class_creation_21__bases_orig);
    Py_DECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_21__bases);
    Py_DECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    Py_DECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__metaclass);
    Py_DECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_21__prepared);
    Py_DECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_tuple_element_83;
        tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_tuple_element_83 == NULL)) {
            tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        if (tmp_tuple_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        tmp_assign_source_184 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_184, 0, tmp_tuple_element_83);
        assert(tmp_class_creation_22__bases_orig == NULL);
        tmp_class_creation_22__bases_orig = tmp_assign_source_184;
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_dircall_arg1_22;
        CHECK_OBJECT(tmp_class_creation_22__bases_orig);
        tmp_dircall_arg1_22 = tmp_class_creation_22__bases_orig;
        Py_INCREF(tmp_dircall_arg1_22);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_22};
            tmp_assign_source_185 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        assert(tmp_class_creation_22__bases == NULL);
        tmp_class_creation_22__bases = tmp_assign_source_185;
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__class_decl_dict == NULL);
        tmp_class_creation_22__class_decl_dict = tmp_assign_source_186;
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_metaclass_value_22;
        nuitka_bool tmp_condition_result_98;
        int tmp_truth_name_22;
        PyObject *tmp_type_arg_43;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_bases_value_22;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_creation_22__bases);
        if (tmp_truth_name_22 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        tmp_condition_result_98 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_98 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_33;
        } else {
            goto condexpr_false_33;
        }
        condexpr_true_33:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_expression_value_127 = tmp_class_creation_22__bases;
        tmp_subscript_value_22 = mod_consts[51];
        tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_127, tmp_subscript_value_22, 0);
        if (tmp_type_arg_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
        Py_DECREF(tmp_type_arg_43);
        if (tmp_metaclass_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        goto condexpr_end_33;
        condexpr_false_33:;
        tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_22);
        condexpr_end_33:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_bases_value_22 = tmp_class_creation_22__bases;
        tmp_assign_source_187 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
        Py_DECREF(tmp_metaclass_value_22);
        if (tmp_assign_source_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        assert(tmp_class_creation_22__metaclass == NULL);
        tmp_class_creation_22__metaclass = tmp_assign_source_187;
    }
    {
        bool tmp_condition_result_99;
        PyObject *tmp_expression_value_128;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_128 = tmp_class_creation_22__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_128, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        tmp_condition_result_99 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_99 != false) {
            goto branch_yes_66;
        } else {
            goto branch_no_66;
        }
    }
    branch_yes_66:;
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_value_43;
        PyObject *tmp_tuple_element_84;
        PyObject *tmp_kwargs_value_43;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_129 = tmp_class_creation_22__metaclass;
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[67]);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        tmp_tuple_element_84 = mod_consts[162];
        tmp_args_value_43 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_84);
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_tuple_element_84 = tmp_class_creation_22__bases;
        PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_84);
        CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
        tmp_kwargs_value_43 = tmp_class_creation_22__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 330;
        tmp_assign_source_188 = CALL_FUNCTION(tstate, tmp_called_value_65, tmp_args_value_43, tmp_kwargs_value_43);
        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_args_value_43);
        if (tmp_assign_source_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_188;
    }
    {
        bool tmp_condition_result_100;
        PyObject *tmp_operand_value_22;
        PyObject *tmp_expression_value_130;
        CHECK_OBJECT(tmp_class_creation_22__prepared);
        tmp_expression_value_130 = tmp_class_creation_22__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_130, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        tmp_operand_value_22 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_100 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_100 != false) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    {
        PyObject *tmp_raise_type_22;
        PyObject *tmp_raise_value_22;
        PyObject *tmp_mod_expr_left_22;
        PyObject *tmp_mod_expr_right_22;
        PyObject *tmp_tuple_element_85;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_name_value_25;
        PyObject *tmp_default_value_22;
        tmp_raise_type_22 = PyExc_TypeError;
        tmp_mod_expr_left_22 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_131 = tmp_class_creation_22__metaclass;
        tmp_name_value_25 = mod_consts[70];
        tmp_default_value_22 = mod_consts[71];
        tmp_tuple_element_85 = BUILTIN_GETATTR(tstate, tmp_expression_value_131, tmp_name_value_25, tmp_default_value_22);
        if (tmp_tuple_element_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_132;
            PyObject *tmp_type_arg_44;
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_85);
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_type_arg_44 = tmp_class_creation_22__prepared;
            tmp_expression_value_132 = BUILTIN_TYPE1(tmp_type_arg_44);
            assert(!(tmp_expression_value_132 == NULL));
            tmp_tuple_element_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[70]);
            Py_DECREF(tmp_expression_value_132);
            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_85);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_mod_expr_right_22);
        goto try_except_handler_69;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_raise_value_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
        Py_DECREF(tmp_mod_expr_right_22);
        if (tmp_raise_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_69;
        }
        exception_type = tmp_raise_type_22;
        Py_INCREF(tmp_raise_type_22);
        exception_value = tmp_raise_value_22;
        exception_lineno = 330;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_69;
    }
    branch_no_67:;
    goto branch_end_66;
    branch_no_66:;
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_189;
    }
    branch_end_66:;
    {
        PyObject *tmp_assign_source_190;
        {
            PyObject *tmp_set_locals_22;
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_set_locals_22 = tmp_class_creation_22__prepared;
            locals_pymongo$errors$$$class__22_InvalidURI_330 = tmp_set_locals_22;
            Py_INCREF(tmp_set_locals_22);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__22_InvalidURI_330, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_71;
        }
        tmp_dictset_value = mod_consts[163];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__22_InvalidURI_330, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_71;
        }
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__22_InvalidURI_330, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_71;
        }
        {
            nuitka_bool tmp_condition_result_101;
            PyObject *tmp_cmp_expr_left_24;
            PyObject *tmp_cmp_expr_right_24;
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_cmp_expr_left_24 = tmp_class_creation_22__bases;
            CHECK_OBJECT(tmp_class_creation_22__bases_orig);
            tmp_cmp_expr_right_24 = tmp_class_creation_22__bases_orig;
            tmp_condition_result_101 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
            if (tmp_condition_result_101 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto try_except_handler_71;
            }
            if (tmp_condition_result_101 == NUITKA_BOOL_TRUE) {
                goto branch_yes_68;
            } else {
                goto branch_no_68;
            }
        }
        branch_yes_68:;
        CHECK_OBJECT(tmp_class_creation_22__bases_orig);
        tmp_dictset_value = tmp_class_creation_22__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__22_InvalidURI_330, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto try_except_handler_71;
        }
        branch_no_68:;
        {
            PyObject *tmp_assign_source_191;
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_value_44;
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_kwargs_value_44;
            CHECK_OBJECT(tmp_class_creation_22__metaclass);
            tmp_called_value_66 = tmp_class_creation_22__metaclass;
            tmp_tuple_element_86 = mod_consts[162];
            tmp_args_value_44 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_86);
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_tuple_element_86 = tmp_class_creation_22__bases;
            PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_86);
            tmp_tuple_element_86 = locals_pymongo$errors$$$class__22_InvalidURI_330;
            PyTuple_SET_ITEM0(tmp_args_value_44, 2, tmp_tuple_element_86);
            CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
            tmp_kwargs_value_44 = tmp_class_creation_22__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 330;
            tmp_assign_source_191 = CALL_FUNCTION(tstate, tmp_called_value_66, tmp_args_value_44, tmp_kwargs_value_44);
            Py_DECREF(tmp_args_value_44);
            if (tmp_assign_source_191 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto try_except_handler_71;
            }
            assert(outline_21_var___class__ == NULL);
            outline_21_var___class__ = tmp_assign_source_191;
        }
        CHECK_OBJECT(outline_21_var___class__);
        tmp_assign_source_190 = outline_21_var___class__;
        Py_INCREF(tmp_assign_source_190);
        goto try_return_handler_71;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_71:;
        Py_DECREF(locals_pymongo$errors$$$class__22_InvalidURI_330);
        locals_pymongo$errors$$$class__22_InvalidURI_330 = NULL;
        goto try_return_handler_70;
        // Exception handler code:
        try_except_handler_71:;
        exception_keeper_type_69 = exception_type;
        exception_keeper_value_69 = exception_value;
        exception_keeper_tb_69 = exception_tb;
        exception_keeper_lineno_69 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__22_InvalidURI_330);
        locals_pymongo$errors$$$class__22_InvalidURI_330 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_69;
        exception_value = exception_keeper_value_69;
        exception_tb = exception_keeper_tb_69;
        exception_lineno = exception_keeper_lineno_69;

        goto try_except_handler_70;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_70:;
        CHECK_OBJECT(outline_21_var___class__);
        Py_DECREF(outline_21_var___class__);
        outline_21_var___class__ = NULL;
        goto outline_result_22;
        // Exception handler code:
        try_except_handler_70:;
        exception_keeper_type_70 = exception_type;
        exception_keeper_value_70 = exception_value;
        exception_keeper_tb_70 = exception_tb;
        exception_keeper_lineno_70 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_70;
        exception_value = exception_keeper_value_70;
        exception_tb = exception_keeper_tb_70;
        exception_lineno = exception_keeper_lineno_70;

        goto outline_exception_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_22:;
        exception_lineno = 330;
        goto try_except_handler_69;
        outline_result_22:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_190);
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_71 = exception_type;
    exception_keeper_value_71 = exception_value;
    exception_keeper_tb_71 = exception_tb;
    exception_keeper_lineno_71 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_22__bases_orig);
    tmp_class_creation_22__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    Py_XDECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_71;
    exception_value = exception_keeper_value_71;
    exception_tb = exception_keeper_tb_71;
    exception_lineno = exception_keeper_lineno_71;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    CHECK_OBJECT(tmp_class_creation_22__bases_orig);
    Py_DECREF(tmp_class_creation_22__bases_orig);
    tmp_class_creation_22__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_22__bases);
    Py_DECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
    Py_DECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_22__metaclass);
    Py_DECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_22__prepared);
    Py_DECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_tuple_element_87;
        tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_tuple_element_87 == NULL)) {
            tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_tuple_element_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        tmp_assign_source_192 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_192, 0, tmp_tuple_element_87);
        assert(tmp_class_creation_23__bases_orig == NULL);
        tmp_class_creation_23__bases_orig = tmp_assign_source_192;
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_dircall_arg1_23;
        CHECK_OBJECT(tmp_class_creation_23__bases_orig);
        tmp_dircall_arg1_23 = tmp_class_creation_23__bases_orig;
        Py_INCREF(tmp_dircall_arg1_23);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_23};
            tmp_assign_source_193 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        assert(tmp_class_creation_23__bases == NULL);
        tmp_class_creation_23__bases = tmp_assign_source_193;
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__class_decl_dict == NULL);
        tmp_class_creation_23__class_decl_dict = tmp_assign_source_194;
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_metaclass_value_23;
        nuitka_bool tmp_condition_result_102;
        int tmp_truth_name_23;
        PyObject *tmp_type_arg_45;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_bases_value_23;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_truth_name_23 = CHECK_IF_TRUE(tmp_class_creation_23__bases);
        if (tmp_truth_name_23 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        tmp_condition_result_102 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_102 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_34;
        } else {
            goto condexpr_false_34;
        }
        condexpr_true_34:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_expression_value_133 = tmp_class_creation_23__bases;
        tmp_subscript_value_23 = mod_consts[51];
        tmp_type_arg_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_133, tmp_subscript_value_23, 0);
        if (tmp_type_arg_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        tmp_metaclass_value_23 = BUILTIN_TYPE1(tmp_type_arg_45);
        Py_DECREF(tmp_type_arg_45);
        if (tmp_metaclass_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        goto condexpr_end_34;
        condexpr_false_34:;
        tmp_metaclass_value_23 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_23);
        condexpr_end_34:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_bases_value_23 = tmp_class_creation_23__bases;
        tmp_assign_source_195 = SELECT_METACLASS(tstate, tmp_metaclass_value_23, tmp_bases_value_23);
        Py_DECREF(tmp_metaclass_value_23);
        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        assert(tmp_class_creation_23__metaclass == NULL);
        tmp_class_creation_23__metaclass = tmp_assign_source_195;
    }
    {
        bool tmp_condition_result_103;
        PyObject *tmp_expression_value_134;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_134 = tmp_class_creation_23__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_134, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        tmp_condition_result_103 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_103 != false) {
            goto branch_yes_69;
        } else {
            goto branch_no_69;
        }
    }
    branch_yes_69:;
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_args_value_45;
        PyObject *tmp_tuple_element_88;
        PyObject *tmp_kwargs_value_45;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_135 = tmp_class_creation_23__metaclass;
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[67]);
        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        tmp_tuple_element_88 = mod_consts[164];
        tmp_args_value_45 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_88);
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_tuple_element_88 = tmp_class_creation_23__bases;
        PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_88);
        CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
        tmp_kwargs_value_45 = tmp_class_creation_23__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 334;
        tmp_assign_source_196 = CALL_FUNCTION(tstate, tmp_called_value_67, tmp_args_value_45, tmp_kwargs_value_45);
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_value_45);
        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_196;
    }
    {
        bool tmp_condition_result_104;
        PyObject *tmp_operand_value_23;
        PyObject *tmp_expression_value_136;
        CHECK_OBJECT(tmp_class_creation_23__prepared);
        tmp_expression_value_136 = tmp_class_creation_23__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_136, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        tmp_operand_value_23 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
        assert(!(tmp_res == -1));
        tmp_condition_result_104 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_104 != false) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        PyObject *tmp_raise_type_23;
        PyObject *tmp_raise_value_23;
        PyObject *tmp_mod_expr_left_23;
        PyObject *tmp_mod_expr_right_23;
        PyObject *tmp_tuple_element_89;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_name_value_26;
        PyObject *tmp_default_value_23;
        tmp_raise_type_23 = PyExc_TypeError;
        tmp_mod_expr_left_23 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_137 = tmp_class_creation_23__metaclass;
        tmp_name_value_26 = mod_consts[70];
        tmp_default_value_23 = mod_consts[71];
        tmp_tuple_element_89 = BUILTIN_GETATTR(tstate, tmp_expression_value_137, tmp_name_value_26, tmp_default_value_23);
        if (tmp_tuple_element_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        tmp_mod_expr_right_23 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_138;
            PyObject *tmp_type_arg_46;
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 0, tmp_tuple_element_89);
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_type_arg_46 = tmp_class_creation_23__prepared;
            tmp_expression_value_138 = BUILTIN_TYPE1(tmp_type_arg_46);
            assert(!(tmp_expression_value_138 == NULL));
            tmp_tuple_element_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[70]);
            Py_DECREF(tmp_expression_value_138);
            if (tmp_tuple_element_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 1, tmp_tuple_element_89);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_mod_expr_right_23);
        goto try_except_handler_72;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_raise_value_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
        Py_DECREF(tmp_mod_expr_right_23);
        if (tmp_raise_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_72;
        }
        exception_type = tmp_raise_type_23;
        Py_INCREF(tmp_raise_type_23);
        exception_value = tmp_raise_value_23;
        exception_lineno = 334;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_72;
    }
    branch_no_70:;
    goto branch_end_69;
    branch_no_69:;
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_197;
    }
    branch_end_69:;
    {
        PyObject *tmp_assign_source_198;
        {
            PyObject *tmp_set_locals_23;
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_set_locals_23 = tmp_class_creation_23__prepared;
            locals_pymongo$errors$$$class__23_DocumentTooLarge_334 = tmp_set_locals_23;
            Py_INCREF(tmp_set_locals_23);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__23_DocumentTooLarge_334, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_74;
        }
        tmp_dictset_value = mod_consts[165];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__23_DocumentTooLarge_334, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_74;
        }
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__23_DocumentTooLarge_334, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_74;
        }
        {
            nuitka_bool tmp_condition_result_105;
            PyObject *tmp_cmp_expr_left_25;
            PyObject *tmp_cmp_expr_right_25;
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_cmp_expr_left_25 = tmp_class_creation_23__bases;
            CHECK_OBJECT(tmp_class_creation_23__bases_orig);
            tmp_cmp_expr_right_25 = tmp_class_creation_23__bases_orig;
            tmp_condition_result_105 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
            if (tmp_condition_result_105 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto try_except_handler_74;
            }
            if (tmp_condition_result_105 == NUITKA_BOOL_TRUE) {
                goto branch_yes_71;
            } else {
                goto branch_no_71;
            }
        }
        branch_yes_71:;
        CHECK_OBJECT(tmp_class_creation_23__bases_orig);
        tmp_dictset_value = tmp_class_creation_23__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__23_DocumentTooLarge_334, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_74;
        }
        branch_no_71:;
        {
            PyObject *tmp_assign_source_199;
            PyObject *tmp_called_value_68;
            PyObject *tmp_args_value_46;
            PyObject *tmp_tuple_element_90;
            PyObject *tmp_kwargs_value_46;
            CHECK_OBJECT(tmp_class_creation_23__metaclass);
            tmp_called_value_68 = tmp_class_creation_23__metaclass;
            tmp_tuple_element_90 = mod_consts[164];
            tmp_args_value_46 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_90);
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_tuple_element_90 = tmp_class_creation_23__bases;
            PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_90);
            tmp_tuple_element_90 = locals_pymongo$errors$$$class__23_DocumentTooLarge_334;
            PyTuple_SET_ITEM0(tmp_args_value_46, 2, tmp_tuple_element_90);
            CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
            tmp_kwargs_value_46 = tmp_class_creation_23__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 334;
            tmp_assign_source_199 = CALL_FUNCTION(tstate, tmp_called_value_68, tmp_args_value_46, tmp_kwargs_value_46);
            Py_DECREF(tmp_args_value_46);
            if (tmp_assign_source_199 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto try_except_handler_74;
            }
            assert(outline_22_var___class__ == NULL);
            outline_22_var___class__ = tmp_assign_source_199;
        }
        CHECK_OBJECT(outline_22_var___class__);
        tmp_assign_source_198 = outline_22_var___class__;
        Py_INCREF(tmp_assign_source_198);
        goto try_return_handler_74;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_74:;
        Py_DECREF(locals_pymongo$errors$$$class__23_DocumentTooLarge_334);
        locals_pymongo$errors$$$class__23_DocumentTooLarge_334 = NULL;
        goto try_return_handler_73;
        // Exception handler code:
        try_except_handler_74:;
        exception_keeper_type_72 = exception_type;
        exception_keeper_value_72 = exception_value;
        exception_keeper_tb_72 = exception_tb;
        exception_keeper_lineno_72 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__23_DocumentTooLarge_334);
        locals_pymongo$errors$$$class__23_DocumentTooLarge_334 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_72;
        exception_value = exception_keeper_value_72;
        exception_tb = exception_keeper_tb_72;
        exception_lineno = exception_keeper_lineno_72;

        goto try_except_handler_73;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_73:;
        CHECK_OBJECT(outline_22_var___class__);
        Py_DECREF(outline_22_var___class__);
        outline_22_var___class__ = NULL;
        goto outline_result_23;
        // Exception handler code:
        try_except_handler_73:;
        exception_keeper_type_73 = exception_type;
        exception_keeper_value_73 = exception_value;
        exception_keeper_tb_73 = exception_tb;
        exception_keeper_lineno_73 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_73;
        exception_value = exception_keeper_value_73;
        exception_tb = exception_keeper_tb_73;
        exception_lineno = exception_keeper_lineno_73;

        goto outline_exception_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_23:;
        exception_lineno = 334;
        goto try_except_handler_72;
        outline_result_23:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_198);
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_72:;
    exception_keeper_type_74 = exception_type;
    exception_keeper_value_74 = exception_value;
    exception_keeper_tb_74 = exception_tb;
    exception_keeper_lineno_74 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_23__bases_orig);
    tmp_class_creation_23__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    Py_XDECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_74;
    exception_value = exception_keeper_value_74;
    exception_tb = exception_keeper_tb_74;
    exception_lineno = exception_keeper_lineno_74;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(tmp_class_creation_23__bases_orig);
    Py_DECREF(tmp_class_creation_23__bases_orig);
    tmp_class_creation_23__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_23__bases);
    Py_DECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
    Py_DECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_23__metaclass);
    Py_DECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_23__prepared);
    Py_DECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_tuple_element_91;
        tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_tuple_element_91 == NULL)) {
            tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_tuple_element_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        tmp_assign_source_200 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_200, 0, tmp_tuple_element_91);
        assert(tmp_class_creation_24__bases_orig == NULL);
        tmp_class_creation_24__bases_orig = tmp_assign_source_200;
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_dircall_arg1_24;
        CHECK_OBJECT(tmp_class_creation_24__bases_orig);
        tmp_dircall_arg1_24 = tmp_class_creation_24__bases_orig;
        Py_INCREF(tmp_dircall_arg1_24);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_24};
            tmp_assign_source_201 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        assert(tmp_class_creation_24__bases == NULL);
        tmp_class_creation_24__bases = tmp_assign_source_201;
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__class_decl_dict == NULL);
        tmp_class_creation_24__class_decl_dict = tmp_assign_source_202;
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_metaclass_value_24;
        nuitka_bool tmp_condition_result_106;
        int tmp_truth_name_24;
        PyObject *tmp_type_arg_47;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_bases_value_24;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_truth_name_24 = CHECK_IF_TRUE(tmp_class_creation_24__bases);
        if (tmp_truth_name_24 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        tmp_condition_result_106 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_106 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_35;
        } else {
            goto condexpr_false_35;
        }
        condexpr_true_35:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_expression_value_139 = tmp_class_creation_24__bases;
        tmp_subscript_value_24 = mod_consts[51];
        tmp_type_arg_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_139, tmp_subscript_value_24, 0);
        if (tmp_type_arg_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        tmp_metaclass_value_24 = BUILTIN_TYPE1(tmp_type_arg_47);
        Py_DECREF(tmp_type_arg_47);
        if (tmp_metaclass_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        goto condexpr_end_35;
        condexpr_false_35:;
        tmp_metaclass_value_24 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_24);
        condexpr_end_35:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_bases_value_24 = tmp_class_creation_24__bases;
        tmp_assign_source_203 = SELECT_METACLASS(tstate, tmp_metaclass_value_24, tmp_bases_value_24);
        Py_DECREF(tmp_metaclass_value_24);
        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        assert(tmp_class_creation_24__metaclass == NULL);
        tmp_class_creation_24__metaclass = tmp_assign_source_203;
    }
    {
        bool tmp_condition_result_107;
        PyObject *tmp_expression_value_140;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_140 = tmp_class_creation_24__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_140, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        tmp_condition_result_107 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_107 != false) {
            goto branch_yes_72;
        } else {
            goto branch_no_72;
        }
    }
    branch_yes_72:;
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_args_value_47;
        PyObject *tmp_tuple_element_92;
        PyObject *tmp_kwargs_value_47;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_141 = tmp_class_creation_24__metaclass;
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[67]);
        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        tmp_tuple_element_92 = mod_consts[166];
        tmp_args_value_47 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_92);
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_tuple_element_92 = tmp_class_creation_24__bases;
        PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_92);
        CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
        tmp_kwargs_value_47 = tmp_class_creation_24__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 338;
        tmp_assign_source_204 = CALL_FUNCTION(tstate, tmp_called_value_69, tmp_args_value_47, tmp_kwargs_value_47);
        Py_DECREF(tmp_called_value_69);
        Py_DECREF(tmp_args_value_47);
        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_204;
    }
    {
        bool tmp_condition_result_108;
        PyObject *tmp_operand_value_24;
        PyObject *tmp_expression_value_142;
        CHECK_OBJECT(tmp_class_creation_24__prepared);
        tmp_expression_value_142 = tmp_class_creation_24__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_142, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        tmp_operand_value_24 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_108 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_108 != false) {
            goto branch_yes_73;
        } else {
            goto branch_no_73;
        }
    }
    branch_yes_73:;
    {
        PyObject *tmp_raise_type_24;
        PyObject *tmp_raise_value_24;
        PyObject *tmp_mod_expr_left_24;
        PyObject *tmp_mod_expr_right_24;
        PyObject *tmp_tuple_element_93;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_name_value_27;
        PyObject *tmp_default_value_24;
        tmp_raise_type_24 = PyExc_TypeError;
        tmp_mod_expr_left_24 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_143 = tmp_class_creation_24__metaclass;
        tmp_name_value_27 = mod_consts[70];
        tmp_default_value_24 = mod_consts[71];
        tmp_tuple_element_93 = BUILTIN_GETATTR(tstate, tmp_expression_value_143, tmp_name_value_27, tmp_default_value_24);
        if (tmp_tuple_element_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        tmp_mod_expr_right_24 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_144;
            PyObject *tmp_type_arg_48;
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 0, tmp_tuple_element_93);
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_type_arg_48 = tmp_class_creation_24__prepared;
            tmp_expression_value_144 = BUILTIN_TYPE1(tmp_type_arg_48);
            assert(!(tmp_expression_value_144 == NULL));
            tmp_tuple_element_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[70]);
            Py_DECREF(tmp_expression_value_144);
            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 1, tmp_tuple_element_93);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_mod_expr_right_24);
        goto try_except_handler_75;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_raise_value_24 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
        Py_DECREF(tmp_mod_expr_right_24);
        if (tmp_raise_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_75;
        }
        exception_type = tmp_raise_type_24;
        Py_INCREF(tmp_raise_type_24);
        exception_value = tmp_raise_value_24;
        exception_lineno = 338;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_75;
    }
    branch_no_73:;
    goto branch_end_72;
    branch_no_72:;
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_205;
    }
    branch_end_72:;
    {
        PyObject *tmp_assign_source_206;
        outline_23_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_24;
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_set_locals_24 = tmp_class_creation_24__prepared;
            locals_pymongo$errors$$$class__24_EncryptionError_338 = tmp_set_locals_24;
            Py_INCREF(tmp_set_locals_24);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_77;
        }
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_77;
        }
        tmp_dictset_value = mod_consts[166];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_77;
        }
        frame_cdd26cf71f54477cc4d46b317e404e85_12 = MAKE_CLASS_FRAME(tstate, codeobj_cdd26cf71f54477cc4d46b317e404e85, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_cdd26cf71f54477cc4d46b317e404e85_12);
        assert(Py_REFCNT(frame_cdd26cf71f54477cc4d46b317e404e85_12) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_34;
            struct Nuitka_CellObject *tmp_closure_6[1];
            tmp_annotations_34 = DICT_COPY(mod_consts[168]);

            tmp_closure_6[0] = outline_23_var___class__;
            Py_INCREF(tmp_closure_6[0]);

            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__23___init__(tmp_annotations_34, tmp_closure_6);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
        }
        {
            nuitka_bool tmp_condition_result_109;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_35;
            PyObject *tmp_called_value_71;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_36;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
            tmp_condition_result_109 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_109 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_36;
            } else {
                goto condexpr_false_36;
            }
            condexpr_true_36:;
            tmp_called_value_70 = PyObject_GetItem(locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[89]);

            if (unlikely(tmp_called_value_70 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 351;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }

            if (tmp_called_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
            tmp_annotations_35 = DICT_COPY(mod_consts[170]);


            tmp_args_element_value_23 = MAKE_FUNCTION_pymongo$errors$$$function__24_cause(tmp_annotations_35);

            frame_cdd26cf71f54477cc4d46b317e404e85_12->m_frame.f_lineno = 351;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_23);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
            goto condexpr_end_36;
            condexpr_false_36:;
            tmp_called_value_71 = (PyObject *)&PyProperty_Type;
            tmp_annotations_36 = DICT_COPY(mod_consts[170]);


            tmp_args_element_value_24 = MAKE_FUNCTION_pymongo$errors$$$function__24_cause(tmp_annotations_36);

            frame_cdd26cf71f54477cc4d46b317e404e85_12->m_frame.f_lineno = 351;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
            condexpr_end_36:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[171], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
        }
        {
            nuitka_bool tmp_condition_result_110;
            PyObject *tmp_called_value_72;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_37;
            PyObject *tmp_called_value_73;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_38;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
            tmp_condition_result_110 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_110 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_37;
            } else {
                goto condexpr_false_37;
            }
            condexpr_true_37:;
            tmp_called_value_72 = PyObject_GetItem(locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[89]);

            if (unlikely(tmp_called_value_72 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 356;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }

            if (tmp_called_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
            tmp_annotations_37 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_25 = MAKE_FUNCTION_pymongo$errors$$$function__25_timeout(tmp_annotations_37);

            frame_cdd26cf71f54477cc4d46b317e404e85_12->m_frame.f_lineno = 356;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
            goto condexpr_end_37;
            condexpr_false_37:;
            tmp_called_value_73 = (PyObject *)&PyProperty_Type;
            tmp_annotations_38 = DICT_COPY(mod_consts[90]);


            tmp_args_element_value_26 = MAKE_FUNCTION_pymongo$errors$$$function__25_timeout(tmp_annotations_38);

            frame_cdd26cf71f54477cc4d46b317e404e85_12->m_frame.f_lineno = 356;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
            condexpr_end_37:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;
                type_description_2 = "c";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cdd26cf71f54477cc4d46b317e404e85_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cdd26cf71f54477cc4d46b317e404e85_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cdd26cf71f54477cc4d46b317e404e85_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cdd26cf71f54477cc4d46b317e404e85_12,
            type_description_2,
            outline_23_var___class__
        );



        assertFrameObject(frame_cdd26cf71f54477cc4d46b317e404e85_12);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_77;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_111;
            PyObject *tmp_cmp_expr_left_26;
            PyObject *tmp_cmp_expr_right_26;
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_cmp_expr_left_26 = tmp_class_creation_24__bases;
            CHECK_OBJECT(tmp_class_creation_24__bases_orig);
            tmp_cmp_expr_right_26 = tmp_class_creation_24__bases_orig;
            tmp_condition_result_111 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
            if (tmp_condition_result_111 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto try_except_handler_77;
            }
            if (tmp_condition_result_111 == NUITKA_BOOL_TRUE) {
                goto branch_yes_74;
            } else {
                goto branch_no_74;
            }
        }
        branch_yes_74:;
        CHECK_OBJECT(tmp_class_creation_24__bases_orig);
        tmp_dictset_value = tmp_class_creation_24__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__24_EncryptionError_338, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto try_except_handler_77;
        }
        branch_no_74:;
        {
            PyObject *tmp_assign_source_207;
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_value_48;
            PyObject *tmp_tuple_element_94;
            PyObject *tmp_kwargs_value_48;
            CHECK_OBJECT(tmp_class_creation_24__metaclass);
            tmp_called_value_74 = tmp_class_creation_24__metaclass;
            tmp_tuple_element_94 = mod_consts[166];
            tmp_args_value_48 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_94);
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_tuple_element_94 = tmp_class_creation_24__bases;
            PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_94);
            tmp_tuple_element_94 = locals_pymongo$errors$$$class__24_EncryptionError_338;
            PyTuple_SET_ITEM0(tmp_args_value_48, 2, tmp_tuple_element_94);
            CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
            tmp_kwargs_value_48 = tmp_class_creation_24__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 338;
            tmp_assign_source_207 = CALL_FUNCTION(tstate, tmp_called_value_74, tmp_args_value_48, tmp_kwargs_value_48);
            Py_DECREF(tmp_args_value_48);
            if (tmp_assign_source_207 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto try_except_handler_77;
            }
            assert(Nuitka_Cell_GET(outline_23_var___class__) == NULL);
            PyCell_SET(outline_23_var___class__, tmp_assign_source_207);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_23_var___class__));
        tmp_assign_source_206 = Nuitka_Cell_GET(outline_23_var___class__);
        Py_INCREF(tmp_assign_source_206);
        goto try_return_handler_77;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_77:;
        Py_DECREF(locals_pymongo$errors$$$class__24_EncryptionError_338);
        locals_pymongo$errors$$$class__24_EncryptionError_338 = NULL;
        goto try_return_handler_76;
        // Exception handler code:
        try_except_handler_77:;
        exception_keeper_type_75 = exception_type;
        exception_keeper_value_75 = exception_value;
        exception_keeper_tb_75 = exception_tb;
        exception_keeper_lineno_75 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__24_EncryptionError_338);
        locals_pymongo$errors$$$class__24_EncryptionError_338 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_75;
        exception_value = exception_keeper_value_75;
        exception_tb = exception_keeper_tb_75;
        exception_lineno = exception_keeper_lineno_75;

        goto try_except_handler_76;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_76:;
        CHECK_OBJECT(outline_23_var___class__);
        Py_DECREF(outline_23_var___class__);
        outline_23_var___class__ = NULL;
        goto outline_result_24;
        // Exception handler code:
        try_except_handler_76:;
        exception_keeper_type_76 = exception_type;
        exception_keeper_value_76 = exception_value;
        exception_keeper_tb_76 = exception_tb;
        exception_keeper_lineno_76 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_76;
        exception_value = exception_keeper_value_76;
        exception_tb = exception_keeper_tb_76;
        exception_lineno = exception_keeper_lineno_76;

        goto outline_exception_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_24:;
        exception_lineno = 338;
        goto try_except_handler_75;
        outline_result_24:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_206);
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_75:;
    exception_keeper_type_77 = exception_type;
    exception_keeper_value_77 = exception_value;
    exception_keeper_tb_77 = exception_tb;
    exception_keeper_lineno_77 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_24__bases_orig);
    tmp_class_creation_24__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    Py_XDECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_77;
    exception_value = exception_keeper_value_77;
    exception_tb = exception_keeper_tb_77;
    exception_lineno = exception_keeper_lineno_77;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    CHECK_OBJECT(tmp_class_creation_24__bases_orig);
    Py_DECREF(tmp_class_creation_24__bases_orig);
    tmp_class_creation_24__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_24__bases);
    Py_DECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
    Py_DECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_24__metaclass);
    Py_DECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_24__prepared);
    Py_DECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_tuple_element_95;
        tmp_tuple_element_95 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_tuple_element_95 == NULL)) {
            tmp_tuple_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_tuple_element_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        tmp_assign_source_208 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_208, 0, tmp_tuple_element_95);
        assert(tmp_class_creation_25__bases_orig == NULL);
        tmp_class_creation_25__bases_orig = tmp_assign_source_208;
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_dircall_arg1_25;
        CHECK_OBJECT(tmp_class_creation_25__bases_orig);
        tmp_dircall_arg1_25 = tmp_class_creation_25__bases_orig;
        Py_INCREF(tmp_dircall_arg1_25);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_25};
            tmp_assign_source_209 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        assert(tmp_class_creation_25__bases == NULL);
        tmp_class_creation_25__bases = tmp_assign_source_209;
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_25__class_decl_dict == NULL);
        tmp_class_creation_25__class_decl_dict = tmp_assign_source_210;
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_metaclass_value_25;
        nuitka_bool tmp_condition_result_112;
        int tmp_truth_name_25;
        PyObject *tmp_type_arg_49;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_bases_value_25;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_truth_name_25 = CHECK_IF_TRUE(tmp_class_creation_25__bases);
        if (tmp_truth_name_25 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        tmp_condition_result_112 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_112 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_38;
        } else {
            goto condexpr_false_38;
        }
        condexpr_true_38:;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_expression_value_145 = tmp_class_creation_25__bases;
        tmp_subscript_value_25 = mod_consts[51];
        tmp_type_arg_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_145, tmp_subscript_value_25, 0);
        if (tmp_type_arg_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        tmp_metaclass_value_25 = BUILTIN_TYPE1(tmp_type_arg_49);
        Py_DECREF(tmp_type_arg_49);
        if (tmp_metaclass_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        goto condexpr_end_38;
        condexpr_false_38:;
        tmp_metaclass_value_25 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_25);
        condexpr_end_38:;
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_bases_value_25 = tmp_class_creation_25__bases;
        tmp_assign_source_211 = SELECT_METACLASS(tstate, tmp_metaclass_value_25, tmp_bases_value_25);
        Py_DECREF(tmp_metaclass_value_25);
        if (tmp_assign_source_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        assert(tmp_class_creation_25__metaclass == NULL);
        tmp_class_creation_25__metaclass = tmp_assign_source_211;
    }
    {
        bool tmp_condition_result_113;
        PyObject *tmp_expression_value_146;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_146 = tmp_class_creation_25__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_146, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        tmp_condition_result_113 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_113 != false) {
            goto branch_yes_75;
        } else {
            goto branch_no_75;
        }
    }
    branch_yes_75:;
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_args_value_49;
        PyObject *tmp_tuple_element_96;
        PyObject *tmp_kwargs_value_49;
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_147 = tmp_class_creation_25__metaclass;
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[67]);
        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        tmp_tuple_element_96 = mod_consts[174];
        tmp_args_value_49 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_49, 0, tmp_tuple_element_96);
        CHECK_OBJECT(tmp_class_creation_25__bases);
        tmp_tuple_element_96 = tmp_class_creation_25__bases;
        PyTuple_SET_ITEM0(tmp_args_value_49, 1, tmp_tuple_element_96);
        CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
        tmp_kwargs_value_49 = tmp_class_creation_25__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 363;
        tmp_assign_source_212 = CALL_FUNCTION(tstate, tmp_called_value_75, tmp_args_value_49, tmp_kwargs_value_49);
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_value_49);
        if (tmp_assign_source_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        assert(tmp_class_creation_25__prepared == NULL);
        tmp_class_creation_25__prepared = tmp_assign_source_212;
    }
    {
        bool tmp_condition_result_114;
        PyObject *tmp_operand_value_25;
        PyObject *tmp_expression_value_148;
        CHECK_OBJECT(tmp_class_creation_25__prepared);
        tmp_expression_value_148 = tmp_class_creation_25__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_148, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        tmp_operand_value_25 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_114 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_114 != false) {
            goto branch_yes_76;
        } else {
            goto branch_no_76;
        }
    }
    branch_yes_76:;
    {
        PyObject *tmp_raise_type_25;
        PyObject *tmp_raise_value_25;
        PyObject *tmp_mod_expr_left_25;
        PyObject *tmp_mod_expr_right_25;
        PyObject *tmp_tuple_element_97;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_name_value_28;
        PyObject *tmp_default_value_25;
        tmp_raise_type_25 = PyExc_TypeError;
        tmp_mod_expr_left_25 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_25__metaclass);
        tmp_expression_value_149 = tmp_class_creation_25__metaclass;
        tmp_name_value_28 = mod_consts[70];
        tmp_default_value_25 = mod_consts[71];
        tmp_tuple_element_97 = BUILTIN_GETATTR(tstate, tmp_expression_value_149, tmp_name_value_28, tmp_default_value_25);
        if (tmp_tuple_element_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        tmp_mod_expr_right_25 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_150;
            PyObject *tmp_type_arg_50;
            PyTuple_SET_ITEM(tmp_mod_expr_right_25, 0, tmp_tuple_element_97);
            CHECK_OBJECT(tmp_class_creation_25__prepared);
            tmp_type_arg_50 = tmp_class_creation_25__prepared;
            tmp_expression_value_150 = BUILTIN_TYPE1(tmp_type_arg_50);
            assert(!(tmp_expression_value_150 == NULL));
            tmp_tuple_element_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[70]);
            Py_DECREF(tmp_expression_value_150);
            if (tmp_tuple_element_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_25, 1, tmp_tuple_element_97);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_mod_expr_right_25);
        goto try_except_handler_78;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_raise_value_25 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_25, tmp_mod_expr_right_25);
        Py_DECREF(tmp_mod_expr_right_25);
        if (tmp_raise_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_78;
        }
        exception_type = tmp_raise_type_25;
        Py_INCREF(tmp_raise_type_25);
        exception_value = tmp_raise_value_25;
        exception_lineno = 363;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_78;
    }
    branch_no_76:;
    goto branch_end_75;
    branch_no_75:;
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_25__prepared == NULL);
        tmp_class_creation_25__prepared = tmp_assign_source_213;
    }
    branch_end_75:;
    {
        PyObject *tmp_assign_source_214;
        outline_24_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_25;
            CHECK_OBJECT(tmp_class_creation_25__prepared);
            tmp_set_locals_25 = tmp_class_creation_25__prepared;
            locals_pymongo$errors$$$class__25_EncryptedCollectionError_363 = tmp_set_locals_25;
            Py_INCREF(tmp_set_locals_25);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__25_EncryptedCollectionError_363, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_80;
        }
        tmp_dictset_value = mod_consts[175];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__25_EncryptedCollectionError_363, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_80;
        }
        tmp_dictset_value = mod_consts[174];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__25_EncryptedCollectionError_363, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_80;
        }
        frame_da9bc4bde47d05fee80c69f3557db7bf_13 = MAKE_CLASS_FRAME(tstate, codeobj_da9bc4bde47d05fee80c69f3557db7bf, module_pymongo$errors, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_da9bc4bde47d05fee80c69f3557db7bf_13);
        assert(Py_REFCNT(frame_da9bc4bde47d05fee80c69f3557db7bf_13) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_39;
            struct Nuitka_CellObject *tmp_closure_7[1];
            tmp_annotations_39 = DICT_COPY(mod_consts[176]);

            tmp_closure_7[0] = outline_24_var___class__;
            Py_INCREF(tmp_closure_7[0]);

            tmp_dictset_value = MAKE_FUNCTION_pymongo$errors$$$function__26___init__(tmp_annotations_39, tmp_closure_7);

            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__25_EncryptedCollectionError_363, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "c";
                goto frame_exception_exit_13;
            }
        }
        {
            nuitka_bool tmp_condition_result_115;
            PyObject *tmp_called_value_76;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_40;
            PyObject *tmp_called_value_77;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_41;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pymongo$errors$$$class__25_EncryptedCollectionError_363, mod_consts[89]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "c";
                goto frame_exception_exit_13;
            }
            tmp_condition_result_115 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_115 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_39;
            } else {
                goto condexpr_false_39;
            }
            condexpr_true_39:;
            tmp_called_value_76 = PyObject_GetItem(locals_pymongo$errors$$$class__25_EncryptedCollectionError_363, mod_consts[89]);

            if (unlikely(tmp_called_value_76 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[89]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 373;
                type_description_2 = "c";
                goto frame_exception_exit_13;
            }

            if (tmp_called_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "c";
                goto frame_exception_exit_13;
            }
            tmp_annotations_40 = DICT_COPY(mod_consts[178]);


            tmp_args_element_value_27 = MAKE_FUNCTION_pymongo$errors$$$function__27_encrypted_fields(tmp_annotations_40);

            frame_da9bc4bde47d05fee80c69f3557db7bf_13->m_frame.f_lineno = 373;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "c";
                goto frame_exception_exit_13;
            }
            goto condexpr_end_39;
            condexpr_false_39:;
            tmp_called_value_77 = (PyObject *)&PyProperty_Type;
            tmp_annotations_41 = DICT_COPY(mod_consts[178]);


            tmp_args_element_value_28 = MAKE_FUNCTION_pymongo$errors$$$function__27_encrypted_fields(tmp_annotations_41);

            frame_da9bc4bde47d05fee80c69f3557db7bf_13->m_frame.f_lineno = 373;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "c";
                goto frame_exception_exit_13;
            }
            condexpr_end_39:;
            tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__25_EncryptedCollectionError_363, mod_consts[179], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "c";
                goto frame_exception_exit_13;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_12;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_da9bc4bde47d05fee80c69f3557db7bf_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_da9bc4bde47d05fee80c69f3557db7bf_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_da9bc4bde47d05fee80c69f3557db7bf_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_da9bc4bde47d05fee80c69f3557db7bf_13,
            type_description_2,
            outline_24_var___class__
        );



        assertFrameObject(frame_da9bc4bde47d05fee80c69f3557db7bf_13);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_80;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_116;
            PyObject *tmp_cmp_expr_left_27;
            PyObject *tmp_cmp_expr_right_27;
            CHECK_OBJECT(tmp_class_creation_25__bases);
            tmp_cmp_expr_left_27 = tmp_class_creation_25__bases;
            CHECK_OBJECT(tmp_class_creation_25__bases_orig);
            tmp_cmp_expr_right_27 = tmp_class_creation_25__bases_orig;
            tmp_condition_result_116 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
            if (tmp_condition_result_116 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto try_except_handler_80;
            }
            if (tmp_condition_result_116 == NUITKA_BOOL_TRUE) {
                goto branch_yes_77;
            } else {
                goto branch_no_77;
            }
        }
        branch_yes_77:;
        CHECK_OBJECT(tmp_class_creation_25__bases_orig);
        tmp_dictset_value = tmp_class_creation_25__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__25_EncryptedCollectionError_363, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_80;
        }
        branch_no_77:;
        {
            PyObject *tmp_assign_source_215;
            PyObject *tmp_called_value_78;
            PyObject *tmp_args_value_50;
            PyObject *tmp_tuple_element_98;
            PyObject *tmp_kwargs_value_50;
            CHECK_OBJECT(tmp_class_creation_25__metaclass);
            tmp_called_value_78 = tmp_class_creation_25__metaclass;
            tmp_tuple_element_98 = mod_consts[174];
            tmp_args_value_50 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_50, 0, tmp_tuple_element_98);
            CHECK_OBJECT(tmp_class_creation_25__bases);
            tmp_tuple_element_98 = tmp_class_creation_25__bases;
            PyTuple_SET_ITEM0(tmp_args_value_50, 1, tmp_tuple_element_98);
            tmp_tuple_element_98 = locals_pymongo$errors$$$class__25_EncryptedCollectionError_363;
            PyTuple_SET_ITEM0(tmp_args_value_50, 2, tmp_tuple_element_98);
            CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
            tmp_kwargs_value_50 = tmp_class_creation_25__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 363;
            tmp_assign_source_215 = CALL_FUNCTION(tstate, tmp_called_value_78, tmp_args_value_50, tmp_kwargs_value_50);
            Py_DECREF(tmp_args_value_50);
            if (tmp_assign_source_215 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto try_except_handler_80;
            }
            assert(Nuitka_Cell_GET(outline_24_var___class__) == NULL);
            PyCell_SET(outline_24_var___class__, tmp_assign_source_215);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_24_var___class__));
        tmp_assign_source_214 = Nuitka_Cell_GET(outline_24_var___class__);
        Py_INCREF(tmp_assign_source_214);
        goto try_return_handler_80;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_80:;
        Py_DECREF(locals_pymongo$errors$$$class__25_EncryptedCollectionError_363);
        locals_pymongo$errors$$$class__25_EncryptedCollectionError_363 = NULL;
        goto try_return_handler_79;
        // Exception handler code:
        try_except_handler_80:;
        exception_keeper_type_78 = exception_type;
        exception_keeper_value_78 = exception_value;
        exception_keeper_tb_78 = exception_tb;
        exception_keeper_lineno_78 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__25_EncryptedCollectionError_363);
        locals_pymongo$errors$$$class__25_EncryptedCollectionError_363 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_78;
        exception_value = exception_keeper_value_78;
        exception_tb = exception_keeper_tb_78;
        exception_lineno = exception_keeper_lineno_78;

        goto try_except_handler_79;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_79:;
        CHECK_OBJECT(outline_24_var___class__);
        Py_DECREF(outline_24_var___class__);
        outline_24_var___class__ = NULL;
        goto outline_result_25;
        // Exception handler code:
        try_except_handler_79:;
        exception_keeper_type_79 = exception_type;
        exception_keeper_value_79 = exception_value;
        exception_keeper_tb_79 = exception_tb;
        exception_keeper_lineno_79 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_79;
        exception_value = exception_keeper_value_79;
        exception_tb = exception_keeper_tb_79;
        exception_lineno = exception_keeper_lineno_79;

        goto outline_exception_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_25:;
        exception_lineno = 363;
        goto try_except_handler_78;
        outline_result_25:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_214);
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_78:;
    exception_keeper_type_80 = exception_type;
    exception_keeper_value_80 = exception_value;
    exception_keeper_tb_80 = exception_tb;
    exception_keeper_lineno_80 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_25__bases_orig);
    tmp_class_creation_25__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_25__bases);
    tmp_class_creation_25__bases = NULL;
    Py_XDECREF(tmp_class_creation_25__class_decl_dict);
    tmp_class_creation_25__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_25__prepared);
    tmp_class_creation_25__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_80;
    exception_value = exception_keeper_value_80;
    exception_tb = exception_keeper_tb_80;
    exception_lineno = exception_keeper_lineno_80;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    CHECK_OBJECT(tmp_class_creation_25__bases_orig);
    Py_DECREF(tmp_class_creation_25__bases_orig);
    tmp_class_creation_25__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_25__bases);
    Py_DECREF(tmp_class_creation_25__bases);
    tmp_class_creation_25__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_25__class_decl_dict);
    Py_DECREF(tmp_class_creation_25__class_decl_dict);
    tmp_class_creation_25__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_25__metaclass);
    Py_DECREF(tmp_class_creation_25__metaclass);
    tmp_class_creation_25__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_25__prepared);
    Py_DECREF(tmp_class_creation_25__prepared);
    tmp_class_creation_25__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_tuple_element_99;
        tmp_tuple_element_99 = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_99 == NULL)) {
            tmp_tuple_element_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_tuple_element_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        tmp_assign_source_216 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_216, 0, tmp_tuple_element_99);
        assert(tmp_class_creation_26__bases_orig == NULL);
        tmp_class_creation_26__bases_orig = tmp_assign_source_216;
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_dircall_arg1_26;
        CHECK_OBJECT(tmp_class_creation_26__bases_orig);
        tmp_dircall_arg1_26 = tmp_class_creation_26__bases_orig;
        Py_INCREF(tmp_dircall_arg1_26);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_26};
            tmp_assign_source_217 = impl___main__$$$function__5__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        assert(tmp_class_creation_26__bases == NULL);
        tmp_class_creation_26__bases = tmp_assign_source_217;
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_26__class_decl_dict == NULL);
        tmp_class_creation_26__class_decl_dict = tmp_assign_source_218;
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_metaclass_value_26;
        nuitka_bool tmp_condition_result_117;
        int tmp_truth_name_26;
        PyObject *tmp_type_arg_51;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_bases_value_26;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_truth_name_26 = CHECK_IF_TRUE(tmp_class_creation_26__bases);
        if (tmp_truth_name_26 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        tmp_condition_result_117 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_117 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_40;
        } else {
            goto condexpr_false_40;
        }
        condexpr_true_40:;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_expression_value_151 = tmp_class_creation_26__bases;
        tmp_subscript_value_26 = mod_consts[51];
        tmp_type_arg_51 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_151, tmp_subscript_value_26, 0);
        if (tmp_type_arg_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        tmp_metaclass_value_26 = BUILTIN_TYPE1(tmp_type_arg_51);
        Py_DECREF(tmp_type_arg_51);
        if (tmp_metaclass_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        goto condexpr_end_40;
        condexpr_false_40:;
        tmp_metaclass_value_26 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_26);
        condexpr_end_40:;
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_bases_value_26 = tmp_class_creation_26__bases;
        tmp_assign_source_219 = SELECT_METACLASS(tstate, tmp_metaclass_value_26, tmp_bases_value_26);
        Py_DECREF(tmp_metaclass_value_26);
        if (tmp_assign_source_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        assert(tmp_class_creation_26__metaclass == NULL);
        tmp_class_creation_26__metaclass = tmp_assign_source_219;
    }
    {
        bool tmp_condition_result_118;
        PyObject *tmp_expression_value_152;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_152 = tmp_class_creation_26__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_152, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        tmp_condition_result_118 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_118 != false) {
            goto branch_yes_78;
        } else {
            goto branch_no_78;
        }
    }
    branch_yes_78:;
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_args_value_51;
        PyObject *tmp_tuple_element_100;
        PyObject *tmp_kwargs_value_51;
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_153 = tmp_class_creation_26__metaclass;
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[67]);
        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        tmp_tuple_element_100 = mod_consts[181];
        tmp_args_value_51 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_51, 0, tmp_tuple_element_100);
        CHECK_OBJECT(tmp_class_creation_26__bases);
        tmp_tuple_element_100 = tmp_class_creation_26__bases;
        PyTuple_SET_ITEM0(tmp_args_value_51, 1, tmp_tuple_element_100);
        CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
        tmp_kwargs_value_51 = tmp_class_creation_26__class_decl_dict;
        frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 385;
        tmp_assign_source_220 = CALL_FUNCTION(tstate, tmp_called_value_79, tmp_args_value_51, tmp_kwargs_value_51);
        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_value_51);
        if (tmp_assign_source_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        assert(tmp_class_creation_26__prepared == NULL);
        tmp_class_creation_26__prepared = tmp_assign_source_220;
    }
    {
        bool tmp_condition_result_119;
        PyObject *tmp_operand_value_26;
        PyObject *tmp_expression_value_154;
        CHECK_OBJECT(tmp_class_creation_26__prepared);
        tmp_expression_value_154 = tmp_class_creation_26__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_154, mod_consts[68]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        tmp_operand_value_26 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_26);
        assert(!(tmp_res == -1));
        tmp_condition_result_119 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_119 != false) {
            goto branch_yes_79;
        } else {
            goto branch_no_79;
        }
    }
    branch_yes_79:;
    {
        PyObject *tmp_raise_type_26;
        PyObject *tmp_raise_value_26;
        PyObject *tmp_mod_expr_left_26;
        PyObject *tmp_mod_expr_right_26;
        PyObject *tmp_tuple_element_101;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_name_value_29;
        PyObject *tmp_default_value_26;
        tmp_raise_type_26 = PyExc_TypeError;
        tmp_mod_expr_left_26 = mod_consts[69];
        CHECK_OBJECT(tmp_class_creation_26__metaclass);
        tmp_expression_value_155 = tmp_class_creation_26__metaclass;
        tmp_name_value_29 = mod_consts[70];
        tmp_default_value_26 = mod_consts[71];
        tmp_tuple_element_101 = BUILTIN_GETATTR(tstate, tmp_expression_value_155, tmp_name_value_29, tmp_default_value_26);
        if (tmp_tuple_element_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        tmp_mod_expr_right_26 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_156;
            PyObject *tmp_type_arg_52;
            PyTuple_SET_ITEM(tmp_mod_expr_right_26, 0, tmp_tuple_element_101);
            CHECK_OBJECT(tmp_class_creation_26__prepared);
            tmp_type_arg_52 = tmp_class_creation_26__prepared;
            tmp_expression_value_156 = BUILTIN_TYPE1(tmp_type_arg_52);
            assert(!(tmp_expression_value_156 == NULL));
            tmp_tuple_element_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[70]);
            Py_DECREF(tmp_expression_value_156);
            if (tmp_tuple_element_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_26, 1, tmp_tuple_element_101);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_mod_expr_right_26);
        goto try_except_handler_81;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_raise_value_26 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_26, tmp_mod_expr_right_26);
        Py_DECREF(tmp_mod_expr_right_26);
        if (tmp_raise_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_81;
        }
        exception_type = tmp_raise_type_26;
        Py_INCREF(tmp_raise_type_26);
        exception_value = tmp_raise_value_26;
        exception_lineno = 385;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_81;
    }
    branch_no_79:;
    goto branch_end_78;
    branch_no_78:;
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_26__prepared == NULL);
        tmp_class_creation_26__prepared = tmp_assign_source_221;
    }
    branch_end_78:;
    {
        PyObject *tmp_assign_source_222;
        {
            PyObject *tmp_set_locals_26;
            CHECK_OBJECT(tmp_class_creation_26__prepared);
            tmp_set_locals_26 = tmp_class_creation_26__prepared;
            locals_pymongo$errors$$$class__26__OperationCancelled_385 = tmp_set_locals_26;
            Py_INCREF(tmp_set_locals_26);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__26__OperationCancelled_385, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_83;
        }
        tmp_dictset_value = mod_consts[182];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__26__OperationCancelled_385, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_83;
        }
        tmp_dictset_value = mod_consts[181];
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__26__OperationCancelled_385, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_83;
        }
        {
            nuitka_bool tmp_condition_result_120;
            PyObject *tmp_cmp_expr_left_28;
            PyObject *tmp_cmp_expr_right_28;
            CHECK_OBJECT(tmp_class_creation_26__bases);
            tmp_cmp_expr_left_28 = tmp_class_creation_26__bases;
            CHECK_OBJECT(tmp_class_creation_26__bases_orig);
            tmp_cmp_expr_right_28 = tmp_class_creation_26__bases_orig;
            tmp_condition_result_120 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
            if (tmp_condition_result_120 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto try_except_handler_83;
            }
            if (tmp_condition_result_120 == NUITKA_BOOL_TRUE) {
                goto branch_yes_80;
            } else {
                goto branch_no_80;
            }
        }
        branch_yes_80:;
        CHECK_OBJECT(tmp_class_creation_26__bases_orig);
        tmp_dictset_value = tmp_class_creation_26__bases_orig;
        tmp_res = PyObject_SetItem(locals_pymongo$errors$$$class__26__OperationCancelled_385, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_83;
        }
        branch_no_80:;
        {
            PyObject *tmp_assign_source_223;
            PyObject *tmp_called_value_80;
            PyObject *tmp_args_value_52;
            PyObject *tmp_tuple_element_102;
            PyObject *tmp_kwargs_value_52;
            CHECK_OBJECT(tmp_class_creation_26__metaclass);
            tmp_called_value_80 = tmp_class_creation_26__metaclass;
            tmp_tuple_element_102 = mod_consts[181];
            tmp_args_value_52 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_52, 0, tmp_tuple_element_102);
            CHECK_OBJECT(tmp_class_creation_26__bases);
            tmp_tuple_element_102 = tmp_class_creation_26__bases;
            PyTuple_SET_ITEM0(tmp_args_value_52, 1, tmp_tuple_element_102);
            tmp_tuple_element_102 = locals_pymongo$errors$$$class__26__OperationCancelled_385;
            PyTuple_SET_ITEM0(tmp_args_value_52, 2, tmp_tuple_element_102);
            CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
            tmp_kwargs_value_52 = tmp_class_creation_26__class_decl_dict;
            frame_1a140cd26106eff5d314fb441ad641b5->m_frame.f_lineno = 385;
            tmp_assign_source_223 = CALL_FUNCTION(tstate, tmp_called_value_80, tmp_args_value_52, tmp_kwargs_value_52);
            Py_DECREF(tmp_args_value_52);
            if (tmp_assign_source_223 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto try_except_handler_83;
            }
            assert(outline_25_var___class__ == NULL);
            outline_25_var___class__ = tmp_assign_source_223;
        }
        CHECK_OBJECT(outline_25_var___class__);
        tmp_assign_source_222 = outline_25_var___class__;
        Py_INCREF(tmp_assign_source_222);
        goto try_return_handler_83;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_83:;
        Py_DECREF(locals_pymongo$errors$$$class__26__OperationCancelled_385);
        locals_pymongo$errors$$$class__26__OperationCancelled_385 = NULL;
        goto try_return_handler_82;
        // Exception handler code:
        try_except_handler_83:;
        exception_keeper_type_81 = exception_type;
        exception_keeper_value_81 = exception_value;
        exception_keeper_tb_81 = exception_tb;
        exception_keeper_lineno_81 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymongo$errors$$$class__26__OperationCancelled_385);
        locals_pymongo$errors$$$class__26__OperationCancelled_385 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_81;
        exception_value = exception_keeper_value_81;
        exception_tb = exception_keeper_tb_81;
        exception_lineno = exception_keeper_lineno_81;

        goto try_except_handler_82;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_82:;
        CHECK_OBJECT(outline_25_var___class__);
        Py_DECREF(outline_25_var___class__);
        outline_25_var___class__ = NULL;
        goto outline_result_26;
        // Exception handler code:
        try_except_handler_82:;
        exception_keeper_type_82 = exception_type;
        exception_keeper_value_82 = exception_value;
        exception_keeper_tb_82 = exception_tb;
        exception_keeper_lineno_82 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_82;
        exception_value = exception_keeper_value_82;
        exception_tb = exception_keeper_tb_82;
        exception_lineno = exception_keeper_lineno_82;

        goto outline_exception_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_26:;
        exception_lineno = 385;
        goto try_except_handler_81;
        outline_result_26:;
        UPDATE_STRING_DICT1(moduledict_pymongo$errors, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_222);
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_81:;
    exception_keeper_type_83 = exception_type;
    exception_keeper_value_83 = exception_value;
    exception_keeper_tb_83 = exception_tb;
    exception_keeper_lineno_83 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_26__bases_orig);
    tmp_class_creation_26__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_26__bases);
    tmp_class_creation_26__bases = NULL;
    Py_XDECREF(tmp_class_creation_26__class_decl_dict);
    tmp_class_creation_26__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_26__prepared);
    tmp_class_creation_26__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_83;
    exception_value = exception_keeper_value_83;
    exception_tb = exception_keeper_tb_83;
    exception_lineno = exception_keeper_lineno_83;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_13;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a140cd26106eff5d314fb441ad641b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a140cd26106eff5d314fb441ad641b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a140cd26106eff5d314fb441ad641b5, exception_lineno);
    }



    assertFrameObject(frame_1a140cd26106eff5d314fb441ad641b5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_13:;
    CHECK_OBJECT(tmp_class_creation_26__bases_orig);
    Py_DECREF(tmp_class_creation_26__bases_orig);
    tmp_class_creation_26__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_26__bases);
    Py_DECREF(tmp_class_creation_26__bases);
    tmp_class_creation_26__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_26__class_decl_dict);
    Py_DECREF(tmp_class_creation_26__class_decl_dict);
    tmp_class_creation_26__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_26__metaclass);
    Py_DECREF(tmp_class_creation_26__metaclass);
    tmp_class_creation_26__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_26__prepared);
    Py_DECREF(tmp_class_creation_26__prepared);
    tmp_class_creation_26__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pymongo$errors", false);

    Py_INCREF(module_pymongo$errors);
    return module_pymongo$errors;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pymongo$errors, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pymongo$errors", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
