// Aliases.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
namespace Aaa {
	int i;
}

namespace A = Aaa;

namespace B {
	using Aaa::i;
}

void main() {
	std::cin >> Aaa::i;
	std::cout << B::i << A::i;
}
