#include "Protoype.h"

#include <iostream>
using namespace std;

Prototype::Prototype()
{

}

Prototype::~Prototype()
{

}

Prototype* Prototype::Clone() const
{
	return 0;
}

ConcretePrototye::ConcretePrototye()
{

}

ConcretePrototye::~ConcretePrototye()
{

}

ConcretePrototye::ConcretePrototye(const ConcretePrototye& cp)
{
	cout << "Concretetype copy..." << endl;
}

Prototype* ConcretePrototye::Clone() const
{
	return new ConcretePrototye(*this);
}