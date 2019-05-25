#include "Foctory.h"
#include "Product.h"

#include <iostream>
using namespace std;

Foctory::Foctory()
{
}

Foctory::~Foctory()
{
}

ConcreteFactory::ConcreteFactory()
{
}

ConcreteFactory::~ConcreteFactory()
{
}

Product* ConcreteFactory::CreateProduct()
{
	return new ConcreteProduct();
}