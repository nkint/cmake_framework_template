first test, kind of cmake hello world.
a simple plain cpp program that uses
the module foo.

example of shadow build:
(starting from the repository root)
$ mkdir build
$ cd build
$ mkdir test1
$ cmake ../../apps/test1
$ make
$ ./test1
