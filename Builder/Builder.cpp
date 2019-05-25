// Builder.cpp
#include "Builder.h"
#include "Product.h"

#include <iostream>
using namespace std;

Builder::Builder()
{
}

Builder::~Builder()
{
}

ConcreteBuilder::ConcreteBuilder()
{
}

ConcreteBuilder::~ConcreteBuilder()
{
}

void ConcreteBuilder::BuildPartA(const string& buildPata)
{
	cout << "Step1: BuiuldPartA..." << buildPata << endl;
}
void ConcreteBuilder::BuildPartB(const string& buildPata)
{
	cout << "Step1: BuiuldPartB..." << buildPata << endl;
}
void ConcreteBuilder::BuildPartC(const string& buildPata)
{
	cout << "Step1: BuiuldPartC..." << buildPata << endl;
}

Product* ConcreteBuilder::GetProduct()
{
	BuildPartA("Pre-defined");
	BuildPartB("Pre-defined");
	BuildPartC("Pre-defined");

	return new Product();
}