first test, kind of cmake hello world.
a simple plain cpp program that uses
the module foo.

example of shadow build:
(starting from the repository root)
$ cd build
$ mkdir fooTest
$ cmake ../../apps/fooTest
$ make
$ cd bin
$ ./fooTest
