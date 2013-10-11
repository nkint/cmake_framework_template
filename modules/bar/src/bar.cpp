#include "bar/bar.h"

#include <iostream>

void Bar::bar() {
    std::cout << "baar" << std::endl;
    foo.foo();
}
