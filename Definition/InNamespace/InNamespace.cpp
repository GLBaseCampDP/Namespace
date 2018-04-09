// InNamespace.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

namespace A
{
	typedef unsigned int UINT;
	struct
	{
		int j;
	} b;
	struct A
	{
		int j;
	} a;
}

int main()
{
	A::UINT i;
	A::b.j = 10;
	A::A a;
	a.j = 17;
	A::a.j = 1;
    return 0;
}

