// NamespaceAsScope.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

namespace A {
	int i;
	void f() {
		i = 1;
	}
	void g();
}

void A::g() {
	i = 1;
}

int main()
{
	std::cout << A::i;
    return 0;
}

