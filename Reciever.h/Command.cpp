// Composite.cpp
#include "Reciever.h"
#include "Command.h"

Command::Command()
{
}

Command::~Command()
{
}

ConcreteCommand::ConcreteCommand(Reciever* rev)
{
	_rev = rev;
}

ConcreteCommand::~ConcreteCommand()
{

}

void ConcreteCommand::Excute()
{
	_rev->Action();
}