#include "AbstractFactory.h"
#include "Product.h"

#include <iostream>
using namespace std;

int main()
{
	AbstractFactory * fac1 = new ConcreteFactory1();
	AbstractFactory * fac2 = new ConcreteFactory2();

	fac1->CreateProductA();
	fac1->CreateProductB();

	fac2->CreateProductA();
	fac2->CreateProductB();

	system("pause");
	return 0;
}