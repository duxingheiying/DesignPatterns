// FlyweightFactory.cpp

#include "FlyweightFactory.h"
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

FlyweightFactory::FlyweightFactory()
{

}

FlyweightFactory::~FlyweightFactory()
{

}

Flyweight* FlyweightFactory::GetFlyweight(const string&key)
{
	vector<Flyweight*>::iterator it = _fly.begin();

	for (; it != _fly.end(); it++)
	{
		// 找到就一起用
		if ((*it)->GetIntrinssicState() == key)
		{
			cout << "already created created by users......" << endl;
			return *it;
		}
	}

	Flyweight* fn = new ConcreteFlyweight(key);
	_fly.push_back(fn);
	return fn;
}