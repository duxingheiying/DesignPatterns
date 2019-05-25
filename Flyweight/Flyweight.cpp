// Flyweight.cpp

#include "Flyweight.h"

Flyweight::Flyweight(string intrinsicState)
{
	this->_intrisicState = intrinsicState;
}

Flyweight::~Flyweight()
{
}

void Flyweight::Operation(const string& extrinsicSate)
{

}

string Flyweight::GetIntrinssicState()
{
	return this->_intrisicState;
}

ConcreteFlyweight::ConcreteFlyweight(string intrinsicSate) :
	Flyweight(intrinsicSate)
{
	cout << "ConcreteFlyweight Build....." << intrinsicSate << endl;
}

ConcreteFlyweight::~ConcreteFlyweight()
{
}

void ConcreteFlyweight::Operation(const string& extrinsicSate)
{
	cout << " ConcreteFlyweight: ÄÚÔÌ [" << this->GetIntrinssicState() << "]  ÍâÔÌ [" << extrinsicSate << "]" << endl;
}
