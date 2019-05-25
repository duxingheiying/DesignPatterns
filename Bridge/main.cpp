// main.cpp

#include "Abstraction.h"
#include "AbstractionImp.h"

#include <iostream>
using namespace std;

int main()
{
	AbstractionImp* imp = new ConcreteAbstractionA();
	Abstraction* abs = new RefineAbstraction(imp);
	abs->Operation();

	system("pause");
	return 0;
}