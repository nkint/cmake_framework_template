#include <iostream>

#include "foo.h"

int main() {
	std::cout << "main" << std::endl;

	Foo foo;
	foo.foo();

	return 0;
}