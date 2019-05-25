// main.cpp
#include "Protoype.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	Prototype* p = new ConcretePrototye();
	Prototype* p1 = p->Clone();
	system("pause");
	return 0;
}