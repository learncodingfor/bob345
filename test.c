// Function 1: A simple 'hello world' function
static PyObject* helloworld(PyObject* self, PyObject* args)
{
    printf("Hello World!\n");
    return Py_None;
}

// Our Module's Function Definition struct
// We require this `NULL` to signal the end of our method
// definition
static PyMethodDef myMethods[] = {
    { "helloWorld", helloworld, METH_NOARGS, "Prints Hello World" },
    { NULL, NULL, 0, NULL }
};

// Our Module Definition struct
static struct PyModuleDef myModule = {
    PyModuleDef_HEAD_INIT,
    "myModule",
    "Test Module",
    -1,
    myMethods
};

// Initializes our module using our above struct
PyMODINIT_FUNC PyInit_myModule(void)
{
    return PyModule_Create(&myModule);
}
int Cfib(int n)
{
    if (n < 2)
        return n;
    else
        return Cfib(n-1)+Cfib(n-2);
}
// Our Python binding to our C function
// This will take one and only one non-keyword argument
static PyObject* fib(PyObject* self, PyObject* args)
{
    // instantiate our `n` value
    int n;
    // if our `n` value
    if(!PyArg_ParseTuple(args, "i", &n))
        return NULL;
    // return our computed fib number
    return Py_BuildValue("i", Cfib(n));
}
static PyObject *module_func(PyObject *self, PyObject *args) {
    Py_RETURN_NONE;
    //c code here
    
}
int ftputs(const char *, FILE *)
#include <stidio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    FILE *fp = fopen("write.txt",'w');
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
