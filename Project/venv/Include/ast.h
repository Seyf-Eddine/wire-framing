<<<<<<< Updated upstream
#ifndef Py_AST_H
#define Py_AST_H
#ifdef __cplusplus
extern "C" {
#endif

PyAPI_FUNC(int) PyAST_Validate(mod_ty);
PyAPI_FUNC(mod_ty) PyAST_FromNode(
    const node *n,
    PyCompilerFlags *flags,
    const char *filename,       /* decoded from the filesystem encoding */
    PyArena *arena);
PyAPI_FUNC(mod_ty) PyAST_FromNodeObject(
    const node *n,
    PyCompilerFlags *flags,
    PyObject *filename,
    PyArena *arena);

#ifdef __cplusplus
}
#endif
#endif /* !Py_AST_H */
|||||||
=======
#ifndef Py_AST_H
#define Py_AST_H
#ifdef __cplusplus
extern "C" {
#endif

PyAPI_FUNC(mod_ty) PyAST_FromNode(const node *, PyCompilerFlags *flags,
				  const char *, PyArena *);

#ifdef __cplusplus
}
#endif
#endif /* !Py_AST_H */
>>>>>>> Stashed changes
