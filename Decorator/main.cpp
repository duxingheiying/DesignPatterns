#include <iostream>
#include "Decorator.h"
using namespace std;
int main(int argc, char* argv[])
{
	Component* com = new ConcreteComponent();
	Decorator* dec = new ConcreteDecorator(com);
	dec->Operation();
	delete dec;
	system("pause");
	return 0;
}