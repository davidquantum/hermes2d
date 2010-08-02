/* Generated by convert_api.py on Thu Jul 08 21:06:33 2010 */

#ifndef __PYX_HAVE_API___hermes_common
#define __PYX_HAVE_API___hermes_common

// To avoid compilation warnings:
#undef _XOPEN_SOURCE
#undef _POSIX_C_SOURCE

#include "Python.h"

#include <complex>
typedef ::std::complex<double> __pyx_t_double_complex;

extern PyObject *(*c2numpy_int)(int *, int);
extern PyObject *(*c2numpy_double)(double *, int);
extern void (*numpy2c_double_inplace)(PyObject *, double **, int *);
extern void (*numpy2c_int_inplace)(PyObject *, int **, int *);
extern PyObject *(*c2py_AVector)(struct AVector *);
extern PyObject *(*c2py_DenseMatrix)(struct DenseMatrix *);
#ifdef _MSC_VER
extern PyObject *(*c2py_CooMatrix)(class CooMatrix *);
extern PyObject *(*c2py_CSRMatrix)(class CSRMatrix *);
extern PyObject *(*c2py_CSCMatrix)(class CSCMatrix *);
#else
extern PyObject *(*c2py_CooMatrix)(struct CooMatrix *);
extern PyObject *(*c2py_CSRMatrix)(struct CSRMatrix *);
extern PyObject *(*c2py_CSCMatrix)(struct CSCMatrix *);
#endif
extern PyObject *(*c2py_CooMatrix)(struct CooMatrix *);
extern PyObject *(*c2py_CSRMatrix)(struct CSRMatrix *);
extern PyObject *(*c2py_CSCMatrix)(struct CSCMatrix *);
extern PyObject *(*namespace_create)(void);
extern void (*namespace_push)(PyObject *, const char*, PyObject *);
extern void (*namespace_print)(PyObject *);
extern PyObject *(*namespace_pull)(PyObject *, const char*);
extern void (*cmd)(const char*);
extern void (*set_verbose_cmd)(int);
extern void (*insert_object)(const char*, PyObject *);
extern PyObject *(*get_object)(const char*);
extern PyObject *(*c2py_int)(int);
extern int (*py2c_int)(PyObject *);
extern char *(*py2c_str)(PyObject *);
extern double (*py2c_double)(PyObject *);
extern PyObject *(*c2numpy_int_inplace)(int *, int);
extern PyObject *(*c2numpy_double_inplace)(double *, int);
extern PyObject *(*c2numpy_double_complex_inplace)(__pyx_t_double_complex *, int);
extern void (*numpy2c_double_complex_inplace)(PyObject *, __pyx_t_double_complex **, int *);
extern void (*run_cmd)(const char*, PyObject *);

extern int import__hermes_common(void);

#endif
