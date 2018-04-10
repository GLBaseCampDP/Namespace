// ExtendingNamespace 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//Файл - main.cpp
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
