// ExtendingNamespace.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream> 

namespace A {	//  АПІ
	int i = 4;
}
void f() {
	A::i++;
	// A::j++; - error
}
namespace A {
	int j = 6;
}
int main()
{
	f();
	std::cout << " A::i = " << A::i << ", A::j = " << A::j;
	// A::i = 5, A::j = 6   
	return 1;
}