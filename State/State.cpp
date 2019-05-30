#include "State.h"
#include "Context.h"
#include <iostream>
using namespace std;

State::State()
{
}

State::~State()
{
}

void State::OperationInterface(Context* com)
{
	cout << "State" << endl;
}

void State::OperationChangeState(Context* com)
{
}

bool State::ChangeState(Context* com, State* st)
{
	com->ChangeState(st);
	return true;
}

ConcreteStateA::ConcreteStateA()
{
}

ConcreteStateA::~ConcreteStateA()
{
}

void ConcreteStateA::OperationInterface(Context* com)
{
	cout << "ConctrteStateA::OpertionInterface......." << endl;
}

void ConcreteStateA::OperationChangeState(Context* com)
{
	OperationInterface(com);
	this->ChangeState(com, new ConcreteStateB);
}


ConcreteStateB::ConcreteStateB()
{
}

ConcreteStateB::~ConcreteStateB()
{
}

void ConcreteStateB::OperationInterface(Context* con)
{
	cout << "ConcreteStateB::OperationInterface......" << endl;
}

void ConcreteStateB::OperationChangeState(Context* com)
{
	OperationInterface(com);
	this->ChangeState(com, new ConcreteStateA());
}