// main.cpp

#include "Context.h"
#include "State.h"
#include <iostream>
using namespace std;
int main()
{
	State*st = new ConcreteStateA();
	Context*con = new Context(st);
	con->OpratinInterface();
	con->OpratinInterface();
	con->OpratinInterface();
	if (con != NULL)
		delete con;
	if (st != NULL)
		delete st;
	system("pause");
	return 0;
}