// UsingFunction.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

namespace A {
	void f() { cout << "A::f\n"; }
}

void f() { cout << "f\n"; }

namespace B {
	void  f() { cout << "B::f\n"; }
}


int main() {
	f(); A::f(); B::f();
	// out - f A::f B::f
	using A::f;
	::f(); f(); A::f(); B::f();
	// out - f A::f A::f B::f
	using B::f;
	//f(); -error - isn't overloading
	::f(); A::f(); B::f();
	// out - f A::f B::f

	return 1;
}



