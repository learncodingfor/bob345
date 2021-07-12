from distutils.core import setup, Extension
setup(name = 'myModule','version = '1.0',  \
   ext_modules = [Extension('ftputs,c', ['ftputs.c'])])
   ext_modules = [Extensions('myModule', ['test.c'])])
