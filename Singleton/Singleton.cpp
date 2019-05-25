#include "Singleton.h"

#include <iostream>
using namespace std;

Singleton* Singleton::_instance = nullptr;

Singleton::Singleton()
{
	cout << "Sigleton" << endl;
}

Singleton * Singleton::Instance()
{
	if (_instance == nullptr)
	{
		_instance = new Singleton();
	}

	return _instance;
}

Singleton::~Singleton()
{
}