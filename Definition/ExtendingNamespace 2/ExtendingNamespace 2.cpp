// ExtendingNamespace 2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
//���� - main.cpp
#include <iostream>
#include "var.h"
namespace A
{
	int z = 7;
}
void main()
{
	A::f();
	std::cout << " A::i = " << A::i << ", A::z = " << A::z
		<< std::endl;
}
