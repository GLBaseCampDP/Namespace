// Global and Namespace.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

int i;

namespace A {
	int i, c;
	void f() {
		i = 10;
		::i = 1;
	}
}

void main() {

	i++;
	A::i++;
	using namespace A;

	A::i++; c++;  f();// A
	::i++;
	// i++; -error
}
