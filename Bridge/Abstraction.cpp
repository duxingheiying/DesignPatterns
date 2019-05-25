#include "Abstraction.h"
#include "AbstractionImp.h"

#include <iostream>
using namespace std;

Abstraction::Abstraction()
{

}

Abstraction::~Abstraction()
{

}

RefineAbstraction::RefineAbstraction(AbstractionImp* imp)
{
	_imp = imp;
}

RefineAbstraction::~RefineAbstraction()
{

}

void RefineAbstraction::Operation()
{
	_imp->Operation();
}