#include "Subject.h"
#include "Observer.h"
#include <iostream>
#include <list>
using namespace std;
typedef string state;

Subject::Subject()
{
	_obvs = new list<Observer*>;
}

Subject::~Subject()
{
}

void Subject::Attach(Observer* obv)
{
	_obvs->push_back(obv);
}

void Subject::Detach(Observer* obv)
{
	if (obv != NULL)
		_obvs->remove(obv);
}

//void Subject::SetSate(const State&st)
//{
//
//}

//State Subject::GetState()
//{
//	State _state;
//	return _state;
//}


void Subject::Notify()
{
	list<Observer*>::iterator it;
	it = _obvs->begin();
	for (;it != _obvs->end(); it++)
	{
		(*it)->Update(this);
	}
}

ConcreteSubject::ConcreteSubject()
{
	_st = '\0';
}

ConcreteSubject::~ConcreteSubject()
{
}

State ConcreteSubject::GetState()
{
	return _st;
}

void ConcreteSubject::SetState(const State& st)
{
	_st = st;
}