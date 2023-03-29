/* Generated code for Python module 'Xlib.ext.record'
 * created by Nuitka version 1.1.2
 *
 * This code is in part copyright 2022 Kay Hayen.
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

/* The "module_Xlib$ext$record" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Xlib$ext$record;
PyDictObject *moduledict_Xlib$ext$record;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[183];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[183];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Xlib.ext.record"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 183; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Xlib$ext$record(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 183; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_706066665577635d1dcb44c5688a374d;
static PyCodeObject *codeobj_d2e5eeec50356a3f98a66f4957753e1b;
static PyCodeObject *codeobj_a5626468756bfb8a74931d92392aae5b;
static PyCodeObject *codeobj_e7d109869c580c973c02c71112716569;
static PyCodeObject *codeobj_b86b0ee285c73436bd27f178aa0385d1;
static PyCodeObject *codeobj_c9ec79e355fe9c572d73eb9d886b4bcd;
static PyCodeObject *codeobj_dee88f47afe5e15bc49677eb9ebfcc41;
static PyCodeObject *codeobj_1d8d0b62c8a4201cd206fe10edb03bb2;
static PyCodeObject *codeobj_0996cfbe33ab663bf286b1f5ca7778f5;
static PyCodeObject *codeobj_eef067f9a980c7ea4b19bdd852feed55;
static PyCodeObject *codeobj_eb9fadd1b5a56f7f0bec3c43c896d34d;
static PyCodeObject *codeobj_5b55fe44564c9fc76acc3a1c807f90fd;
static PyCodeObject *codeobj_491b34f9c6e3f8e3dd98ac7012de062a;
static PyCodeObject *codeobj_a6aca7c3f5cb25d1576c2e8edd4966c5;
static PyCodeObject *codeobj_c24aa02c3807120aab2ed3cbeabdbf44;
static PyCodeObject *codeobj_a98a513fe7a12033c9e3e25ed0c7f12b;
static PyCodeObject *codeobj_78f281aae1423d028e16f2feedb93d6c;
static PyCodeObject *codeobj_214d93b87b40d5c979c792579103e54b;
static PyCodeObject *codeobj_dac0ffd3ba5394c45401a66d3b076c09;
static PyCodeObject *codeobj_714414dae13e8eb76c8fea46948f3639;
static PyCodeObject *codeobj_fff189116be5b1121a578d646b36ee13;
static PyCodeObject *codeobj_cb845449f1c34027bee728661d516943;
static PyCodeObject *codeobj_303ab1f2c6676118dbadfce84286181e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[169]); CHECK_OBJECT(module_filename_obj);
    codeobj_706066665577635d1dcb44c5688a374d = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[170], NULL, NULL, 0, 0, 0);
    codeobj_d2e5eeec50356a3f98a66f4957753e1b = MAKE_CODEOBJECT(module_filename_obj, 105, CO_NOFREE, mod_consts[7], mod_consts[171], NULL, 0, 0, 0);
    codeobj_a5626468756bfb8a74931d92392aae5b = MAKE_CODEOBJECT(module_filename_obj, 246, CO_NOFREE, mod_consts[35], mod_consts[171], NULL, 0, 0, 0);
    codeobj_e7d109869c580c973c02c71112716569 = MAKE_CODEOBJECT(module_filename_obj, 193, CO_NOFREE, mod_consts[33], mod_consts[171], NULL, 0, 0, 0);
    codeobj_b86b0ee285c73436bd27f178aa0385d1 = MAKE_CODEOBJECT(module_filename_obj, 260, CO_NOFREE, mod_consts[36], mod_consts[171], NULL, 0, 0, 0);
    codeobj_c9ec79e355fe9c572d73eb9d886b4bcd = MAKE_CODEOBJECT(module_filename_obj, 170, CO_NOFREE, mod_consts[12], mod_consts[171], NULL, 0, 0, 0);
    codeobj_dee88f47afe5e15bc49677eb9ebfcc41 = MAKE_CODEOBJECT(module_filename_obj, 82, CO_NOFREE, mod_consts[1], mod_consts[171], NULL, 0, 0, 0);
    codeobj_1d8d0b62c8a4201cd206fe10edb03bb2 = MAKE_CODEOBJECT(module_filename_obj, 70, CO_NOFREE, mod_consts[116], mod_consts[171], NULL, 0, 0, 0);
    codeobj_0996cfbe33ab663bf286b1f5ca7778f5 = MAKE_CODEOBJECT(module_filename_obj, 130, CO_NOFREE, mod_consts[9], mod_consts[171], NULL, 0, 0, 0);
    codeobj_eef067f9a980c7ea4b19bdd852feed55 = MAKE_CODEOBJECT(module_filename_obj, 153, CO_NOFREE, mod_consts[10], mod_consts[171], NULL, 0, 0, 0);
    codeobj_eb9fadd1b5a56f7f0bec3c43c896d34d = MAKE_CODEOBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[17], mod_consts[172], NULL, 2, 0, 0);
    codeobj_5b55fe44564c9fc76acc3a1c807f90fd = MAKE_CODEOBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[173], NULL, 2, 0, 0);
    codeobj_491b34f9c6e3f8e3dd98ac7012de062a = MAKE_CODEOBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[174], NULL, 4, 0, 0);
    codeobj_a6aca7c3f5cb25d1576c2e8edd4966c5 = MAKE_CODEOBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[175], NULL, 2, 0, 0);
    codeobj_c24aa02c3807120aab2ed3cbeabdbf44 = MAKE_CODEOBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[176], NULL, 3, 0, 0);
    codeobj_a98a513fe7a12033c9e3e25ed0c7f12b = MAKE_CODEOBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[175], NULL, 2, 0, 0);
    codeobj_78f281aae1423d028e16f2feedb93d6c = MAKE_CODEOBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[175], NULL, 2, 0, 0);
    codeobj_214d93b87b40d5c979c792579103e54b = MAKE_CODEOBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[177], NULL, 3, 0, 0);
    codeobj_dac0ffd3ba5394c45401a66d3b076c09 = MAKE_CODEOBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[168], mod_consts[178], NULL, 2, 0, 0);
    codeobj_714414dae13e8eb76c8fea46948f3639 = MAKE_CODEOBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[179], NULL, 2, 0, 0);
    codeobj_fff189116be5b1121a578d646b36ee13 = MAKE_CODEOBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[180], NULL, 5, 0, 0);
    codeobj_cb845449f1c34027bee728661d516943 = MAKE_CODEOBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[181], NULL, 5, 0, 0);
    codeobj_303ab1f2c6676118dbadfce84286181e = MAKE_CODEOBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[182], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__10_enable_context();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__11_disable_context();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__12_free_context();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__13_init();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__1_pack_value();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__2_parse_binary_value();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__3_get_version();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__4_create_context();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__5_register_clients();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__6_unregister_clients();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__7_get_context();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__8___init__();


static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__9__parse_response();


// The module function definitions.
static PyObject *impl_Xlib$ext$record$$$function__1_pack_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_val = python_pars[1];
    struct Nuitka_FrameObject *frame_714414dae13e8eb76c8fea46948f3639;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_714414dae13e8eb76c8fea46948f3639 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_714414dae13e8eb76c8fea46948f3639)) {
        Py_XDECREF(cache_frame_714414dae13e8eb76c8fea46948f3639);

#if _DEBUG_REFCOUNTS
        if (cache_frame_714414dae13e8eb76c8fea46948f3639 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_714414dae13e8eb76c8fea46948f3639 = MAKE_FUNCTION_FRAME(codeobj_714414dae13e8eb76c8fea46948f3639, module_Xlib$ext$record, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_714414dae13e8eb76c8fea46948f3639->m_type_description == NULL);
    frame_714414dae13e8eb76c8fea46948f3639 = cache_frame_714414dae13e8eb76c8fea46948f3639;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_714414dae13e8eb76c8fea46948f3639);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_714414dae13e8eb76c8fea46948f3639) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_val);
        tmp_tuple_element_1 = par_val;
        tmp_return_value = PyTuple_New(3);
        {
            PyObject *tmp_len_arg_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_val);
            tmp_len_arg_1 = par_val;
            tmp_tuple_element_1 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_714414dae13e8eb76c8fea46948f3639);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_714414dae13e8eb76c8fea46948f3639);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_714414dae13e8eb76c8fea46948f3639);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_714414dae13e8eb76c8fea46948f3639, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_714414dae13e8eb76c8fea46948f3639->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_714414dae13e8eb76c8fea46948f3639, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_714414dae13e8eb76c8fea46948f3639,
        type_description_1,
        par_self,
        par_val
    );


    // Release cached frame if used for exception.
    if (frame_714414dae13e8eb76c8fea46948f3639 == cache_frame_714414dae13e8eb76c8fea46948f3639) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_714414dae13e8eb76c8fea46948f3639);
        cache_frame_714414dae13e8eb76c8fea46948f3639 = NULL;
    }

    assertFrameObject(frame_714414dae13e8eb76c8fea46948f3639);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__2_parse_binary_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *par_display = python_pars[2];
    PyObject *par_length = python_pars[3];
    PyObject *par_format = python_pars[4];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_data);
        tmp_tuple_element_1 = par_data;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[0];
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_display);
    Py_DECREF(par_display);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    CHECK_OBJECT(par_format);
    Py_DECREF(par_format);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__3_get_version(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_major = python_pars[1];
    PyObject *par_minor = python_pars[2];
    struct Nuitka_FrameObject *frame_214d93b87b40d5c979c792579103e54b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_214d93b87b40d5c979c792579103e54b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_214d93b87b40d5c979c792579103e54b)) {
        Py_XDECREF(cache_frame_214d93b87b40d5c979c792579103e54b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_214d93b87b40d5c979c792579103e54b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_214d93b87b40d5c979c792579103e54b = MAKE_FUNCTION_FRAME(codeobj_214d93b87b40d5c979c792579103e54b, module_Xlib$ext$record, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_214d93b87b40d5c979c792579103e54b->m_type_description == NULL);
    frame_214d93b87b40d5c979c792579103e54b = cache_frame_214d93b87b40d5c979c792579103e54b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_214d93b87b40d5c979c792579103e54b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_214d93b87b40d5c979c792579103e54b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 100;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 100;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 100;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_214d93b87b40d5c979c792579103e54b->m_frame.f_lineno = 100;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 100;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_major);
        tmp_kw_call_value_2_1 = par_major;
        CHECK_OBJECT(par_minor);
        tmp_kw_call_value_3_1 = par_minor;
        frame_214d93b87b40d5c979c792579103e54b->m_frame.f_lineno = 98;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[5]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_214d93b87b40d5c979c792579103e54b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_214d93b87b40d5c979c792579103e54b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_214d93b87b40d5c979c792579103e54b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_214d93b87b40d5c979c792579103e54b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_214d93b87b40d5c979c792579103e54b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_214d93b87b40d5c979c792579103e54b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_214d93b87b40d5c979c792579103e54b,
        type_description_1,
        par_self,
        par_major,
        par_minor
    );


    // Release cached frame if used for exception.
    if (frame_214d93b87b40d5c979c792579103e54b == cache_frame_214d93b87b40d5c979c792579103e54b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_214d93b87b40d5c979c792579103e54b);
        cache_frame_214d93b87b40d5c979c792579103e54b = NULL;
    }

    assertFrameObject(frame_214d93b87b40d5c979c792579103e54b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_major);
    Py_DECREF(par_major);
    CHECK_OBJECT(par_minor);
    Py_DECREF(par_minor);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_major);
    Py_DECREF(par_major);
    CHECK_OBJECT(par_minor);
    Py_DECREF(par_minor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__4_create_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_datum_flags = python_pars[1];
    PyObject *par_clients = python_pars[2];
    PyObject *par_ranges = python_pars[3];
    PyObject *var_context = NULL;
    struct Nuitka_FrameObject *frame_491b34f9c6e3f8e3dd98ac7012de062a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_491b34f9c6e3f8e3dd98ac7012de062a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_491b34f9c6e3f8e3dd98ac7012de062a)) {
        Py_XDECREF(cache_frame_491b34f9c6e3f8e3dd98ac7012de062a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_491b34f9c6e3f8e3dd98ac7012de062a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_491b34f9c6e3f8e3dd98ac7012de062a = MAKE_FUNCTION_FRAME(codeobj_491b34f9c6e3f8e3dd98ac7012de062a, module_Xlib$ext$record, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_491b34f9c6e3f8e3dd98ac7012de062a->m_type_description == NULL);
    frame_491b34f9c6e3f8e3dd98ac7012de062a = cache_frame_491b34f9c6e3f8e3dd98ac7012de062a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_491b34f9c6e3f8e3dd98ac7012de062a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_491b34f9c6e3f8e3dd98ac7012de062a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_491b34f9c6e3f8e3dd98ac7012de062a->m_frame.f_lineno = 119;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_context == NULL);
        var_context = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_491b34f9c6e3f8e3dd98ac7012de062a->m_frame.f_lineno = 122;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_context);
        tmp_kw_call_value_2_1 = var_context;
        CHECK_OBJECT(par_datum_flags);
        tmp_kw_call_value_3_1 = par_datum_flags;
        CHECK_OBJECT(par_clients);
        tmp_kw_call_value_4_1 = par_clients;
        CHECK_OBJECT(par_ranges);
        tmp_kw_call_value_5_1 = par_ranges;
        frame_491b34f9c6e3f8e3dd98ac7012de062a->m_frame.f_lineno = 120;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_491b34f9c6e3f8e3dd98ac7012de062a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_491b34f9c6e3f8e3dd98ac7012de062a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_491b34f9c6e3f8e3dd98ac7012de062a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_491b34f9c6e3f8e3dd98ac7012de062a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_491b34f9c6e3f8e3dd98ac7012de062a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_491b34f9c6e3f8e3dd98ac7012de062a,
        type_description_1,
        par_self,
        par_datum_flags,
        par_clients,
        par_ranges,
        var_context
    );


    // Release cached frame if used for exception.
    if (frame_491b34f9c6e3f8e3dd98ac7012de062a == cache_frame_491b34f9c6e3f8e3dd98ac7012de062a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_491b34f9c6e3f8e3dd98ac7012de062a);
        cache_frame_491b34f9c6e3f8e3dd98ac7012de062a = NULL;
    }

    assertFrameObject(frame_491b34f9c6e3f8e3dd98ac7012de062a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_context);
    tmp_return_value = var_context;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_context);
    Py_DECREF(var_context);
    var_context = NULL;
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

    Py_XDECREF(var_context);
    var_context = NULL;
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
    CHECK_OBJECT(par_datum_flags);
    Py_DECREF(par_datum_flags);
    CHECK_OBJECT(par_clients);
    Py_DECREF(par_clients);
    CHECK_OBJECT(par_ranges);
    Py_DECREF(par_ranges);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_datum_flags);
    Py_DECREF(par_datum_flags);
    CHECK_OBJECT(par_clients);
    Py_DECREF(par_clients);
    CHECK_OBJECT(par_ranges);
    Py_DECREF(par_ranges);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__5_register_clients(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_context = python_pars[1];
    PyObject *par_element_header = python_pars[2];
    PyObject *par_clients = python_pars[3];
    PyObject *par_ranges = python_pars[4];
    struct Nuitka_FrameObject *frame_cb845449f1c34027bee728661d516943;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cb845449f1c34027bee728661d516943 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb845449f1c34027bee728661d516943)) {
        Py_XDECREF(cache_frame_cb845449f1c34027bee728661d516943);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb845449f1c34027bee728661d516943 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb845449f1c34027bee728661d516943 = MAKE_FUNCTION_FRAME(codeobj_cb845449f1c34027bee728661d516943, module_Xlib$ext$record, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cb845449f1c34027bee728661d516943->m_type_description == NULL);
    frame_cb845449f1c34027bee728661d516943 = cache_frame_cb845449f1c34027bee728661d516943;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cb845449f1c34027bee728661d516943);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cb845449f1c34027bee728661d516943) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_cb845449f1c34027bee728661d516943->m_frame.f_lineno = 146;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_context);
        tmp_kw_call_value_2_1 = par_context;
        CHECK_OBJECT(par_element_header);
        tmp_kw_call_value_3_1 = par_element_header;
        CHECK_OBJECT(par_clients);
        tmp_kw_call_value_4_1 = par_clients;
        CHECK_OBJECT(par_ranges);
        tmp_kw_call_value_5_1 = par_ranges;
        frame_cb845449f1c34027bee728661d516943->m_frame.f_lineno = 144;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb845449f1c34027bee728661d516943);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb845449f1c34027bee728661d516943);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb845449f1c34027bee728661d516943, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb845449f1c34027bee728661d516943->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb845449f1c34027bee728661d516943, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb845449f1c34027bee728661d516943,
        type_description_1,
        par_self,
        par_context,
        par_element_header,
        par_clients,
        par_ranges
    );


    // Release cached frame if used for exception.
    if (frame_cb845449f1c34027bee728661d516943 == cache_frame_cb845449f1c34027bee728661d516943) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cb845449f1c34027bee728661d516943);
        cache_frame_cb845449f1c34027bee728661d516943 = NULL;
    }

    assertFrameObject(frame_cb845449f1c34027bee728661d516943);

    // Put the previous frame back on top.
    popFrameStack();

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
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    CHECK_OBJECT(par_element_header);
    Py_DECREF(par_element_header);
    CHECK_OBJECT(par_clients);
    Py_DECREF(par_clients);
    CHECK_OBJECT(par_ranges);
    Py_DECREF(par_ranges);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    CHECK_OBJECT(par_element_header);
    Py_DECREF(par_element_header);
    CHECK_OBJECT(par_clients);
    Py_DECREF(par_clients);
    CHECK_OBJECT(par_ranges);
    Py_DECREF(par_ranges);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__6_unregister_clients(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_context = python_pars[1];
    PyObject *par_clients = python_pars[2];
    struct Nuitka_FrameObject *frame_303ab1f2c6676118dbadfce84286181e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_303ab1f2c6676118dbadfce84286181e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_303ab1f2c6676118dbadfce84286181e)) {
        Py_XDECREF(cache_frame_303ab1f2c6676118dbadfce84286181e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_303ab1f2c6676118dbadfce84286181e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_303ab1f2c6676118dbadfce84286181e = MAKE_FUNCTION_FRAME(codeobj_303ab1f2c6676118dbadfce84286181e, module_Xlib$ext$record, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_303ab1f2c6676118dbadfce84286181e->m_type_description == NULL);
    frame_303ab1f2c6676118dbadfce84286181e = cache_frame_303ab1f2c6676118dbadfce84286181e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_303ab1f2c6676118dbadfce84286181e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_303ab1f2c6676118dbadfce84286181e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_303ab1f2c6676118dbadfce84286181e->m_frame.f_lineno = 165;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_context);
        tmp_kw_call_value_2_1 = par_context;
        CHECK_OBJECT(par_clients);
        tmp_kw_call_value_3_1 = par_clients;
        frame_303ab1f2c6676118dbadfce84286181e->m_frame.f_lineno = 163;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_303ab1f2c6676118dbadfce84286181e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_303ab1f2c6676118dbadfce84286181e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_303ab1f2c6676118dbadfce84286181e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_303ab1f2c6676118dbadfce84286181e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_303ab1f2c6676118dbadfce84286181e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_303ab1f2c6676118dbadfce84286181e,
        type_description_1,
        par_self,
        par_context,
        par_clients
    );


    // Release cached frame if used for exception.
    if (frame_303ab1f2c6676118dbadfce84286181e == cache_frame_303ab1f2c6676118dbadfce84286181e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_303ab1f2c6676118dbadfce84286181e);
        cache_frame_303ab1f2c6676118dbadfce84286181e = NULL;
    }

    assertFrameObject(frame_303ab1f2c6676118dbadfce84286181e);

    // Put the previous frame back on top.
    popFrameStack();

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
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    CHECK_OBJECT(par_clients);
    Py_DECREF(par_clients);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    CHECK_OBJECT(par_clients);
    Py_DECREF(par_clients);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__7_get_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_context = python_pars[1];
    struct Nuitka_FrameObject *frame_78f281aae1423d028e16f2feedb93d6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_78f281aae1423d028e16f2feedb93d6c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_78f281aae1423d028e16f2feedb93d6c)) {
        Py_XDECREF(cache_frame_78f281aae1423d028e16f2feedb93d6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78f281aae1423d028e16f2feedb93d6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78f281aae1423d028e16f2feedb93d6c = MAKE_FUNCTION_FRAME(codeobj_78f281aae1423d028e16f2feedb93d6c, module_Xlib$ext$record, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_78f281aae1423d028e16f2feedb93d6c->m_type_description == NULL);
    frame_78f281aae1423d028e16f2feedb93d6c = cache_frame_78f281aae1423d028e16f2feedb93d6c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_78f281aae1423d028e16f2feedb93d6c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_78f281aae1423d028e16f2feedb93d6c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_78f281aae1423d028e16f2feedb93d6c->m_frame.f_lineno = 189;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_context);
        tmp_kw_call_value_2_1 = par_context;
        frame_78f281aae1423d028e16f2feedb93d6c->m_frame.f_lineno = 187;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_78f281aae1423d028e16f2feedb93d6c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_78f281aae1423d028e16f2feedb93d6c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_78f281aae1423d028e16f2feedb93d6c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78f281aae1423d028e16f2feedb93d6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78f281aae1423d028e16f2feedb93d6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78f281aae1423d028e16f2feedb93d6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78f281aae1423d028e16f2feedb93d6c,
        type_description_1,
        par_self,
        par_context
    );


    // Release cached frame if used for exception.
    if (frame_78f281aae1423d028e16f2feedb93d6c == cache_frame_78f281aae1423d028e16f2feedb93d6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_78f281aae1423d028e16f2feedb93d6c);
        cache_frame_78f281aae1423d028e16f2feedb93d6c = NULL;
    }

    assertFrameObject(frame_78f281aae1423d028e16f2feedb93d6c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_callback = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_keys = python_pars[3];
    struct Nuitka_FrameObject *frame_eb9fadd1b5a56f7f0bec3c43c896d34d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_eb9fadd1b5a56f7f0bec3c43c896d34d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb9fadd1b5a56f7f0bec3c43c896d34d)) {
        Py_XDECREF(cache_frame_eb9fadd1b5a56f7f0bec3c43c896d34d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb9fadd1b5a56f7f0bec3c43c896d34d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb9fadd1b5a56f7f0bec3c43c896d34d = MAKE_FUNCTION_FRAME(codeobj_eb9fadd1b5a56f7f0bec3c43c896d34d, module_Xlib$ext$record, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_eb9fadd1b5a56f7f0bec3c43c896d34d->m_type_description == NULL);
    frame_eb9fadd1b5a56f7f0bec3c43c896d34d = cache_frame_eb9fadd1b5a56f7f0bec3c43c896d34d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_eb9fadd1b5a56f7f0bec3c43c896d34d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_eb9fadd1b5a56f7f0bec3c43c896d34d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_callback);
        tmp_assattr_value_1 = par_callback;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_keys);
        tmp_dircall_arg4_1 = par_keys;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_call_result_1 = impl___main__$$$function__5_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eb9fadd1b5a56f7f0bec3c43c896d34d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eb9fadd1b5a56f7f0bec3c43c896d34d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eb9fadd1b5a56f7f0bec3c43c896d34d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb9fadd1b5a56f7f0bec3c43c896d34d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb9fadd1b5a56f7f0bec3c43c896d34d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb9fadd1b5a56f7f0bec3c43c896d34d,
        type_description_1,
        par_self,
        par_callback,
        par_args,
        par_keys
    );


    // Release cached frame if used for exception.
    if (frame_eb9fadd1b5a56f7f0bec3c43c896d34d == cache_frame_eb9fadd1b5a56f7f0bec3c43c896d34d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_eb9fadd1b5a56f7f0bec3c43c896d34d);
        cache_frame_eb9fadd1b5a56f7f0bec3c43c896d34d = NULL;
    }

    assertFrameObject(frame_eb9fadd1b5a56f7f0bec3c43c896d34d);

    // Put the previous frame back on top.
    popFrameStack();

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
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_keys);
    Py_DECREF(par_keys);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_keys);
    Py_DECREF(par_keys);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__9__parse_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_r = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5b55fe44564c9fc76acc3a1c807f90fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5b55fe44564c9fc76acc3a1c807f90fd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5b55fe44564c9fc76acc3a1c807f90fd)) {
        Py_XDECREF(cache_frame_5b55fe44564c9fc76acc3a1c807f90fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b55fe44564c9fc76acc3a1c807f90fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b55fe44564c9fc76acc3a1c807f90fd = MAKE_FUNCTION_FRAME(codeobj_5b55fe44564c9fc76acc3a1c807f90fd, module_Xlib$ext$record, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5b55fe44564c9fc76acc3a1c807f90fd->m_type_description == NULL);
    frame_5b55fe44564c9fc76acc3a1c807f90fd = cache_frame_5b55fe44564c9fc76acc3a1c807f90fd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5b55fe44564c9fc76acc3a1c807f90fd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5b55fe44564c9fc76acc3a1c807f90fd) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[20]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 223;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_5b55fe44564c9fc76acc3a1c807f90fd->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 223;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 223;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooo";
                    exception_lineno = 223;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[21];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 223;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_r == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_r = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_d == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_d = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_r);
        tmp_args_element_value_3 = var_r;
        frame_5b55fe44564c9fc76acc3a1c807f90fd->m_frame.f_lineno = 224;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[14], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_r);
        tmp_expression_value_4 = var_r;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[22]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_r);
        tmp_expression_value_5 = var_r;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[24]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_r);
        tmp_expression_value_6 = var_r;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[22]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[26]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5b55fe44564c9fc76acc3a1c807f90fd->m_frame.f_lineno = 232;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[27]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_r);
        tmp_assattr_value_2 = var_r;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[28], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[26]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5b55fe44564c9fc76acc3a1c807f90fd->m_frame.f_lineno = 234;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[29]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[20]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[30]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[32];
        CHECK_OBJECT(par_self);
        tmp_args_element_value_5 = par_self;
        frame_5b55fe44564c9fc76acc3a1c807f90fd->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[31],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b55fe44564c9fc76acc3a1c807f90fd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b55fe44564c9fc76acc3a1c807f90fd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b55fe44564c9fc76acc3a1c807f90fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b55fe44564c9fc76acc3a1c807f90fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b55fe44564c9fc76acc3a1c807f90fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b55fe44564c9fc76acc3a1c807f90fd,
        type_description_1,
        par_self,
        par_data,
        var_r,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_5b55fe44564c9fc76acc3a1c807f90fd == cache_frame_5b55fe44564c9fc76acc3a1c807f90fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5b55fe44564c9fc76acc3a1c807f90fd);
        cache_frame_5b55fe44564c9fc76acc3a1c807f90fd = NULL;
    }

    assertFrameObject(frame_5b55fe44564c9fc76acc3a1c807f90fd);

    // Put the previous frame back on top.
    popFrameStack();

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
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
    CHECK_OBJECT(var_d);
    Py_DECREF(var_d);
    var_d = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_d);
    var_d = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__10_enable_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_context = python_pars[1];
    PyObject *par_callback = python_pars[2];
    struct Nuitka_FrameObject *frame_c24aa02c3807120aab2ed3cbeabdbf44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c24aa02c3807120aab2ed3cbeabdbf44 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c24aa02c3807120aab2ed3cbeabdbf44)) {
        Py_XDECREF(cache_frame_c24aa02c3807120aab2ed3cbeabdbf44);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c24aa02c3807120aab2ed3cbeabdbf44 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c24aa02c3807120aab2ed3cbeabdbf44 = MAKE_FUNCTION_FRAME(codeobj_c24aa02c3807120aab2ed3cbeabdbf44, module_Xlib$ext$record, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c24aa02c3807120aab2ed3cbeabdbf44->m_type_description == NULL);
    frame_c24aa02c3807120aab2ed3cbeabdbf44 = cache_frame_c24aa02c3807120aab2ed3cbeabdbf44;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c24aa02c3807120aab2ed3cbeabdbf44);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c24aa02c3807120aab2ed3cbeabdbf44) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_callback);
        tmp_kw_call_value_0_1 = par_callback;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c24aa02c3807120aab2ed3cbeabdbf44->m_frame.f_lineno = 242;
        tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_context);
        tmp_kw_call_value_3_1 = par_context;
        frame_c24aa02c3807120aab2ed3cbeabdbf44->m_frame.f_lineno = 239;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c24aa02c3807120aab2ed3cbeabdbf44);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c24aa02c3807120aab2ed3cbeabdbf44);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c24aa02c3807120aab2ed3cbeabdbf44, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c24aa02c3807120aab2ed3cbeabdbf44->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c24aa02c3807120aab2ed3cbeabdbf44, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c24aa02c3807120aab2ed3cbeabdbf44,
        type_description_1,
        par_self,
        par_context,
        par_callback
    );


    // Release cached frame if used for exception.
    if (frame_c24aa02c3807120aab2ed3cbeabdbf44 == cache_frame_c24aa02c3807120aab2ed3cbeabdbf44) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c24aa02c3807120aab2ed3cbeabdbf44);
        cache_frame_c24aa02c3807120aab2ed3cbeabdbf44 = NULL;
    }

    assertFrameObject(frame_c24aa02c3807120aab2ed3cbeabdbf44);

    // Put the previous frame back on top.
    popFrameStack();

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
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__11_disable_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_context = python_pars[1];
    struct Nuitka_FrameObject *frame_a6aca7c3f5cb25d1576c2e8edd4966c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a6aca7c3f5cb25d1576c2e8edd4966c5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a6aca7c3f5cb25d1576c2e8edd4966c5)) {
        Py_XDECREF(cache_frame_a6aca7c3f5cb25d1576c2e8edd4966c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a6aca7c3f5cb25d1576c2e8edd4966c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a6aca7c3f5cb25d1576c2e8edd4966c5 = MAKE_FUNCTION_FRAME(codeobj_a6aca7c3f5cb25d1576c2e8edd4966c5, module_Xlib$ext$record, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a6aca7c3f5cb25d1576c2e8edd4966c5->m_type_description == NULL);
    frame_a6aca7c3f5cb25d1576c2e8edd4966c5 = cache_frame_a6aca7c3f5cb25d1576c2e8edd4966c5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a6aca7c3f5cb25d1576c2e8edd4966c5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a6aca7c3f5cb25d1576c2e8edd4966c5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 256;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 256;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 256;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a6aca7c3f5cb25d1576c2e8edd4966c5->m_frame.f_lineno = 256;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 256;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_context);
        tmp_kw_call_value_2_1 = par_context;
        frame_a6aca7c3f5cb25d1576c2e8edd4966c5->m_frame.f_lineno = 254;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a6aca7c3f5cb25d1576c2e8edd4966c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a6aca7c3f5cb25d1576c2e8edd4966c5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a6aca7c3f5cb25d1576c2e8edd4966c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a6aca7c3f5cb25d1576c2e8edd4966c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a6aca7c3f5cb25d1576c2e8edd4966c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a6aca7c3f5cb25d1576c2e8edd4966c5,
        type_description_1,
        par_self,
        par_context
    );


    // Release cached frame if used for exception.
    if (frame_a6aca7c3f5cb25d1576c2e8edd4966c5 == cache_frame_a6aca7c3f5cb25d1576c2e8edd4966c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a6aca7c3f5cb25d1576c2e8edd4966c5);
        cache_frame_a6aca7c3f5cb25d1576c2e8edd4966c5 = NULL;
    }

    assertFrameObject(frame_a6aca7c3f5cb25d1576c2e8edd4966c5);

    // Put the previous frame back on top.
    popFrameStack();

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
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__12_free_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_context = python_pars[1];
    struct Nuitka_FrameObject *frame_a98a513fe7a12033c9e3e25ed0c7f12b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a98a513fe7a12033c9e3e25ed0c7f12b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a98a513fe7a12033c9e3e25ed0c7f12b)) {
        Py_XDECREF(cache_frame_a98a513fe7a12033c9e3e25ed0c7f12b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a98a513fe7a12033c9e3e25ed0c7f12b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a98a513fe7a12033c9e3e25ed0c7f12b = MAKE_FUNCTION_FRAME(codeobj_a98a513fe7a12033c9e3e25ed0c7f12b, module_Xlib$ext$record, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a98a513fe7a12033c9e3e25ed0c7f12b->m_type_description == NULL);
    frame_a98a513fe7a12033c9e3e25ed0c7f12b = cache_frame_a98a513fe7a12033c9e3e25ed0c7f12b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a98a513fe7a12033c9e3e25ed0c7f12b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a98a513fe7a12033c9e3e25ed0c7f12b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a98a513fe7a12033c9e3e25ed0c7f12b->m_frame.f_lineno = 270;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_context);
        tmp_kw_call_value_2_1 = par_context;
        frame_a98a513fe7a12033c9e3e25ed0c7f12b->m_frame.f_lineno = 268;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_context);
        tmp_args_element_value_2 = par_context;
        frame_a98a513fe7a12033c9e3e25ed0c7f12b->m_frame.f_lineno = 272;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[37], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a98a513fe7a12033c9e3e25ed0c7f12b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a98a513fe7a12033c9e3e25ed0c7f12b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a98a513fe7a12033c9e3e25ed0c7f12b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a98a513fe7a12033c9e3e25ed0c7f12b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a98a513fe7a12033c9e3e25ed0c7f12b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a98a513fe7a12033c9e3e25ed0c7f12b,
        type_description_1,
        par_self,
        par_context
    );


    // Release cached frame if used for exception.
    if (frame_a98a513fe7a12033c9e3e25ed0c7f12b == cache_frame_a98a513fe7a12033c9e3e25ed0c7f12b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a98a513fe7a12033c9e3e25ed0c7f12b);
        cache_frame_a98a513fe7a12033c9e3e25ed0c7f12b = NULL;
    }

    assertFrameObject(frame_a98a513fe7a12033c9e3e25ed0c7f12b);

    // Put the previous frame back on top.
    popFrameStack();

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
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Xlib$ext$record$$$function__13_init(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_disp = python_pars[0];
    PyObject *par_info = python_pars[1];
    struct Nuitka_FrameObject *frame_dac0ffd3ba5394c45401a66d3b076c09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dac0ffd3ba5394c45401a66d3b076c09 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dac0ffd3ba5394c45401a66d3b076c09)) {
        Py_XDECREF(cache_frame_dac0ffd3ba5394c45401a66d3b076c09);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dac0ffd3ba5394c45401a66d3b076c09 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dac0ffd3ba5394c45401a66d3b076c09 = MAKE_FUNCTION_FRAME(codeobj_dac0ffd3ba5394c45401a66d3b076c09, module_Xlib$ext$record, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dac0ffd3ba5394c45401a66d3b076c09->m_type_description == NULL);
    frame_dac0ffd3ba5394c45401a66d3b076c09 = cache_frame_dac0ffd3ba5394c45401a66d3b076c09;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dac0ffd3ba5394c45401a66d3b076c09);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dac0ffd3ba5394c45401a66d3b076c09) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_1 = par_disp;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[2];
        tmp_args_element_value_2 = mod_consts[39];
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dac0ffd3ba5394c45401a66d3b076c09->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_2 = par_disp;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[38]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[2];
        tmp_args_element_value_5 = mod_consts[41];
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 277;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dac0ffd3ba5394c45401a66d3b076c09->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_3 = par_disp;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[38]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[2];
        tmp_args_element_value_8 = mod_consts[43];
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dac0ffd3ba5394c45401a66d3b076c09->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_4 = par_disp;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[38]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[2];
        tmp_args_element_value_11 = mod_consts[45];
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dac0ffd3ba5394c45401a66d3b076c09->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_5 = par_disp;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[38]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[2];
        tmp_args_element_value_14 = mod_consts[47];
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dac0ffd3ba5394c45401a66d3b076c09->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_6 = par_disp;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[38]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[2];
        tmp_args_element_value_17 = mod_consts[49];
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dac0ffd3ba5394c45401a66d3b076c09->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_7 = par_disp;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[38]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[2];
        tmp_args_element_value_20 = mod_consts[51];
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dac0ffd3ba5394c45401a66d3b076c09->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(par_disp);
        tmp_expression_value_8 = par_disp;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[38]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[2];
        tmp_args_element_value_23 = mod_consts[53];
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dac0ffd3ba5394c45401a66d3b076c09->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dac0ffd3ba5394c45401a66d3b076c09);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dac0ffd3ba5394c45401a66d3b076c09);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dac0ffd3ba5394c45401a66d3b076c09, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dac0ffd3ba5394c45401a66d3b076c09->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dac0ffd3ba5394c45401a66d3b076c09, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dac0ffd3ba5394c45401a66d3b076c09,
        type_description_1,
        par_disp,
        par_info
    );


    // Release cached frame if used for exception.
    if (frame_dac0ffd3ba5394c45401a66d3b076c09 == cache_frame_dac0ffd3ba5394c45401a66d3b076c09) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dac0ffd3ba5394c45401a66d3b076c09);
        cache_frame_dac0ffd3ba5394c45401a66d3b076c09 = NULL;
    }

    assertFrameObject(frame_dac0ffd3ba5394c45401a66d3b076c09);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_disp);
    Py_DECREF(par_disp);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__10_enable_context() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__10_enable_context,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c24aa02c3807120aab2ed3cbeabdbf44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__11_disable_context() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__11_disable_context,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a6aca7c3f5cb25d1576c2e8edd4966c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__12_free_context() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__12_free_context,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a98a513fe7a12033c9e3e25ed0c7f12b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__13_init() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__13_init,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dac0ffd3ba5394c45401a66d3b076c09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__1_pack_value() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__1_pack_value,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_714414dae13e8eb76c8fea46948f3639,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__2_parse_binary_value() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__2_parse_binary_value,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_fff189116be5b1121a578d646b36ee13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__3_get_version() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__3_get_version,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_214d93b87b40d5c979c792579103e54b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__4_create_context() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__4_create_context,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_491b34f9c6e3f8e3dd98ac7012de062a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__5_register_clients() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__5_register_clients,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cb845449f1c34027bee728661d516943,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__6_unregister_clients() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__6_unregister_clients,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_303ab1f2c6676118dbadfce84286181e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__7_get_context() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__7_get_context,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_78f281aae1423d028e16f2feedb93d6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__8___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__8___init__,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_eb9fadd1b5a56f7f0bec3c43c896d34d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Xlib$ext$record$$$function__9__parse_response() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Xlib$ext$record$$$function__9__parse_response,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_5b55fe44564c9fc76acc3a1c807f90fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Xlib$ext$record,
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
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_Xlib$ext$record[] = {
    impl_Xlib$ext$record$$$function__1_pack_value,
    impl_Xlib$ext$record$$$function__2_parse_binary_value,
    impl_Xlib$ext$record$$$function__3_get_version,
    impl_Xlib$ext$record$$$function__4_create_context,
    impl_Xlib$ext$record$$$function__5_register_clients,
    impl_Xlib$ext$record$$$function__6_unregister_clients,
    impl_Xlib$ext$record$$$function__7_get_context,
    impl_Xlib$ext$record$$$function__8___init__,
    impl_Xlib$ext$record$$$function__9__parse_response,
    impl_Xlib$ext$record$$$function__10_enable_context,
    impl_Xlib$ext$record$$$function__11_disable_context,
    impl_Xlib$ext$record$$$function__12_free_context,
    impl_Xlib$ext$record$$$function__13_init,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_Xlib$ext$record;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_Xlib$ext$record) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_Xlib$ext$record[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_Xlib$ext$record,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_Xlib$ext$record(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Xlib.ext.record");

    // Store the module for future use.
    module_Xlib$ext$record = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

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
        PRINT_STRING("Xlib.ext.record: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.ext.record: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Xlib.ext.record: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initXlib$ext$record\n");

    moduledict_Xlib$ext$record = MODULE_DICT(module_Xlib$ext$record);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Xlib$ext$record,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Xlib$ext$record,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[0]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Xlib$ext$record,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$ext$record,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Xlib$ext$record,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Xlib$ext$record);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Xlib$ext$record);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
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
    struct Nuitka_FrameObject *frame_706066665577635d1dcb44c5688a374d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_Xlib$ext$record$$$class__1_RawField_70 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_1d8d0b62c8a4201cd206fe10edb03bb2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_1d8d0b62c8a4201cd206fe10edb03bb2_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_Xlib$ext$record$$$class__2_GetVersion_82 = NULL;
    struct Nuitka_FrameObject *frame_dee88f47afe5e15bc49677eb9ebfcc41_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_dee88f47afe5e15bc49677eb9ebfcc41_3 = NULL;
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
    PyObject *locals_Xlib$ext$record$$$class__3_CreateContext_105 = NULL;
    struct Nuitka_FrameObject *frame_d2e5eeec50356a3f98a66f4957753e1b_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d2e5eeec50356a3f98a66f4957753e1b_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_Xlib$ext$record$$$class__4_RegisterClients_130 = NULL;
    struct Nuitka_FrameObject *frame_0996cfbe33ab663bf286b1f5ca7778f5_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0996cfbe33ab663bf286b1f5ca7778f5_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_Xlib$ext$record$$$class__5_UnregisterClients_153 = NULL;
    struct Nuitka_FrameObject *frame_eef067f9a980c7ea4b19bdd852feed55_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_eef067f9a980c7ea4b19bdd852feed55_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_Xlib$ext$record$$$class__6_GetContext_170 = NULL;
    struct Nuitka_FrameObject *frame_c9ec79e355fe9c572d73eb9d886b4bcd_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c9ec79e355fe9c572d73eb9d886b4bcd_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_Xlib$ext$record$$$class__7_EnableContext_193 = NULL;
    struct Nuitka_FrameObject *frame_e7d109869c580c973c02c71112716569_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e7d109869c580c973c02c71112716569_8 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_Xlib$ext$record$$$class__8_DisableContext_246 = NULL;
    struct Nuitka_FrameObject *frame_a5626468756bfb8a74931d92392aae5b_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a5626468756bfb8a74931d92392aae5b_9 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_Xlib$ext$record$$$class__9_FreeContext_260 = NULL;
    struct Nuitka_FrameObject *frame_b86b0ee285c73436bd27f178aa0385d1_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_b86b0ee285c73436bd27f178aa0385d1_10 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_706066665577635d1dcb44c5688a374d = MAKE_MODULE_FRAME(codeobj_706066665577635d1dcb44c5688a374d, module_Xlib$ext$record);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_706066665577635d1dcb44c5688a374d);
    assert(Py_REFCNT(frame_706066665577635d1dcb44c5688a374d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[58], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[59], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[61];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_Xlib$ext$record;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[62];
        tmp_level_value_1 = mod_consts[32];
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_Xlib$ext$record,
                mod_consts[63],
                mod_consts[32]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[64];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_Xlib$ext$record;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[65];
        tmp_level_value_2 = mod_consts[32];
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 23;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_Xlib$ext$record,
                mod_consts[15],
                mod_consts[32]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 43;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[83],
            PyTuple_GET_ITEM(mod_consts[84], 0)
        );

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 44;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[83],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[82]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 46;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[87],
            PyTuple_GET_ITEM(mod_consts[84], 0)
        );

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 47;
        tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[87],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_8;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[82]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 49;
        tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[83],
            PyTuple_GET_ITEM(mod_consts[89], 0)
        );

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 50;
        tmp_args_element_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[83],
            PyTuple_GET_ITEM(mod_consts[90], 0)
        );

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 51;
        tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[87],
            PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 52;
        tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[87],
            PyTuple_GET_ITEM(mod_consts[92], 0)
        );

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_instance_10;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[82]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[94]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[95];
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_args_element_value_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[94]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[96];
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[94]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[97];
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_args_element_value_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[94]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[98];
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_args_element_value_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[94]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[99];
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_args_element_value_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[94]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[100];
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_args_element_value_24 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[94]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = mod_consts[101];
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_args_element_value_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 61;
        tmp_args_element_value_30 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[102],
            PyTuple_GET_ITEM(mod_consts[103], 0)
        );

        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_27);

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 62;
        tmp_args_element_value_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[102],
            PyTuple_GET_ITEM(mod_consts[104], 0)
        );

        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_12, tmp_args_element_value_15, tmp_args_element_value_18, tmp_args_element_value_21, tmp_args_element_value_24, tmp_args_element_value_27, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[82]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 65;
        tmp_args_element_value_32 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[106],
            PyTuple_GET_ITEM(mod_consts[107], 0)
        );

        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 66;
        tmp_args_element_value_33 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_12,
            mod_consts[108],
            &PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[110]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = mod_consts[111];
        tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_args_element_value_36 == NULL)) {
            tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_args_element_value_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_33);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_23);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[113]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        tmp_assign_source_24 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_24, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_25 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[114];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_15 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[32];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_27 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[114];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 70;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_16 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[115]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_17 = tmp_class_creation_1__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[115]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[116];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 70;
        tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_18 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_18, mod_consts[117]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[118];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[119];
        tmp_getattr_default_1 = mod_consts[120];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[119]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 70;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_Xlib$ext$record$$$class__1_RawField_70 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__1_RawField_70, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__1_RawField_70, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__1_RawField_70, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_1d8d0b62c8a4201cd206fe10edb03bb2_2)) {
            Py_XDECREF(cache_frame_1d8d0b62c8a4201cd206fe10edb03bb2_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1d8d0b62c8a4201cd206fe10edb03bb2_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1d8d0b62c8a4201cd206fe10edb03bb2_2 = MAKE_FUNCTION_FRAME(codeobj_1d8d0b62c8a4201cd206fe10edb03bb2, module_Xlib$ext$record, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_1d8d0b62c8a4201cd206fe10edb03bb2_2->m_type_description == NULL);
        frame_1d8d0b62c8a4201cd206fe10edb03bb2_2 = cache_frame_1d8d0b62c8a4201cd206fe10edb03bb2_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1d8d0b62c8a4201cd206fe10edb03bb2_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1d8d0b62c8a4201cd206fe10edb03bb2_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__1_RawField_70, mod_consts[125], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Xlib$ext$record$$$function__1_pack_value();

        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__1_RawField_70, mod_consts[126], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Xlib$ext$record$$$function__2_parse_binary_value();

        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__1_RawField_70, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1d8d0b62c8a4201cd206fe10edb03bb2_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1d8d0b62c8a4201cd206fe10edb03bb2_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1d8d0b62c8a4201cd206fe10edb03bb2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1d8d0b62c8a4201cd206fe10edb03bb2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1d8d0b62c8a4201cd206fe10edb03bb2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1d8d0b62c8a4201cd206fe10edb03bb2_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_1d8d0b62c8a4201cd206fe10edb03bb2_2 == cache_frame_1d8d0b62c8a4201cd206fe10edb03bb2_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_1d8d0b62c8a4201cd206fe10edb03bb2_2);
            cache_frame_1d8d0b62c8a4201cd206fe10edb03bb2_2 = NULL;
        }

        assertFrameObject(frame_1d8d0b62c8a4201cd206fe10edb03bb2_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__1_RawField_70, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_15 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[116];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_Xlib$ext$record$$$class__1_RawField_70;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 70;
            tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_30 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_Xlib$ext$record$$$class__1_RawField_70);
        locals_Xlib$ext$record$$$class__1_RawField_70 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$record$$$class__1_RawField_70);
        locals_Xlib$ext$record$$$class__1_RawField_70 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 70;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_30);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[16]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_assign_source_32 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_32, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_33 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[114];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_21 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[32];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_35 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[114];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 82;

        goto try_except_handler_4;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_22 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[115]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_23 = tmp_class_creation_2__metaclass;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[115]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_tuple_element_6 = mod_consts[1];
        tmp_args_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 82;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_24 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[117]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[118];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[119];
        tmp_getattr_default_2 = mod_consts[120];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[119]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 82;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_37;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_Xlib$ext$record$$$class__2_GetVersion_82 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[1];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_dee88f47afe5e15bc49677eb9ebfcc41_3)) {
            Py_XDECREF(cache_frame_dee88f47afe5e15bc49677eb9ebfcc41_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_dee88f47afe5e15bc49677eb9ebfcc41_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_dee88f47afe5e15bc49677eb9ebfcc41_3 = MAKE_FUNCTION_FRAME(codeobj_dee88f47afe5e15bc49677eb9ebfcc41, module_Xlib$ext$record, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_type_description == NULL);
        frame_dee88f47afe5e15bc49677eb9ebfcc41_3 = cache_frame_dee88f47afe5e15bc49677eb9ebfcc41_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_dee88f47afe5e15bc49677eb9ebfcc41_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_dee88f47afe5e15bc49677eb9ebfcc41_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_called_instance_17;
            tmp_expression_value_26 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 83;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[82]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_13 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_13 == NULL)) {
                        tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 84;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 84;
            tmp_args_element_value_37 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_13,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[131], 0)
            );

            Py_DECREF(tmp_called_instance_13);
            if (tmp_args_element_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_14 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_14 == NULL)) {
                        tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);
                        Py_DECREF(tmp_args_element_value_37);

                        exception_lineno = 85;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 85;
            tmp_args_element_value_38 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_14,
                mod_consts[132],
                PyTuple_GET_ITEM(mod_consts[133], 0)
            );

            Py_DECREF(tmp_called_instance_14);
            if (tmp_args_element_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_37);

                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_15 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_15 == NULL)) {
                        tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);
                        Py_DECREF(tmp_args_element_value_37);
                        Py_DECREF(tmp_args_element_value_38);

                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 86;
            tmp_args_element_value_39 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[134]);
            Py_DECREF(tmp_called_instance_15);
            if (tmp_args_element_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_38);

                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_16 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_16 == NULL)) {
                        tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);
                        Py_DECREF(tmp_args_element_value_37);
                        Py_DECREF(tmp_args_element_value_38);
                        Py_DECREF(tmp_args_element_value_39);

                        exception_lineno = 87;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 87;
            tmp_args_element_value_40 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_16,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[135], 0)
            );

            Py_DECREF(tmp_called_instance_16);
            if (tmp_args_element_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_38);
                Py_DECREF(tmp_args_element_value_39);

                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_17 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_17 == NULL)) {
                        tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);
                        Py_DECREF(tmp_args_element_value_37);
                        Py_DECREF(tmp_args_element_value_38);
                        Py_DECREF(tmp_args_element_value_39);
                        Py_DECREF(tmp_args_element_value_40);

                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_17);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 88;
            tmp_args_element_value_41 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_17,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[136], 0)
            );

            Py_DECREF(tmp_called_instance_17);
            if (tmp_args_element_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_38);
                Py_DECREF(tmp_args_element_value_39);
                Py_DECREF(tmp_args_element_value_40);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 83;
            {
                PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_17, call_args);
            }

            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_called_instance_18;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_called_instance_19;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_called_instance_20;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_called_instance_21;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_called_instance_22;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_called_instance_23;
            tmp_expression_value_27 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 89;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[82]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_18 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_18 == NULL)) {
                        tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_18);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 90;
            tmp_args_element_value_42 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_18,
                mod_consts[138],
                PyTuple_GET_ITEM(mod_consts[139], 0)
            );

            Py_DECREF(tmp_called_instance_18);
            if (tmp_args_element_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_19 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_19 == NULL)) {
                        tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_args_element_value_42);

                        exception_lineno = 91;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_19);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 91;
            tmp_args_element_value_43 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_19,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[140], 0)
            );

            Py_DECREF(tmp_called_instance_19);
            if (tmp_args_element_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);
                Py_DECREF(tmp_args_element_value_42);

                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_20 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_20 == NULL)) {
                        tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);

                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_20);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 92;
            tmp_args_element_value_44 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, mod_consts[141]);
            Py_DECREF(tmp_called_instance_20);
            if (tmp_args_element_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_21 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_21 == NULL)) {
                        tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);

                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_21);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 93;
            tmp_args_element_value_45 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_21,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[135], 0)
            );

            Py_DECREF(tmp_called_instance_21);
            if (tmp_args_element_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);

                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_22 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_22 == NULL)) {
                        tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);

                        exception_lineno = 94;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_22);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 94;
            tmp_args_element_value_46 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_22,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[136], 0)
            );

            Py_DECREF(tmp_called_instance_22);
            if (tmp_args_element_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);

                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_instance_23 = PyObject_GetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[15]);

            if (tmp_called_instance_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_23 == NULL)) {
                        tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_args_element_value_42);
                        Py_DECREF(tmp_args_element_value_43);
                        Py_DECREF(tmp_args_element_value_44);
                        Py_DECREF(tmp_args_element_value_45);
                        Py_DECREF(tmp_args_element_value_46);

                        exception_lineno = 95;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_23);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 95;
            tmp_args_element_value_47 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_23,
                mod_consts[138],
                PyTuple_GET_ITEM(mod_consts[142], 0)
            );

            Py_DECREF(tmp_called_instance_23);
            if (tmp_args_element_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_46);

                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame.f_lineno = 89;
            {
                PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_18, call_args);
            }

            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_45);
            Py_DECREF(tmp_args_element_value_46);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dee88f47afe5e15bc49677eb9ebfcc41_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dee88f47afe5e15bc49677eb9ebfcc41_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dee88f47afe5e15bc49677eb9ebfcc41_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dee88f47afe5e15bc49677eb9ebfcc41_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dee88f47afe5e15bc49677eb9ebfcc41_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dee88f47afe5e15bc49677eb9ebfcc41_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_dee88f47afe5e15bc49677eb9ebfcc41_3 == cache_frame_dee88f47afe5e15bc49677eb9ebfcc41_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_dee88f47afe5e15bc49677eb9ebfcc41_3);
            cache_frame_dee88f47afe5e15bc49677eb9ebfcc41_3 = NULL;
        }

        assertFrameObject(frame_dee88f47afe5e15bc49677eb9ebfcc41_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__2_GetVersion_82, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_6;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_19 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[1];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_Xlib$ext$record$$$class__2_GetVersion_82;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 82;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_38 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_Xlib$ext$record$$$class__2_GetVersion_82);
        locals_Xlib$ext$record$$$class__2_GetVersion_82 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$record$$$class__2_GetVersion_82);
        locals_Xlib$ext$record$$$class__2_GetVersion_82 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 82;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_38);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
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
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_Xlib$ext$record$$$function__3_get_version();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_40);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_28;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[143]);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        tmp_assign_source_41 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_41, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_42 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_13;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[114];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        Py_INCREF(tmp_metaclass_value_3);
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_29 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[32];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_29, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[114];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 105;

        goto try_except_handler_7;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_30 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_30, mod_consts[115]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_31 = tmp_class_creation_3__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[115]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        tmp_tuple_element_10 = mod_consts[7];
        tmp_args_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 105;
        tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_32 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_32, mod_consts[117]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[118];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[119];
        tmp_getattr_default_3 = mod_consts[120];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_33;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_33 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[119]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 105;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_46;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_Xlib$ext$record$$$class__3_CreateContext_105 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[7];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_d2e5eeec50356a3f98a66f4957753e1b_4)) {
            Py_XDECREF(cache_frame_d2e5eeec50356a3f98a66f4957753e1b_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d2e5eeec50356a3f98a66f4957753e1b_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d2e5eeec50356a3f98a66f4957753e1b_4 = MAKE_FUNCTION_FRAME(codeobj_d2e5eeec50356a3f98a66f4957753e1b, module_Xlib$ext$record, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_type_description == NULL);
        frame_d2e5eeec50356a3f98a66f4957753e1b_4 = cache_frame_d2e5eeec50356a3f98a66f4957753e1b_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d2e5eeec50356a3f98a66f4957753e1b_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d2e5eeec50356a3f98a66f4957753e1b_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_called_instance_24;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_called_instance_25;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_called_instance_26;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_called_instance_27;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_called_instance_28;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_called_instance_29;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_called_instance_30;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_called_instance_31;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_args_element_value_58;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_args_element_value_61;
            tmp_expression_value_34 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_expression_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 106;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_34);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[82]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_24 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_called_instance_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_24 == NULL)) {
                        tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);

                        exception_lineno = 107;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_24);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 107;
            tmp_args_element_value_48 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_24,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[131], 0)
            );

            Py_DECREF(tmp_called_instance_24);
            if (tmp_args_element_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_25 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_called_instance_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_25 == NULL)) {
                        tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);

                        exception_lineno = 108;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_25);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 108;
            tmp_args_element_value_49 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_25,
                mod_consts[132],
                PyTuple_GET_ITEM(mod_consts[144], 0)
            );

            Py_DECREF(tmp_called_instance_25);
            if (tmp_args_element_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);

                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_26 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_called_instance_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_26 == NULL)) {
                        tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);

                        exception_lineno = 109;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_26);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 109;
            tmp_args_element_value_50 = CALL_METHOD_NO_ARGS(tmp_called_instance_26, mod_consts[134]);
            Py_DECREF(tmp_called_instance_26);
            if (tmp_args_element_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);

                exception_lineno = 109;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_27 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_called_instance_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_27 == NULL)) {
                        tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);

                        exception_lineno = 110;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_27);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 110;
            tmp_args_element_value_51 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_27,
                mod_consts[106],
                PyTuple_GET_ITEM(mod_consts[145], 0)
            );

            Py_DECREF(tmp_called_instance_27);
            if (tmp_args_element_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);

                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_28 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_called_instance_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_28 == NULL)) {
                        tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);
                        Py_DECREF(tmp_args_element_value_51);

                        exception_lineno = 111;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_28);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 111;
            tmp_args_element_value_52 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_28,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[146], 0)
            );

            Py_DECREF(tmp_called_instance_28);
            if (tmp_args_element_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);

                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_29 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_called_instance_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_29 == NULL)) {
                        tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);

                        exception_lineno = 112;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_29);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 112;
            tmp_args_element_value_53 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_29,
                mod_consts[138],
                PyTuple_GET_ITEM(mod_consts[147], 0)
            );

            Py_DECREF(tmp_called_instance_29);
            if (tmp_args_element_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);

                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_30 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_called_instance_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_30 == NULL)) {
                        tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);
                        Py_DECREF(tmp_args_element_value_53);

                        exception_lineno = 113;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_30);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 113;
            tmp_args_element_value_54 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_30,
                mod_consts[108],
                &PyTuple_GET_ITEM(mod_consts[148], 0)
            );

            Py_DECREF(tmp_called_instance_30);
            if (tmp_args_element_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);

                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_instance_31 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_called_instance_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_31 == NULL)) {
                        tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);

                        exception_lineno = 114;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_31);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 114;
            tmp_args_element_value_55 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_31,
                mod_consts[108],
                &PyTuple_GET_ITEM(mod_consts[109], 0)
            );

            Py_DECREF(tmp_called_instance_31);
            if (tmp_args_element_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);

                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_expression_value_35 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);
                        Py_DECREF(tmp_args_element_value_55);

                        exception_lineno = 115;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[110]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);

                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_args_element_value_57 = mod_consts[149];
            tmp_expression_value_36 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_expression_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);
                        Py_DECREF(tmp_args_element_value_55);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 115;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_36);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[150]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_args_element_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 115;
            {
                PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
                tmp_args_element_value_56 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_22, call_args);
            }

            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_58);
            if (tmp_args_element_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);

                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_expression_value_37 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[15]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);
                        Py_DECREF(tmp_args_element_value_55);
                        Py_DECREF(tmp_args_element_value_56);

                        exception_lineno = 116;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[110]);
            Py_DECREF(tmp_expression_value_37);
            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_56);

                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_args_element_value_60 = mod_consts[111];
            tmp_args_element_value_61 = PyObject_GetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[105]);

            if (tmp_args_element_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[105]);

                    if (unlikely(tmp_args_element_value_61 == NULL)) {
                        tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
                    }

                    if (tmp_args_element_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);
                        Py_DECREF(tmp_args_element_value_48);
                        Py_DECREF(tmp_args_element_value_49);
                        Py_DECREF(tmp_args_element_value_50);
                        Py_DECREF(tmp_args_element_value_51);
                        Py_DECREF(tmp_args_element_value_52);
                        Py_DECREF(tmp_args_element_value_53);
                        Py_DECREF(tmp_args_element_value_54);
                        Py_DECREF(tmp_args_element_value_55);
                        Py_DECREF(tmp_args_element_value_56);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 116;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_args_element_value_61);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
                tmp_args_element_value_59 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
            }

            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_61);
            if (tmp_args_element_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_56);

                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame.f_lineno = 106;
            {
                PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_59};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS10(tmp_called_value_21, call_args);
            }

            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_55);
            Py_DECREF(tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_59);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d2e5eeec50356a3f98a66f4957753e1b_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d2e5eeec50356a3f98a66f4957753e1b_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d2e5eeec50356a3f98a66f4957753e1b_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d2e5eeec50356a3f98a66f4957753e1b_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d2e5eeec50356a3f98a66f4957753e1b_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d2e5eeec50356a3f98a66f4957753e1b_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d2e5eeec50356a3f98a66f4957753e1b_4 == cache_frame_d2e5eeec50356a3f98a66f4957753e1b_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d2e5eeec50356a3f98a66f4957753e1b_4);
            cache_frame_d2e5eeec50356a3f98a66f4957753e1b_4 = NULL;
        }

        assertFrameObject(frame_d2e5eeec50356a3f98a66f4957753e1b_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__3_CreateContext_105, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_9;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_24 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[7];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_Xlib$ext$record$$$class__3_CreateContext_105;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 105;
            tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_47 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_Xlib$ext$record$$$class__3_CreateContext_105);
        locals_Xlib$ext$record$$$class__3_CreateContext_105 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$record$$$class__3_CreateContext_105);
        locals_Xlib$ext$record$$$class__3_CreateContext_105 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 105;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_47);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_Xlib$ext$record$$$function__4_create_context();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_49);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_38;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[143]);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        tmp_assign_source_50 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_50, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_51 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_metaclass_value_4;
        bool tmp_condition_result_19;
        PyObject *tmp_key_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        tmp_key_value_10 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_value_11 = mod_consts[114];
        tmp_metaclass_value_4 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_metaclass_value_4 == NULL) {
            tmp_metaclass_value_4 = Py_None;
        }
        assert(!(tmp_metaclass_value_4 == NULL));
        Py_INCREF(tmp_metaclass_value_4);
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_39 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[32];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_39, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_53 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_53;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_key_value_12;
        PyObject *tmp_dict_arg_value_12;
        tmp_key_value_12 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_12, tmp_key_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[114];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 130;

        goto try_except_handler_10;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_40 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_40, mod_consts[115]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_41 = tmp_class_creation_4__metaclass;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[115]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        tmp_tuple_element_14 = mod_consts[9];
        tmp_args_value_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_14 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 130;
        tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_54;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_42 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_42, mod_consts[117]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[118];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[119];
        tmp_getattr_default_4 = mod_consts[120];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_43 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[119]);
            Py_DECREF(tmp_expression_value_43);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 130;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_55;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_56;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_Xlib$ext$record$$$class__4_RegisterClients_130 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_12;
        }
        if (isFrameUnusable(cache_frame_0996cfbe33ab663bf286b1f5ca7778f5_5)) {
            Py_XDECREF(cache_frame_0996cfbe33ab663bf286b1f5ca7778f5_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0996cfbe33ab663bf286b1f5ca7778f5_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0996cfbe33ab663bf286b1f5ca7778f5_5 = MAKE_FUNCTION_FRAME(codeobj_0996cfbe33ab663bf286b1f5ca7778f5, module_Xlib$ext$record, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_type_description == NULL);
        frame_0996cfbe33ab663bf286b1f5ca7778f5_5 = cache_frame_0996cfbe33ab663bf286b1f5ca7778f5_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0996cfbe33ab663bf286b1f5ca7778f5_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0996cfbe33ab663bf286b1f5ca7778f5_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_args_element_value_62;
            PyObject *tmp_called_instance_32;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_called_instance_33;
            PyObject *tmp_args_element_value_64;
            PyObject *tmp_called_instance_34;
            PyObject *tmp_args_element_value_65;
            PyObject *tmp_called_instance_35;
            PyObject *tmp_args_element_value_66;
            PyObject *tmp_called_instance_36;
            PyObject *tmp_args_element_value_67;
            PyObject *tmp_called_instance_37;
            PyObject *tmp_args_element_value_68;
            PyObject *tmp_called_instance_38;
            PyObject *tmp_args_element_value_69;
            PyObject *tmp_called_instance_39;
            PyObject *tmp_args_element_value_70;
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_args_element_value_71;
            PyObject *tmp_args_element_value_72;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_args_element_value_73;
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_args_element_value_74;
            PyObject *tmp_args_element_value_75;
            tmp_expression_value_44 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_expression_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_44 == NULL)) {
                        tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 131;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_44);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[82]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_32 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_called_instance_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_32 == NULL)) {
                        tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 132;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_32);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 132;
            tmp_args_element_value_62 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_32,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[131], 0)
            );

            Py_DECREF(tmp_called_instance_32);
            if (tmp_args_element_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_33 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_called_instance_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_33 == NULL)) {
                        tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);

                        exception_lineno = 133;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_33);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 133;
            tmp_args_element_value_63 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_33,
                mod_consts[132],
                PyTuple_GET_ITEM(mod_consts[139], 0)
            );

            Py_DECREF(tmp_called_instance_33);
            if (tmp_args_element_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_34 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_called_instance_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_34 == NULL)) {
                        tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);

                        exception_lineno = 134;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_34);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 134;
            tmp_args_element_value_64 = CALL_METHOD_NO_ARGS(tmp_called_instance_34, mod_consts[134]);
            Py_DECREF(tmp_called_instance_34);
            if (tmp_args_element_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);

                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_35 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_called_instance_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_35 == NULL)) {
                        tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);

                        exception_lineno = 135;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_35);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 135;
            tmp_args_element_value_65 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_35,
                mod_consts[106],
                PyTuple_GET_ITEM(mod_consts[145], 0)
            );

            Py_DECREF(tmp_called_instance_35);
            if (tmp_args_element_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_36 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_called_instance_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_36 == NULL)) {
                        tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);
                        Py_DECREF(tmp_args_element_value_65);

                        exception_lineno = 136;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_36);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 136;
            tmp_args_element_value_66 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_36,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[146], 0)
            );

            Py_DECREF(tmp_called_instance_36);
            if (tmp_args_element_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_37 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_called_instance_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_37 == NULL)) {
                        tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);

                        exception_lineno = 137;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_37);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 137;
            tmp_args_element_value_67 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_37,
                mod_consts[138],
                PyTuple_GET_ITEM(mod_consts[147], 0)
            );

            Py_DECREF(tmp_called_instance_37);
            if (tmp_args_element_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);

                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_38 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_called_instance_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_38 == NULL)) {
                        tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);

                        exception_lineno = 138;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_38);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 138;
            tmp_args_element_value_68 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_38,
                mod_consts[108],
                &PyTuple_GET_ITEM(mod_consts[148], 0)
            );

            Py_DECREF(tmp_called_instance_38);
            if (tmp_args_element_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_called_instance_39 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_called_instance_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_39 == NULL)) {
                        tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);

                        exception_lineno = 139;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_39);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 139;
            tmp_args_element_value_69 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_39,
                mod_consts[108],
                &PyTuple_GET_ITEM(mod_consts[109], 0)
            );

            Py_DECREF(tmp_called_instance_39);
            if (tmp_args_element_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);

                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_45 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_expression_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);

                        exception_lineno = 140;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_45);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[110]);
            Py_DECREF(tmp_expression_value_45);
            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_args_element_value_71 = mod_consts[149];
            tmp_expression_value_46 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_called_value_27);

                        exception_lineno = 140;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[150]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_args_element_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 140;
            {
                PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72};
                tmp_args_element_value_70 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
            }

            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_72);
            if (tmp_args_element_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_47 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[15]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);

                        exception_lineno = 141;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[110]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);

                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_args_element_value_74 = mod_consts[111];
            tmp_args_element_value_75 = PyObject_GetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[105]);

            if (tmp_args_element_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[105]);

                    if (unlikely(tmp_args_element_value_75 == NULL)) {
                        tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
                    }

                    if (tmp_args_element_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_args_element_value_62);
                        Py_DECREF(tmp_args_element_value_63);
                        Py_DECREF(tmp_args_element_value_64);
                        Py_DECREF(tmp_args_element_value_65);
                        Py_DECREF(tmp_args_element_value_66);
                        Py_DECREF(tmp_args_element_value_67);
                        Py_DECREF(tmp_args_element_value_68);
                        Py_DECREF(tmp_args_element_value_69);
                        Py_DECREF(tmp_args_element_value_70);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 141;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_args_element_value_75);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 141;
            {
                PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75};
                tmp_args_element_value_73 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_28, call_args);
            }

            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_75);
            if (tmp_args_element_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);

                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame.f_lineno = 131;
            {
                PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_73};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS10(tmp_called_value_26, call_args);
            }

            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_64);
            Py_DECREF(tmp_args_element_value_65);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);
            Py_DECREF(tmp_args_element_value_69);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_args_element_value_73);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0996cfbe33ab663bf286b1f5ca7778f5_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0996cfbe33ab663bf286b1f5ca7778f5_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0996cfbe33ab663bf286b1f5ca7778f5_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0996cfbe33ab663bf286b1f5ca7778f5_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0996cfbe33ab663bf286b1f5ca7778f5_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0996cfbe33ab663bf286b1f5ca7778f5_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_0996cfbe33ab663bf286b1f5ca7778f5_5 == cache_frame_0996cfbe33ab663bf286b1f5ca7778f5_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0996cfbe33ab663bf286b1f5ca7778f5_5);
            cache_frame_0996cfbe33ab663bf286b1f5ca7778f5_5 = NULL;
        }

        assertFrameObject(frame_0996cfbe33ab663bf286b1f5ca7778f5_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__4_RegisterClients_130, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_12;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_29 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_16 = mod_consts[9];
            tmp_args_value_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_16 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_Xlib$ext$record$$$class__4_RegisterClients_130;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 130;
            tmp_assign_source_57 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_57;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_56 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_56);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_Xlib$ext$record$$$class__4_RegisterClients_130);
        locals_Xlib$ext$record$$$class__4_RegisterClients_130 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$record$$$class__4_RegisterClients_130);
        locals_Xlib$ext$record$$$class__4_RegisterClients_130 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 130;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_56);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
    {
        PyObject *tmp_assign_source_58;


        tmp_assign_source_58 = MAKE_FUNCTION_Xlib$ext$record$$$function__5_register_clients();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_58);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_48;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[143]);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        tmp_assign_source_59 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_59, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_60 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = PyDict_New();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_value_5;
        bool tmp_condition_result_25;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        tmp_key_value_13 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_value_14 = mod_consts[114];
        tmp_metaclass_value_5 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_metaclass_value_5 == NULL) {
            tmp_metaclass_value_5 = Py_None;
        }
        assert(!(tmp_metaclass_value_5 == NULL));
        Py_INCREF(tmp_metaclass_value_5);
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        tmp_condition_result_26 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_49 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[32];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_49, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_62 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_62;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        tmp_key_value_15 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[114];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 153;

        goto try_except_handler_13;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_50 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_50, mod_consts[115]);
        tmp_condition_result_28 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_51 = tmp_class_creation_5__metaclass;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[115]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        tmp_tuple_element_18 = mod_consts[10];
        tmp_args_value_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_18 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 153;
        tmp_assign_source_63 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_52 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_52, mod_consts[117]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[118];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[119];
        tmp_getattr_default_5 = mod_consts[120];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_53;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_53 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_53 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[119]);
            Py_DECREF(tmp_expression_value_53);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 153;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_64;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_Xlib$ext$record$$$class__5_UnregisterClients_153 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[10];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_15;
        }
        if (isFrameUnusable(cache_frame_eef067f9a980c7ea4b19bdd852feed55_6)) {
            Py_XDECREF(cache_frame_eef067f9a980c7ea4b19bdd852feed55_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_eef067f9a980c7ea4b19bdd852feed55_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_eef067f9a980c7ea4b19bdd852feed55_6 = MAKE_FUNCTION_FRAME(codeobj_eef067f9a980c7ea4b19bdd852feed55, module_Xlib$ext$record, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_eef067f9a980c7ea4b19bdd852feed55_6->m_type_description == NULL);
        frame_eef067f9a980c7ea4b19bdd852feed55_6 = cache_frame_eef067f9a980c7ea4b19bdd852feed55_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_eef067f9a980c7ea4b19bdd852feed55_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_eef067f9a980c7ea4b19bdd852feed55_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_args_element_value_76;
            PyObject *tmp_called_instance_40;
            PyObject *tmp_args_element_value_77;
            PyObject *tmp_called_instance_41;
            PyObject *tmp_args_element_value_78;
            PyObject *tmp_called_instance_42;
            PyObject *tmp_args_element_value_79;
            PyObject *tmp_called_instance_43;
            PyObject *tmp_args_element_value_80;
            PyObject *tmp_called_instance_44;
            PyObject *tmp_args_element_value_81;
            PyObject *tmp_called_value_32;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_args_element_value_82;
            PyObject *tmp_args_element_value_83;
            PyObject *tmp_expression_value_56;
            tmp_expression_value_54 = PyObject_GetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[15]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[82]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_40 = PyObject_GetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[15]);

            if (tmp_called_instance_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_40 == NULL)) {
                        tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 155;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_40);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_eef067f9a980c7ea4b19bdd852feed55_6->m_frame.f_lineno = 155;
            tmp_args_element_value_76 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_40,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[131], 0)
            );

            Py_DECREF(tmp_called_instance_40);
            if (tmp_args_element_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_41 = PyObject_GetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[15]);

            if (tmp_called_instance_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_41 == NULL)) {
                        tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_76);

                        exception_lineno = 156;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_41);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_eef067f9a980c7ea4b19bdd852feed55_6->m_frame.f_lineno = 156;
            tmp_args_element_value_77 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_41,
                mod_consts[132],
                PyTuple_GET_ITEM(mod_consts[147], 0)
            );

            Py_DECREF(tmp_called_instance_41);
            if (tmp_args_element_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_76);

                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_42 = PyObject_GetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[15]);

            if (tmp_called_instance_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_42 == NULL)) {
                        tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_76);
                        Py_DECREF(tmp_args_element_value_77);

                        exception_lineno = 157;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_42);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_eef067f9a980c7ea4b19bdd852feed55_6->m_frame.f_lineno = 157;
            tmp_args_element_value_78 = CALL_METHOD_NO_ARGS(tmp_called_instance_42, mod_consts[134]);
            Py_DECREF(tmp_called_instance_42);
            if (tmp_args_element_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);

                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_43 = PyObject_GetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[15]);

            if (tmp_called_instance_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_43 == NULL)) {
                        tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_76);
                        Py_DECREF(tmp_args_element_value_77);
                        Py_DECREF(tmp_args_element_value_78);

                        exception_lineno = 158;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_43);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_eef067f9a980c7ea4b19bdd852feed55_6->m_frame.f_lineno = 158;
            tmp_args_element_value_79 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_43,
                mod_consts[106],
                PyTuple_GET_ITEM(mod_consts[145], 0)
            );

            Py_DECREF(tmp_called_instance_43);
            if (tmp_args_element_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                Py_DECREF(tmp_args_element_value_78);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_called_instance_44 = PyObject_GetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[15]);

            if (tmp_called_instance_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_44 == NULL)) {
                        tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_76);
                        Py_DECREF(tmp_args_element_value_77);
                        Py_DECREF(tmp_args_element_value_78);
                        Py_DECREF(tmp_args_element_value_79);

                        exception_lineno = 159;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_44);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_eef067f9a980c7ea4b19bdd852feed55_6->m_frame.f_lineno = 159;
            tmp_args_element_value_80 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_44,
                mod_consts[108],
                &PyTuple_GET_ITEM(mod_consts[148], 0)
            );

            Py_DECREF(tmp_called_instance_44);
            if (tmp_args_element_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                Py_DECREF(tmp_args_element_value_78);
                Py_DECREF(tmp_args_element_value_79);

                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_expression_value_55 = PyObject_GetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[15]);

            if (tmp_expression_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_55 == NULL)) {
                        tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_76);
                        Py_DECREF(tmp_args_element_value_77);
                        Py_DECREF(tmp_args_element_value_78);
                        Py_DECREF(tmp_args_element_value_79);
                        Py_DECREF(tmp_args_element_value_80);

                        exception_lineno = 160;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_55);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[110]);
            Py_DECREF(tmp_expression_value_55);
            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                Py_DECREF(tmp_args_element_value_78);
                Py_DECREF(tmp_args_element_value_79);
                Py_DECREF(tmp_args_element_value_80);

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_args_element_value_82 = mod_consts[149];
            tmp_expression_value_56 = PyObject_GetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[15]);

            if (tmp_expression_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_56 == NULL)) {
                        tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);
                        Py_DECREF(tmp_args_element_value_76);
                        Py_DECREF(tmp_args_element_value_77);
                        Py_DECREF(tmp_args_element_value_78);
                        Py_DECREF(tmp_args_element_value_79);
                        Py_DECREF(tmp_args_element_value_80);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 160;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_56);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_args_element_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[150]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_args_element_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                Py_DECREF(tmp_args_element_value_78);
                Py_DECREF(tmp_args_element_value_79);
                Py_DECREF(tmp_args_element_value_80);
                Py_DECREF(tmp_called_value_32);

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_eef067f9a980c7ea4b19bdd852feed55_6->m_frame.f_lineno = 160;
            {
                PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83};
                tmp_args_element_value_81 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_32, call_args);
            }

            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_83);
            if (tmp_args_element_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                Py_DECREF(tmp_args_element_value_78);
                Py_DECREF(tmp_args_element_value_79);
                Py_DECREF(tmp_args_element_value_80);

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_eef067f9a980c7ea4b19bdd852feed55_6->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_31, call_args);
            }

            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_76);
            Py_DECREF(tmp_args_element_value_77);
            Py_DECREF(tmp_args_element_value_78);
            Py_DECREF(tmp_args_element_value_79);
            Py_DECREF(tmp_args_element_value_80);
            Py_DECREF(tmp_args_element_value_81);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_eef067f9a980c7ea4b19bdd852feed55_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_eef067f9a980c7ea4b19bdd852feed55_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eef067f9a980c7ea4b19bdd852feed55_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eef067f9a980c7ea4b19bdd852feed55_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eef067f9a980c7ea4b19bdd852feed55_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eef067f9a980c7ea4b19bdd852feed55_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_eef067f9a980c7ea4b19bdd852feed55_6 == cache_frame_eef067f9a980c7ea4b19bdd852feed55_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_eef067f9a980c7ea4b19bdd852feed55_6);
            cache_frame_eef067f9a980c7ea4b19bdd852feed55_6 = NULL;
        }

        assertFrameObject(frame_eef067f9a980c7ea4b19bdd852feed55_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__5_UnregisterClients_153, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_15;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_33 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_20 = mod_consts[10];
            tmp_args_value_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_20 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_Xlib$ext$record$$$class__5_UnregisterClients_153;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 153;
            tmp_assign_source_66 = CALL_FUNCTION(tmp_called_value_33, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_65 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_Xlib$ext$record$$$class__5_UnregisterClients_153);
        locals_Xlib$ext$record$$$class__5_UnregisterClients_153 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$record$$$class__5_UnregisterClients_153);
        locals_Xlib$ext$record$$$class__5_UnregisterClients_153 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 153;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_65);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
    {
        PyObject *tmp_assign_source_67;


        tmp_assign_source_67 = MAKE_FUNCTION_Xlib$ext$record$$$function__6_unregister_clients();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_67);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_57;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[16]);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        tmp_assign_source_68 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_68, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_69 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = PyDict_New();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_metaclass_value_6;
        bool tmp_condition_result_31;
        PyObject *tmp_key_value_16;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_key_value_17;
        nuitka_bool tmp_condition_result_32;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        tmp_key_value_16 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_16, tmp_key_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_value_17 = mod_consts[114];
        tmp_metaclass_value_6 = DICT_GET_ITEM0(tmp_dict_arg_value_17, tmp_key_value_17);
        if (tmp_metaclass_value_6 == NULL) {
            tmp_metaclass_value_6 = Py_None;
        }
        assert(!(tmp_metaclass_value_6 == NULL));
        Py_INCREF(tmp_metaclass_value_6);
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        tmp_condition_result_32 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_58 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[32];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_58, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_12:;
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_71 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_71;
    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_key_value_18;
        PyObject *tmp_dict_arg_value_18;
        tmp_key_value_18 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_18, tmp_key_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[114];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 170;

        goto try_except_handler_16;
    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_expression_value_59;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_59 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_59, mod_consts[115]);
        tmp_condition_result_34 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_60 = tmp_class_creation_6__metaclass;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[115]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        tmp_tuple_element_22 = mod_consts[12];
        tmp_args_value_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_22 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 170;
        tmp_assign_source_72 = CALL_FUNCTION(tmp_called_value_34, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_61;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_61 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_61, mod_consts[117]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[118];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[119];
        tmp_getattr_default_6 = mod_consts[120];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_62;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_62 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_62 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[119]);
            Py_DECREF(tmp_expression_value_62);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 170;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_73;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_74;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_Xlib$ext$record$$$class__6_GetContext_170 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[12];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_18;
        }
        if (isFrameUnusable(cache_frame_c9ec79e355fe9c572d73eb9d886b4bcd_7)) {
            Py_XDECREF(cache_frame_c9ec79e355fe9c572d73eb9d886b4bcd_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c9ec79e355fe9c572d73eb9d886b4bcd_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c9ec79e355fe9c572d73eb9d886b4bcd_7 = MAKE_FUNCTION_FRAME(codeobj_c9ec79e355fe9c572d73eb9d886b4bcd, module_Xlib$ext$record, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_type_description == NULL);
        frame_c9ec79e355fe9c572d73eb9d886b4bcd_7 = cache_frame_c9ec79e355fe9c572d73eb9d886b4bcd_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c9ec79e355fe9c572d73eb9d886b4bcd_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c9ec79e355fe9c572d73eb9d886b4bcd_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_args_element_value_84;
            PyObject *tmp_called_instance_45;
            PyObject *tmp_args_element_value_85;
            PyObject *tmp_called_instance_46;
            PyObject *tmp_args_element_value_86;
            PyObject *tmp_called_instance_47;
            PyObject *tmp_args_element_value_87;
            PyObject *tmp_called_instance_48;
            tmp_expression_value_63 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_expression_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 171;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_63);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[82]);
            Py_DECREF(tmp_expression_value_63);
            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_45 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_45 == NULL)) {
                        tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);

                        exception_lineno = 172;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_45);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 172;
            tmp_args_element_value_84 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_45,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[131], 0)
            );

            Py_DECREF(tmp_called_instance_45);
            if (tmp_args_element_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_46 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_46 == NULL)) {
                        tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);
                        Py_DECREF(tmp_args_element_value_84);

                        exception_lineno = 173;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_46);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 173;
            tmp_args_element_value_85 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_46,
                mod_consts[132],
                PyTuple_GET_ITEM(mod_consts[151], 0)
            );

            Py_DECREF(tmp_called_instance_46);
            if (tmp_args_element_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_84);

                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_47 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_47 == NULL)) {
                        tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);
                        Py_DECREF(tmp_args_element_value_84);
                        Py_DECREF(tmp_args_element_value_85);

                        exception_lineno = 174;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_47);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 174;
            tmp_args_element_value_86 = CALL_METHOD_NO_ARGS(tmp_called_instance_47, mod_consts[134]);
            Py_DECREF(tmp_called_instance_47);
            if (tmp_args_element_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_84);
                Py_DECREF(tmp_args_element_value_85);

                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_48 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_48 == NULL)) {
                        tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);
                        Py_DECREF(tmp_args_element_value_84);
                        Py_DECREF(tmp_args_element_value_85);
                        Py_DECREF(tmp_args_element_value_86);

                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_48);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 175;
            tmp_args_element_value_87 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_48,
                mod_consts[106],
                PyTuple_GET_ITEM(mod_consts[145], 0)
            );

            Py_DECREF(tmp_called_instance_48);
            if (tmp_args_element_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_84);
                Py_DECREF(tmp_args_element_value_85);
                Py_DECREF(tmp_args_element_value_86);

                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 171;
            {
                PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_35, call_args);
            }

            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_84);
            Py_DECREF(tmp_args_element_value_85);
            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_args_element_value_88;
            PyObject *tmp_called_instance_49;
            PyObject *tmp_args_element_value_89;
            PyObject *tmp_called_instance_50;
            PyObject *tmp_args_element_value_90;
            PyObject *tmp_called_instance_51;
            PyObject *tmp_args_element_value_91;
            PyObject *tmp_called_instance_52;
            PyObject *tmp_args_element_value_92;
            PyObject *tmp_called_instance_53;
            PyObject *tmp_args_element_value_93;
            PyObject *tmp_called_instance_54;
            PyObject *tmp_args_element_value_94;
            PyObject *tmp_called_instance_55;
            PyObject *tmp_args_element_value_95;
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_args_element_value_96;
            PyObject *tmp_args_element_value_97;
            tmp_expression_value_64 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_expression_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_64 == NULL)) {
                        tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 176;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_64);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[82]);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_49 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_49 == NULL)) {
                        tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);

                        exception_lineno = 177;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_49);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 177;
            tmp_args_element_value_88 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_49,
                mod_consts[138],
                PyTuple_GET_ITEM(mod_consts[139], 0)
            );

            Py_DECREF(tmp_called_instance_49);
            if (tmp_args_element_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);

                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_50 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_50 == NULL)) {
                        tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_args_element_value_88);

                        exception_lineno = 178;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_50);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 178;
            tmp_args_element_value_89 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_50,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[140], 0)
            );

            Py_DECREF(tmp_called_instance_50);
            if (tmp_args_element_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_88);

                exception_lineno = 178;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_51 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_51 == NULL)) {
                        tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_args_element_value_88);
                        Py_DECREF(tmp_args_element_value_89);

                        exception_lineno = 179;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_51);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 179;
            tmp_args_element_value_90 = CALL_METHOD_NO_ARGS(tmp_called_instance_51, mod_consts[141]);
            Py_DECREF(tmp_called_instance_51);
            if (tmp_args_element_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_88);
                Py_DECREF(tmp_args_element_value_89);

                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_52 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_52 == NULL)) {
                        tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_args_element_value_88);
                        Py_DECREF(tmp_args_element_value_89);
                        Py_DECREF(tmp_args_element_value_90);

                        exception_lineno = 180;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_52);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 180;
            tmp_args_element_value_91 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_52,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[146], 0)
            );

            Py_DECREF(tmp_called_instance_52);
            if (tmp_args_element_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_88);
                Py_DECREF(tmp_args_element_value_89);
                Py_DECREF(tmp_args_element_value_90);

                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_53 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_53 == NULL)) {
                        tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_args_element_value_88);
                        Py_DECREF(tmp_args_element_value_89);
                        Py_DECREF(tmp_args_element_value_90);
                        Py_DECREF(tmp_args_element_value_91);

                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_53);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 181;
            tmp_args_element_value_92 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_53,
                mod_consts[138],
                PyTuple_GET_ITEM(mod_consts[147], 0)
            );

            Py_DECREF(tmp_called_instance_53);
            if (tmp_args_element_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_88);
                Py_DECREF(tmp_args_element_value_89);
                Py_DECREF(tmp_args_element_value_90);
                Py_DECREF(tmp_args_element_value_91);

                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_54 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_54 == NULL)) {
                        tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_args_element_value_88);
                        Py_DECREF(tmp_args_element_value_89);
                        Py_DECREF(tmp_args_element_value_90);
                        Py_DECREF(tmp_args_element_value_91);
                        Py_DECREF(tmp_args_element_value_92);

                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_54);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 182;
            tmp_args_element_value_93 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_54,
                mod_consts[108],
                &PyTuple_GET_ITEM(mod_consts[152], 0)
            );

            Py_DECREF(tmp_called_instance_54);
            if (tmp_args_element_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_88);
                Py_DECREF(tmp_args_element_value_89);
                Py_DECREF(tmp_args_element_value_90);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_instance_55 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_called_instance_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_55 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_55 == NULL)) {
                        tmp_called_instance_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_args_element_value_88);
                        Py_DECREF(tmp_args_element_value_89);
                        Py_DECREF(tmp_args_element_value_90);
                        Py_DECREF(tmp_args_element_value_91);
                        Py_DECREF(tmp_args_element_value_92);
                        Py_DECREF(tmp_args_element_value_93);

                        exception_lineno = 183;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_55);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 183;
            tmp_args_element_value_94 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_55,
                mod_consts[138],
                PyTuple_GET_ITEM(mod_consts[153], 0)
            );

            Py_DECREF(tmp_called_instance_55);
            if (tmp_args_element_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_88);
                Py_DECREF(tmp_args_element_value_89);
                Py_DECREF(tmp_args_element_value_90);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_93);

                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_expression_value_65 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[15]);

            if (tmp_expression_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_args_element_value_88);
                        Py_DECREF(tmp_args_element_value_89);
                        Py_DECREF(tmp_args_element_value_90);
                        Py_DECREF(tmp_args_element_value_91);
                        Py_DECREF(tmp_args_element_value_92);
                        Py_DECREF(tmp_args_element_value_93);
                        Py_DECREF(tmp_args_element_value_94);

                        exception_lineno = 184;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_65);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[110]);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_88);
                Py_DECREF(tmp_args_element_value_89);
                Py_DECREF(tmp_args_element_value_90);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_93);
                Py_DECREF(tmp_args_element_value_94);

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_args_element_value_96 = mod_consts[154];
            tmp_args_element_value_97 = PyObject_GetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[112]);

            if (tmp_args_element_value_97 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_97 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[112]);

                    if (unlikely(tmp_args_element_value_97 == NULL)) {
                        tmp_args_element_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
                    }

                    if (tmp_args_element_value_97 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);
                        Py_DECREF(tmp_args_element_value_88);
                        Py_DECREF(tmp_args_element_value_89);
                        Py_DECREF(tmp_args_element_value_90);
                        Py_DECREF(tmp_args_element_value_91);
                        Py_DECREF(tmp_args_element_value_92);
                        Py_DECREF(tmp_args_element_value_93);
                        Py_DECREF(tmp_args_element_value_94);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 184;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_args_element_value_97);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 184;
            {
                PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
                tmp_args_element_value_95 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_37, call_args);
            }

            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_97);
            if (tmp_args_element_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);
                Py_DECREF(tmp_args_element_value_88);
                Py_DECREF(tmp_args_element_value_89);
                Py_DECREF(tmp_args_element_value_90);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_93);
                Py_DECREF(tmp_args_element_value_94);

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90, tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93, tmp_args_element_value_94, tmp_args_element_value_95};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS8(tmp_called_value_36, call_args);
            }

            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_88);
            Py_DECREF(tmp_args_element_value_89);
            Py_DECREF(tmp_args_element_value_90);
            Py_DECREF(tmp_args_element_value_91);
            Py_DECREF(tmp_args_element_value_92);
            Py_DECREF(tmp_args_element_value_93);
            Py_DECREF(tmp_args_element_value_94);
            Py_DECREF(tmp_args_element_value_95);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c9ec79e355fe9c572d73eb9d886b4bcd_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c9ec79e355fe9c572d73eb9d886b4bcd_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c9ec79e355fe9c572d73eb9d886b4bcd_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c9ec79e355fe9c572d73eb9d886b4bcd_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c9ec79e355fe9c572d73eb9d886b4bcd_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c9ec79e355fe9c572d73eb9d886b4bcd_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c9ec79e355fe9c572d73eb9d886b4bcd_7 == cache_frame_c9ec79e355fe9c572d73eb9d886b4bcd_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c9ec79e355fe9c572d73eb9d886b4bcd_7);
            cache_frame_c9ec79e355fe9c572d73eb9d886b4bcd_7 = NULL;
        }

        assertFrameObject(frame_c9ec79e355fe9c572d73eb9d886b4bcd_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__6_GetContext_170, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_18;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_75;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_38 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_24 = mod_consts[12];
            tmp_args_value_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_24 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_Xlib$ext$record$$$class__6_GetContext_170;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 170;
            tmp_assign_source_75 = CALL_FUNCTION(tmp_called_value_38, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_75;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_74 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_74);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_Xlib$ext$record$$$class__6_GetContext_170);
        locals_Xlib$ext$record$$$class__6_GetContext_170 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$record$$$class__6_GetContext_170);
        locals_Xlib$ext$record$$$class__6_GetContext_170 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 170;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_74);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
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
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    {
        PyObject *tmp_assign_source_76;


        tmp_assign_source_76 = MAKE_FUNCTION_Xlib$ext$record$$$function__7_get_context();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_76);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_66;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[16]);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        tmp_assign_source_77 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_77, 0, tmp_tuple_element_25);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_78 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = PyDict_New();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_metaclass_value_7;
        bool tmp_condition_result_37;
        PyObject *tmp_key_value_19;
        PyObject *tmp_dict_arg_value_19;
        PyObject *tmp_dict_arg_value_20;
        PyObject *tmp_key_value_20;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        tmp_key_value_19 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_19, tmp_key_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_value_20 = mod_consts[114];
        tmp_metaclass_value_7 = DICT_GET_ITEM0(tmp_dict_arg_value_20, tmp_key_value_20);
        if (tmp_metaclass_value_7 == NULL) {
            tmp_metaclass_value_7 = Py_None;
        }
        assert(!(tmp_metaclass_value_7 == NULL));
        Py_INCREF(tmp_metaclass_value_7);
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        tmp_condition_result_38 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_67 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[32];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_67, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_80 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_80;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_key_value_21;
        PyObject *tmp_dict_arg_value_21;
        tmp_key_value_21 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_21, tmp_key_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[114];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 193;

        goto try_except_handler_19;
    }
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_68 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_68, mod_consts[115]);
        tmp_condition_result_40 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_69 = tmp_class_creation_7__metaclass;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[115]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        tmp_tuple_element_26 = mod_consts[33];
        tmp_args_value_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_26 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 193;
        tmp_assign_source_81 = CALL_FUNCTION(tmp_called_value_39, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_70 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_70, mod_consts[117]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[118];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[119];
        tmp_getattr_default_7 = mod_consts[120];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_71;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_71 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_71 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[119]);
            Py_DECREF(tmp_expression_value_71);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 193;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_82;
    }
    branch_end_26:;
    {
        PyObject *tmp_assign_source_83;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_Xlib$ext$record$$$class__7_EnableContext_193 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_21;
        }
        if (isFrameUnusable(cache_frame_e7d109869c580c973c02c71112716569_8)) {
            Py_XDECREF(cache_frame_e7d109869c580c973c02c71112716569_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e7d109869c580c973c02c71112716569_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e7d109869c580c973c02c71112716569_8 = MAKE_FUNCTION_FRAME(codeobj_e7d109869c580c973c02c71112716569, module_Xlib$ext$record, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_e7d109869c580c973c02c71112716569_8->m_type_description == NULL);
        frame_e7d109869c580c973c02c71112716569_8 = cache_frame_e7d109869c580c973c02c71112716569_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e7d109869c580c973c02c71112716569_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e7d109869c580c973c02c71112716569_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_40;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_args_element_value_98;
            PyObject *tmp_called_instance_56;
            PyObject *tmp_args_element_value_99;
            PyObject *tmp_called_instance_57;
            PyObject *tmp_args_element_value_100;
            PyObject *tmp_called_instance_58;
            PyObject *tmp_args_element_value_101;
            PyObject *tmp_called_instance_59;
            tmp_expression_value_72 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_expression_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_72 == NULL)) {
                        tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_72);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[82]);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_56 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_56 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_56 == NULL)) {
                        tmp_called_instance_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);

                        exception_lineno = 195;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_56);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 195;
            tmp_args_element_value_98 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_56,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[131], 0)
            );

            Py_DECREF(tmp_called_instance_56);
            if (tmp_args_element_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_40);

                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_57 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_57 == NULL)) {
                        tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);
                        Py_DECREF(tmp_args_element_value_98);

                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_57);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 196;
            tmp_args_element_value_99 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_57,
                mod_consts[132],
                PyTuple_GET_ITEM(mod_consts[155], 0)
            );

            Py_DECREF(tmp_called_instance_57);
            if (tmp_args_element_value_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_98);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_58 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_58 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_58 == NULL)) {
                        tmp_called_instance_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);
                        Py_DECREF(tmp_args_element_value_98);
                        Py_DECREF(tmp_args_element_value_99);

                        exception_lineno = 197;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_58);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 197;
            tmp_args_element_value_100 = CALL_METHOD_NO_ARGS(tmp_called_instance_58, mod_consts[134]);
            Py_DECREF(tmp_called_instance_58);
            if (tmp_args_element_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);

                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_59 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_59 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_59 == NULL)) {
                        tmp_called_instance_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);
                        Py_DECREF(tmp_args_element_value_98);
                        Py_DECREF(tmp_args_element_value_99);
                        Py_DECREF(tmp_args_element_value_100);

                        exception_lineno = 198;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_59);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 198;
            tmp_args_element_value_101 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_59,
                mod_consts[106],
                PyTuple_GET_ITEM(mod_consts[145], 0)
            );

            Py_DECREF(tmp_called_instance_59);
            if (tmp_args_element_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);
                Py_DECREF(tmp_args_element_value_100);

                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 194;
            {
                PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100, tmp_args_element_value_101};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_40, call_args);
            }

            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_98);
            Py_DECREF(tmp_args_element_value_99);
            Py_DECREF(tmp_args_element_value_100);
            Py_DECREF(tmp_args_element_value_101);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_41;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_args_element_value_102;
            PyObject *tmp_called_instance_60;
            PyObject *tmp_args_element_value_103;
            PyObject *tmp_called_instance_61;
            PyObject *tmp_args_element_value_104;
            PyObject *tmp_called_instance_62;
            PyObject *tmp_args_element_value_105;
            PyObject *tmp_called_instance_63;
            PyObject *tmp_args_element_value_106;
            PyObject *tmp_called_instance_64;
            PyObject *tmp_args_element_value_107;
            PyObject *tmp_called_instance_65;
            PyObject *tmp_args_element_value_108;
            PyObject *tmp_called_instance_66;
            PyObject *tmp_args_element_value_109;
            PyObject *tmp_called_instance_67;
            PyObject *tmp_args_element_value_110;
            PyObject *tmp_called_instance_68;
            PyObject *tmp_args_element_value_111;
            PyObject *tmp_called_instance_69;
            PyObject *tmp_args_element_value_112;
            PyObject *tmp_called_instance_70;
            PyObject *tmp_args_element_value_113;
            PyObject *tmp_called_value_42;
            tmp_expression_value_73 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_expression_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_73 == NULL)) {
                        tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 199;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_73);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[82]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_60 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_60 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_60 == NULL)) {
                        tmp_called_instance_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);

                        exception_lineno = 200;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_60);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 200;
            tmp_args_element_value_102 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_60,
                mod_consts[138],
                PyTuple_GET_ITEM(mod_consts[144], 0)
            );

            Py_DECREF(tmp_called_instance_60);
            if (tmp_args_element_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);

                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_61 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_61 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_61 == NULL)) {
                        tmp_called_instance_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);

                        exception_lineno = 201;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_61);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 201;
            tmp_args_element_value_103 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_61,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[156], 0)
            );

            Py_DECREF(tmp_called_instance_61);
            if (tmp_args_element_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);

                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_62 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_62 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_62 == NULL)) {
                        tmp_called_instance_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);

                        exception_lineno = 202;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_62);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 202;
            tmp_args_element_value_104 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_62,
                mod_consts[87],
                PyTuple_GET_ITEM(mod_consts[140], 0)
            );

            Py_DECREF(tmp_called_instance_62);
            if (tmp_args_element_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);

                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_63 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_63 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_63 == NULL)) {
                        tmp_called_instance_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);

                        exception_lineno = 203;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_63);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 203;
            tmp_args_element_value_105 = CALL_METHOD_NO_ARGS(tmp_called_instance_63, mod_consts[141]);
            Py_DECREF(tmp_called_instance_63);
            if (tmp_args_element_value_105 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);

                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_64 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_64 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_64 == NULL)) {
                        tmp_called_instance_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);
                        Py_DECREF(tmp_args_element_value_105);

                        exception_lineno = 204;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_64);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 204;
            tmp_args_element_value_106 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_64,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[146], 0)
            );

            Py_DECREF(tmp_called_instance_64);
            if (tmp_args_element_value_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);

                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_65 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_65 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_65 == NULL)) {
                        tmp_called_instance_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);
                        Py_DECREF(tmp_args_element_value_105);
                        Py_DECREF(tmp_args_element_value_106);

                        exception_lineno = 205;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_65);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 205;
            tmp_args_element_value_107 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_65,
                mod_consts[102],
                PyTuple_GET_ITEM(mod_consts[157], 0)
            );

            Py_DECREF(tmp_called_instance_65);
            if (tmp_args_element_value_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_106);

                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_66 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_66 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_66 == NULL)) {
                        tmp_called_instance_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);
                        Py_DECREF(tmp_args_element_value_105);
                        Py_DECREF(tmp_args_element_value_106);
                        Py_DECREF(tmp_args_element_value_107);

                        exception_lineno = 206;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_66);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 206;
            tmp_args_element_value_108 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_66,
                mod_consts[138],
                PyTuple_GET_ITEM(mod_consts[139], 0)
            );

            Py_DECREF(tmp_called_instance_66);
            if (tmp_args_element_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);

                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_67 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_67 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_67 == NULL)) {
                        tmp_called_instance_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);
                        Py_DECREF(tmp_args_element_value_105);
                        Py_DECREF(tmp_args_element_value_106);
                        Py_DECREF(tmp_args_element_value_107);
                        Py_DECREF(tmp_args_element_value_108);

                        exception_lineno = 207;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_67);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 207;
            tmp_args_element_value_109 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_67,
                mod_consts[106],
                PyTuple_GET_ITEM(mod_consts[158], 0)
            );

            Py_DECREF(tmp_called_instance_67);
            if (tmp_args_element_value_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_108);

                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_68 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_68 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_68 == NULL)) {
                        tmp_called_instance_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);
                        Py_DECREF(tmp_args_element_value_105);
                        Py_DECREF(tmp_args_element_value_106);
                        Py_DECREF(tmp_args_element_value_107);
                        Py_DECREF(tmp_args_element_value_108);
                        Py_DECREF(tmp_args_element_value_109);

                        exception_lineno = 208;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_68);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 208;
            tmp_args_element_value_110 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_68,
                mod_consts[106],
                PyTuple_GET_ITEM(mod_consts[159], 0)
            );

            Py_DECREF(tmp_called_instance_68);
            if (tmp_args_element_value_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_108);
                Py_DECREF(tmp_args_element_value_109);

                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_69 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_69 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_69 == NULL)) {
                        tmp_called_instance_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);
                        Py_DECREF(tmp_args_element_value_105);
                        Py_DECREF(tmp_args_element_value_106);
                        Py_DECREF(tmp_args_element_value_107);
                        Py_DECREF(tmp_args_element_value_108);
                        Py_DECREF(tmp_args_element_value_109);
                        Py_DECREF(tmp_args_element_value_110);

                        exception_lineno = 209;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_69);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 209;
            tmp_args_element_value_111 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_69,
                mod_consts[106],
                PyTuple_GET_ITEM(mod_consts[160], 0)
            );

            Py_DECREF(tmp_called_instance_69);
            if (tmp_args_element_value_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_108);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_110);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_instance_70 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[15]);

            if (tmp_called_instance_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_70 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_70 == NULL)) {
                        tmp_called_instance_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);
                        Py_DECREF(tmp_args_element_value_105);
                        Py_DECREF(tmp_args_element_value_106);
                        Py_DECREF(tmp_args_element_value_107);
                        Py_DECREF(tmp_args_element_value_108);
                        Py_DECREF(tmp_args_element_value_109);
                        Py_DECREF(tmp_args_element_value_110);
                        Py_DECREF(tmp_args_element_value_111);

                        exception_lineno = 210;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_70);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 210;
            tmp_args_element_value_112 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_70,
                mod_consts[138],
                PyTuple_GET_ITEM(mod_consts[161], 0)
            );

            Py_DECREF(tmp_called_instance_70);
            if (tmp_args_element_value_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_108);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_110);
                Py_DECREF(tmp_args_element_value_111);

                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_42 = PyObject_GetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[116]);

            if (tmp_called_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[116]);

                    if (unlikely(tmp_called_value_42 == NULL)) {
                        tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
                    }

                    if (tmp_called_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_args_element_value_102);
                        Py_DECREF(tmp_args_element_value_103);
                        Py_DECREF(tmp_args_element_value_104);
                        Py_DECREF(tmp_args_element_value_105);
                        Py_DECREF(tmp_args_element_value_106);
                        Py_DECREF(tmp_args_element_value_107);
                        Py_DECREF(tmp_args_element_value_108);
                        Py_DECREF(tmp_args_element_value_109);
                        Py_DECREF(tmp_args_element_value_110);
                        Py_DECREF(tmp_args_element_value_111);
                        Py_DECREF(tmp_args_element_value_112);

                        exception_lineno = 211;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_42);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 211;
            tmp_args_element_value_113 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_42, mod_consts[162]);

            Py_DECREF(tmp_called_value_42);
            if (tmp_args_element_value_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_108);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_110);
                Py_DECREF(tmp_args_element_value_111);
                Py_DECREF(tmp_args_element_value_112);

                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_e7d109869c580c973c02c71112716569_8->m_frame.f_lineno = 199;
            {
                PyObject *call_args[] = {tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108, tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_111, tmp_args_element_value_112, tmp_args_element_value_113};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS12(tmp_called_value_41, call_args);
            }

            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_103);
            Py_DECREF(tmp_args_element_value_104);
            Py_DECREF(tmp_args_element_value_105);
            Py_DECREF(tmp_args_element_value_106);
            Py_DECREF(tmp_args_element_value_107);
            Py_DECREF(tmp_args_element_value_108);
            Py_DECREF(tmp_args_element_value_109);
            Py_DECREF(tmp_args_element_value_110);
            Py_DECREF(tmp_args_element_value_111);
            Py_DECREF(tmp_args_element_value_112);
            Py_DECREF(tmp_args_element_value_113);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_Xlib$ext$record$$$function__8___init__();

        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_Xlib$ext$record$$$function__9__parse_response();

        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e7d109869c580c973c02c71112716569_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e7d109869c580c973c02c71112716569_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e7d109869c580c973c02c71112716569_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e7d109869c580c973c02c71112716569_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e7d109869c580c973c02c71112716569_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e7d109869c580c973c02c71112716569_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_e7d109869c580c973c02c71112716569_8 == cache_frame_e7d109869c580c973c02c71112716569_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_e7d109869c580c973c02c71112716569_8);
            cache_frame_e7d109869c580c973c02c71112716569_8 = NULL;
        }

        assertFrameObject(frame_e7d109869c580c973c02c71112716569_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_21;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
        }
        branch_yes_28:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__7_EnableContext_193, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto try_except_handler_21;
        }
        branch_no_28:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_43 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_28 = mod_consts[33];
            tmp_args_value_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_28 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_Xlib$ext$record$$$class__7_EnableContext_193;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 193;
            tmp_assign_source_84 = CALL_FUNCTION(tmp_called_value_43, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_84;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_83 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_83);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_Xlib$ext$record$$$class__7_EnableContext_193);
        locals_Xlib$ext$record$$$class__7_EnableContext_193 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$record$$$class__7_EnableContext_193);
        locals_Xlib$ext$record$$$class__7_EnableContext_193 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 193;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_83);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
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
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
        PyObject *tmp_assign_source_85;


        tmp_assign_source_85 = MAKE_FUNCTION_Xlib$ext$record$$$function__10_enable_context();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_85);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_expression_value_74;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[143]);
        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        tmp_assign_source_86 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_86, 0, tmp_tuple_element_29);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_87 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = PyDict_New();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_metaclass_value_8;
        bool tmp_condition_result_43;
        PyObject *tmp_key_value_22;
        PyObject *tmp_dict_arg_value_22;
        PyObject *tmp_dict_arg_value_23;
        PyObject *tmp_key_value_23;
        nuitka_bool tmp_condition_result_44;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        tmp_key_value_22 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_22, tmp_key_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_value_23 = mod_consts[114];
        tmp_metaclass_value_8 = DICT_GET_ITEM0(tmp_dict_arg_value_23, tmp_key_value_23);
        if (tmp_metaclass_value_8 == NULL) {
            tmp_metaclass_value_8 = Py_None;
        }
        assert(!(tmp_metaclass_value_8 == NULL));
        Py_INCREF(tmp_metaclass_value_8);
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        tmp_condition_result_44 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_75 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[32];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_75, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_89 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_89;
    }
    {
        bool tmp_condition_result_45;
        PyObject *tmp_key_value_24;
        PyObject *tmp_dict_arg_value_24;
        tmp_key_value_24 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_24, tmp_key_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[114];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 246;

        goto try_except_handler_22;
    }
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_76 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_76, mod_consts[115]);
        tmp_condition_result_46 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_77 = tmp_class_creation_8__metaclass;
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[115]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        tmp_tuple_element_30 = mod_consts[35];
        tmp_args_value_15 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_30 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 246;
        tmp_assign_source_90 = CALL_FUNCTION(tmp_called_value_44, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_90;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_78 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_78, mod_consts[117]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[118];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[119];
        tmp_getattr_default_8 = mod_consts[120];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_8 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_79;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_79 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_79 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[119]);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 246;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = PyDict_New();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_91;
    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_92;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_Xlib$ext$record$$$class__8_DisableContext_246 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__8_DisableContext_246, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[35];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__8_DisableContext_246, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_24;
        }
        if (isFrameUnusable(cache_frame_a5626468756bfb8a74931d92392aae5b_9)) {
            Py_XDECREF(cache_frame_a5626468756bfb8a74931d92392aae5b_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a5626468756bfb8a74931d92392aae5b_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a5626468756bfb8a74931d92392aae5b_9 = MAKE_FUNCTION_FRAME(codeobj_a5626468756bfb8a74931d92392aae5b, module_Xlib$ext$record, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a5626468756bfb8a74931d92392aae5b_9->m_type_description == NULL);
        frame_a5626468756bfb8a74931d92392aae5b_9 = cache_frame_a5626468756bfb8a74931d92392aae5b_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a5626468756bfb8a74931d92392aae5b_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a5626468756bfb8a74931d92392aae5b_9) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_args_element_value_114;
            PyObject *tmp_called_instance_71;
            PyObject *tmp_args_element_value_115;
            PyObject *tmp_called_instance_72;
            PyObject *tmp_args_element_value_116;
            PyObject *tmp_called_instance_73;
            PyObject *tmp_args_element_value_117;
            PyObject *tmp_called_instance_74;
            tmp_expression_value_80 = PyObject_GetItem(locals_Xlib$ext$record$$$class__8_DisableContext_246, mod_consts[15]);

            if (tmp_expression_value_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_80 == NULL)) {
                        tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_80 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 247;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_80);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[82]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_71 = PyObject_GetItem(locals_Xlib$ext$record$$$class__8_DisableContext_246, mod_consts[15]);

            if (tmp_called_instance_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_71 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_71 == NULL)) {
                        tmp_called_instance_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);

                        exception_lineno = 248;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_71);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_a5626468756bfb8a74931d92392aae5b_9->m_frame.f_lineno = 248;
            tmp_args_element_value_114 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_71,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[131], 0)
            );

            Py_DECREF(tmp_called_instance_71);
            if (tmp_args_element_value_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);

                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_72 = PyObject_GetItem(locals_Xlib$ext$record$$$class__8_DisableContext_246, mod_consts[15]);

            if (tmp_called_instance_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_72 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_72 == NULL)) {
                        tmp_called_instance_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);
                        Py_DECREF(tmp_args_element_value_114);

                        exception_lineno = 249;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_72);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_a5626468756bfb8a74931d92392aae5b_9->m_frame.f_lineno = 249;
            tmp_args_element_value_115 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_72,
                mod_consts[132],
                PyTuple_GET_ITEM(mod_consts[166], 0)
            );

            Py_DECREF(tmp_called_instance_72);
            if (tmp_args_element_value_115 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);
                Py_DECREF(tmp_args_element_value_114);

                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_73 = PyObject_GetItem(locals_Xlib$ext$record$$$class__8_DisableContext_246, mod_consts[15]);

            if (tmp_called_instance_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_73 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_73 == NULL)) {
                        tmp_called_instance_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);
                        Py_DECREF(tmp_args_element_value_114);
                        Py_DECREF(tmp_args_element_value_115);

                        exception_lineno = 250;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_73);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_a5626468756bfb8a74931d92392aae5b_9->m_frame.f_lineno = 250;
            tmp_args_element_value_116 = CALL_METHOD_NO_ARGS(tmp_called_instance_73, mod_consts[134]);
            Py_DECREF(tmp_called_instance_73);
            if (tmp_args_element_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);
                Py_DECREF(tmp_args_element_value_114);
                Py_DECREF(tmp_args_element_value_115);

                exception_lineno = 250;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_called_instance_74 = PyObject_GetItem(locals_Xlib$ext$record$$$class__8_DisableContext_246, mod_consts[15]);

            if (tmp_called_instance_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_74 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_74 == NULL)) {
                        tmp_called_instance_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);
                        Py_DECREF(tmp_args_element_value_114);
                        Py_DECREF(tmp_args_element_value_115);
                        Py_DECREF(tmp_args_element_value_116);

                        exception_lineno = 251;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_74);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_a5626468756bfb8a74931d92392aae5b_9->m_frame.f_lineno = 251;
            tmp_args_element_value_117 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_74,
                mod_consts[106],
                PyTuple_GET_ITEM(mod_consts[145], 0)
            );

            Py_DECREF(tmp_called_instance_74);
            if (tmp_args_element_value_117 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);
                Py_DECREF(tmp_args_element_value_114);
                Py_DECREF(tmp_args_element_value_115);
                Py_DECREF(tmp_args_element_value_116);

                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_a5626468756bfb8a74931d92392aae5b_9->m_frame.f_lineno = 247;
            {
                PyObject *call_args[] = {tmp_args_element_value_114, tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_45, call_args);
            }

            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_114);
            Py_DECREF(tmp_args_element_value_115);
            Py_DECREF(tmp_args_element_value_116);
            Py_DECREF(tmp_args_element_value_117);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__8_DisableContext_246, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a5626468756bfb8a74931d92392aae5b_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a5626468756bfb8a74931d92392aae5b_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a5626468756bfb8a74931d92392aae5b_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a5626468756bfb8a74931d92392aae5b_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a5626468756bfb8a74931d92392aae5b_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a5626468756bfb8a74931d92392aae5b_9,
            type_description_2,
            outline_7_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_a5626468756bfb8a74931d92392aae5b_9 == cache_frame_a5626468756bfb8a74931d92392aae5b_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a5626468756bfb8a74931d92392aae5b_9);
            cache_frame_a5626468756bfb8a74931d92392aae5b_9 = NULL;
        }

        assertFrameObject(frame_a5626468756bfb8a74931d92392aae5b_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_24;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_32;
            } else {
                goto branch_no_32;
            }
        }
        branch_yes_32:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__8_DisableContext_246, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto try_except_handler_24;
        }
        branch_no_32:;
        {
            PyObject *tmp_assign_source_93;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_46 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_32 = mod_consts[35];
            tmp_args_value_16 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_32 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_Xlib$ext$record$$$class__8_DisableContext_246;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 246;
            tmp_assign_source_93 = CALL_FUNCTION(tmp_called_value_46, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_93;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_92 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_92);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_Xlib$ext$record$$$class__8_DisableContext_246);
        locals_Xlib$ext$record$$$class__8_DisableContext_246 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$record$$$class__8_DisableContext_246);
        locals_Xlib$ext$record$$$class__8_DisableContext_246 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 246;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_92);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
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
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
    {
        PyObject *tmp_assign_source_94;


        tmp_assign_source_94 = MAKE_FUNCTION_Xlib$ext$record$$$function__11_disable_context();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_94);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_expression_value_81;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[143]);
        if (tmp_tuple_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        tmp_assign_source_95 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_95, 0, tmp_tuple_element_33);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_96 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = PyDict_New();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_metaclass_value_9;
        bool tmp_condition_result_49;
        PyObject *tmp_key_value_25;
        PyObject *tmp_dict_arg_value_25;
        PyObject *tmp_dict_arg_value_26;
        PyObject *tmp_key_value_26;
        nuitka_bool tmp_condition_result_50;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        tmp_key_value_25 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_25, tmp_key_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_49 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_value_26 = mod_consts[114];
        tmp_metaclass_value_9 = DICT_GET_ITEM0(tmp_dict_arg_value_26, tmp_key_value_26);
        if (tmp_metaclass_value_9 == NULL) {
            tmp_metaclass_value_9 = Py_None;
        }
        assert(!(tmp_metaclass_value_9 == NULL));
        Py_INCREF(tmp_metaclass_value_9);
        goto condexpr_end_17;
        condexpr_false_17:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        tmp_condition_result_50 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_82 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[32];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_82, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_18:;
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_98 = SELECT_METACLASS(tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_98;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_key_value_27;
        PyObject *tmp_dict_arg_value_27;
        tmp_key_value_27 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_27, tmp_key_value_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = mod_consts[114];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 260;

        goto try_except_handler_25;
    }
    branch_no_33:;
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_expression_value_83;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_83 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_83, mod_consts[115]);
        tmp_condition_result_52 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_84 = tmp_class_creation_9__metaclass;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[115]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        tmp_tuple_element_34 = mod_consts[36];
        tmp_args_value_17 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_34 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 260;
        tmp_assign_source_99 = CALL_FUNCTION(tmp_called_value_47, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_99;
    }
    {
        bool tmp_condition_result_53;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_85;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_85 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_85, mod_consts[117]);
        tmp_operand_value_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        tmp_condition_result_53 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[118];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[119];
        tmp_getattr_default_9 = mod_consts[120];
        tmp_tuple_element_35 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_9 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_86;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_86 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_86 == NULL));
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[119]);
            Py_DECREF(tmp_expression_value_86);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 260;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = PyDict_New();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_100;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_101;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_Xlib$ext$record$$$class__9_FreeContext_260 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__9_FreeContext_260, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__9_FreeContext_260, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_27;
        }
        if (isFrameUnusable(cache_frame_b86b0ee285c73436bd27f178aa0385d1_10)) {
            Py_XDECREF(cache_frame_b86b0ee285c73436bd27f178aa0385d1_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b86b0ee285c73436bd27f178aa0385d1_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b86b0ee285c73436bd27f178aa0385d1_10 = MAKE_FUNCTION_FRAME(codeobj_b86b0ee285c73436bd27f178aa0385d1, module_Xlib$ext$record, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b86b0ee285c73436bd27f178aa0385d1_10->m_type_description == NULL);
        frame_b86b0ee285c73436bd27f178aa0385d1_10 = cache_frame_b86b0ee285c73436bd27f178aa0385d1_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_b86b0ee285c73436bd27f178aa0385d1_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b86b0ee285c73436bd27f178aa0385d1_10) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_args_element_value_118;
            PyObject *tmp_called_instance_75;
            PyObject *tmp_args_element_value_119;
            PyObject *tmp_called_instance_76;
            PyObject *tmp_args_element_value_120;
            PyObject *tmp_called_instance_77;
            PyObject *tmp_args_element_value_121;
            PyObject *tmp_called_instance_78;
            tmp_expression_value_87 = PyObject_GetItem(locals_Xlib$ext$record$$$class__9_FreeContext_260, mod_consts[15]);

            if (tmp_expression_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_expression_value_87 == NULL)) {
                        tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_expression_value_87 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 261;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_87);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[82]);
            Py_DECREF(tmp_expression_value_87);
            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_75 = PyObject_GetItem(locals_Xlib$ext$record$$$class__9_FreeContext_260, mod_consts[15]);

            if (tmp_called_instance_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_75 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_75 == NULL)) {
                        tmp_called_instance_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);

                        exception_lineno = 262;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_75);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_b86b0ee285c73436bd27f178aa0385d1_10->m_frame.f_lineno = 262;
            tmp_args_element_value_118 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_75,
                mod_consts[83],
                PyTuple_GET_ITEM(mod_consts[131], 0)
            );

            Py_DECREF(tmp_called_instance_75);
            if (tmp_args_element_value_118 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);

                exception_lineno = 262;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_76 = PyObject_GetItem(locals_Xlib$ext$record$$$class__9_FreeContext_260, mod_consts[15]);

            if (tmp_called_instance_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_76 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_76 == NULL)) {
                        tmp_called_instance_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);
                        Py_DECREF(tmp_args_element_value_118);

                        exception_lineno = 263;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_76);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_b86b0ee285c73436bd27f178aa0385d1_10->m_frame.f_lineno = 263;
            tmp_args_element_value_119 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_76,
                mod_consts[132],
                PyTuple_GET_ITEM(mod_consts[167], 0)
            );

            Py_DECREF(tmp_called_instance_76);
            if (tmp_args_element_value_119 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_118);

                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_77 = PyObject_GetItem(locals_Xlib$ext$record$$$class__9_FreeContext_260, mod_consts[15]);

            if (tmp_called_instance_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_77 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_77 == NULL)) {
                        tmp_called_instance_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);
                        Py_DECREF(tmp_args_element_value_118);
                        Py_DECREF(tmp_args_element_value_119);

                        exception_lineno = 264;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_77);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_b86b0ee285c73436bd27f178aa0385d1_10->m_frame.f_lineno = 264;
            tmp_args_element_value_120 = CALL_METHOD_NO_ARGS(tmp_called_instance_77, mod_consts[134]);
            Py_DECREF(tmp_called_instance_77);
            if (tmp_args_element_value_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_118);
                Py_DECREF(tmp_args_element_value_119);

                exception_lineno = 264;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_called_instance_78 = PyObject_GetItem(locals_Xlib$ext$record$$$class__9_FreeContext_260, mod_consts[15]);

            if (tmp_called_instance_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_78 = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_called_instance_78 == NULL)) {
                        tmp_called_instance_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_called_instance_78 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);
                        Py_DECREF(tmp_args_element_value_118);
                        Py_DECREF(tmp_args_element_value_119);
                        Py_DECREF(tmp_args_element_value_120);

                        exception_lineno = 265;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_78);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            frame_b86b0ee285c73436bd27f178aa0385d1_10->m_frame.f_lineno = 265;
            tmp_args_element_value_121 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_78,
                mod_consts[106],
                PyTuple_GET_ITEM(mod_consts[145], 0)
            );

            Py_DECREF(tmp_called_instance_78);
            if (tmp_args_element_value_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_118);
                Py_DECREF(tmp_args_element_value_119);
                Py_DECREF(tmp_args_element_value_120);

                exception_lineno = 265;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            frame_b86b0ee285c73436bd27f178aa0385d1_10->m_frame.f_lineno = 261;
            {
                PyObject *call_args[] = {tmp_args_element_value_118, tmp_args_element_value_119, tmp_args_element_value_120, tmp_args_element_value_121};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_48, call_args);
            }

            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_118);
            Py_DECREF(tmp_args_element_value_119);
            Py_DECREF(tmp_args_element_value_120);
            Py_DECREF(tmp_args_element_value_121);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__9_FreeContext_260, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b86b0ee285c73436bd27f178aa0385d1_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b86b0ee285c73436bd27f178aa0385d1_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b86b0ee285c73436bd27f178aa0385d1_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b86b0ee285c73436bd27f178aa0385d1_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b86b0ee285c73436bd27f178aa0385d1_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b86b0ee285c73436bd27f178aa0385d1_10,
            type_description_2,
            outline_8_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_b86b0ee285c73436bd27f178aa0385d1_10 == cache_frame_b86b0ee285c73436bd27f178aa0385d1_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b86b0ee285c73436bd27f178aa0385d1_10);
            cache_frame_b86b0ee285c73436bd27f178aa0385d1_10 = NULL;
        }

        assertFrameObject(frame_b86b0ee285c73436bd27f178aa0385d1_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_27;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_54;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_54 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_54 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
        }
        branch_yes_36:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_Xlib$ext$record$$$class__9_FreeContext_260, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_27;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_49 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_36 = mod_consts[36];
            tmp_args_value_18 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_36 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_Xlib$ext$record$$$class__9_FreeContext_260;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_706066665577635d1dcb44c5688a374d->m_frame.f_lineno = 260;
            tmp_assign_source_102 = CALL_FUNCTION(tmp_called_value_49, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_102;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_101 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_101);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_Xlib$ext$record$$$class__9_FreeContext_260);
        locals_Xlib$ext$record$$$class__9_FreeContext_260 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Xlib$ext$record$$$class__9_FreeContext_260);
        locals_Xlib$ext$record$$$class__9_FreeContext_260 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 260;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_101);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
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
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_706066665577635d1dcb44c5688a374d);
#endif
    popFrameStack();

    assertFrameObject(frame_706066665577635d1dcb44c5688a374d);

    goto frame_no_exception_10;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_706066665577635d1dcb44c5688a374d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_706066665577635d1dcb44c5688a374d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_706066665577635d1dcb44c5688a374d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_706066665577635d1dcb44c5688a374d, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_10:;
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
    {
        PyObject *tmp_assign_source_103;


        tmp_assign_source_103 = MAKE_FUNCTION_Xlib$ext$record$$$function__12_free_context();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;


        tmp_assign_source_104 = MAKE_FUNCTION_Xlib$ext$record$$$function__13_init();

        UPDATE_STRING_DICT1(moduledict_Xlib$ext$record, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_104);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Xlib.ext.record", false);

    Py_INCREF(module_Xlib$ext$record);
    return module_Xlib$ext$record;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Xlib$ext$record", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
