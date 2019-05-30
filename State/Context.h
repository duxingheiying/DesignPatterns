// context.h

#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class State;

class Context
{
public:
	Context();
	Context(State*state);
	~Context();
	void OpratinInterface();
	void OperationChangState();

protected:

private:
	friend class State;
	bool ChangeState(State* state);

private:
	State* state;

};

#endif // !_CONTEXT_H_
