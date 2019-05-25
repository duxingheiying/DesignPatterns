// Flyweight.h

#ifndef _FLYWEIGHT_H_
#define _FLYWEIGHT_H_

#include <iostream>
#include <string>
using namespace std;

class Flyweight
{
public:
	~Flyweight();
	virtual void Operation(const string& extrimsicState);
	string GetIntrinssicState();

protected:
	Flyweight(string intrinsicState);

private:
	string _intrisicState;
};

class ConcreteFlyweight :public Flyweight
{
public:
	ConcreteFlyweight(string intrinsicState);
	~ConcreteFlyweight();

	void Operation(const string& extrinsicState);

protected:

private:

};

#endif // !_FLYWEIGHT_H_

