#include "AbstractionImp.h"

#include <iostream>
using namespace std;

AbstractionImp::AbstractionImp()
{
}

AbstractionImp::~AbstractionImp()
{
}

void AbstractionImp::Operation()
{
	cout << "AbstractionImp ...imp" << endl;
}

ConcreteAbstractionA::ConcreteAbstractionA()
{

}

ConcreteAbstractionA::~ConcreteAbstractionA()
{

}

void ConcreteAbstractionA::Operation()
{
	cout << "ConcreteAbstractionA" << endl;
}

ConcreteAbstractionB::ConcreteAbstractionB()
{

}

ConcreteAbstractionB::~ConcreteAbstractionB()
{

}

void ConcreteAbstractionB::Operation()
{
	cout << "ConcreteAbstractionB" << endl;
}