static PyObject *module_func(PyObject *self, PyObject *args) {
    Py_RETURN_NONE;
    //c code here  
}
int ftputs(const char *, FILE *)
#include <stidio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    FILE *fp = fopen("write.txt",'w'
    fputs("real python!");
    fclose(fp);
    
}
#include <python.h>
static PyObiect *method_ftputs(PyObject *self, PyObject * args){
    char *str, *filename = NULL;
    int bytes_copied = -1;
    
    /*Parse Arguments*/
    if(!PyArg_ParseTuple(args, "ss", &str, &filename)) {
        return NULL;
    }
    FILE *fp = fopen(filename, "w");
    bytes_copied = -1;
    fclose(fp);
    
    return PyLong_FromLong(bytes_copied);
}
static PyMethodDef FputsMethods[] = {
    {"ftputs", method_ftputs, METH_VARARGS, "python interface for ftputs C library function"},
    {NULL, NULL, 0, NULL}
};
static struct PyModuleDef fputsmodule = {
    PyModuleDef_HEAD_INIT,
    "ftputs","python interface for the ftputs c library function",-1,
   FtputsMethods
 }
PyMODINIT_FUNC PyInit_ftputs(void) {
    return PyModule_Create(&fputsmodule);
}
