# $OpenBSD$

from distutils.core import setup

setup(
    name = "json-py",
    version = "3.4",
    description = "implementation of a JSON reader and writer in Python",
    author = "Patrick Dlogan",
    author_email = "patrickdlogan@stardecisions com",
    license = "LGPL",
    url = "http://sourceforge.net/projects/json-py/",
    py_modules=["json", "minjson","jsontest"],
)
