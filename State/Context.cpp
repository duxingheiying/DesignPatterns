#include "Context.h"
#include "State.h"

Context::Context()
{
}

Context::Context(State* state)
{
	this->state = state;
}

Context::~Context()
{
	delete state;
}

void Context::OpratinInterface()
{
	state->OperationInterface(this);
}

bool Context::ChangeState(State* state)
{
	this->state = state;
	return true;
}

void Context::OperationChangState()
{
	state->OperationChangeState(this);
}