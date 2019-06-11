// Invoker.cpp
#include "Reciever.h"
#include "Command.h"
#include "Invoker.h"

Invoker::Invoker(Command* cmd)
{
	_cmd = cmd;
}

Invoker::~Invoker()
{

}

void Invoker::Invoke()
{
	_cmd->Excute();
}