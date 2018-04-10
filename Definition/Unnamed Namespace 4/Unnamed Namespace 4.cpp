// Unnamed Namespace 4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream> 
using namespace std;
namespace {	//  АПІ
	int i = 4;
}
int i = 5; 		// ГОВ
namespace A {
	int i = 6;
}
int main()
{
	// i++; -error
	cout << " A::i = " << A::i << ", Global::i = " << ::i;
	//out -  A::i = 6, Global::i = 5
	return 1;
}



