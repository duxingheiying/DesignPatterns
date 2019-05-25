#include "Foctory.h"
#include "Product.h"

#include <iostream>
using namespace std;

int main()
{
	Foctory* fac = new ConcreteFactory();
	Product* p = fac->CreateProduct();
	system("pause");
	return 0;
}