// Unnamed Namespace 4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream> 
using namespace std;
namespace {	//  �ϲ
	int i = 4;
}
int i = 5; 		// ���
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



