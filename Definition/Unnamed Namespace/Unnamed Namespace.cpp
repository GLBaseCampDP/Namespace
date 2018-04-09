// Unnamed Namespace.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>

#include <iostream>
namespace {
	int i = 5;
}

namespace A {
	int i = 1;
}

int main() {
	std::cout << ::i << ' ' << i << ' ' << A::i;
	using namespace A;
	//i = 10; - error
	::i = 10;
	A::i = 19;
	std::cout << ::i << ' ' << A::i;
	return 1;
}

