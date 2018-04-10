// InlineNamespace.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
namespace A {

#ifdef __cplusplus
	inline namespace version_new 	{
		void f() { std::cout << "Inline Ver New f()\n"; }
	}
#else
	inline namespace version_old
	{
		void f() { std::cout << "Inline Ver Old f()\n"; }
	}
#endif
	inline namespace nested 	{
		void f(int i) { std::cout << "Inline Nested f(int )\n"; }
	}
}

int main()
{
	A::f();  A::f(3); A::nested::f(4);
	system("pause");

    return 0;
}

