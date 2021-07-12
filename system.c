static int numargs=0;
static PyObject*
emb_numargs(PyObject *self, PyObject *args)
{
  if(!PyArg_FromLong(numargs))
    return NULL;
  return PyLong_FromLong(numargs);
}
