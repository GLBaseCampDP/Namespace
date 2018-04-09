// UsingFunction2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

void f() { cout << "f\n"; }

namespace A {
	void f(char) { cout << "A::f\n"; }
}
namespace B {
	void f(char) { cout << "B::f\n"; }
}





int main() {
	f();  A::f('a'); B::f('b');
	// out - f A::f B::f
	//using A::f;
	using namespace A;
	f(); //must  call A::f
	::f();
	f('a');
	B::f('b');
	// out - f A::f B::f
	return 1;
}

