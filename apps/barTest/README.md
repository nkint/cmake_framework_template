a plain cpp program that uses
the module bar.

note that bar module need itself the module foo.
so you have to add in the barTest/CMakeLists.txt
the module foo before the module bar:

find_package(foo)
find_package(bar)
