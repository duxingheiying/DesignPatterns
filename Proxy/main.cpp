// main.cpp

#include "Proxy.h"
#include <iostream>
using namespace std;

int main(int argv, char* argc[])
{
	Subject* sub = new ConcreteSubject();
	Proxy* p = new Proxy(sub);
	p->Request();

	system("pause");
	return 0;
}