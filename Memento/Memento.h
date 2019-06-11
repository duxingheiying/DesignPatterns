// Memento.h
#ifndef _MEMENTO_H_
#define _MEMENTO_H_
#include<string>
using namespace std;
class Memento;

class Originator
{
public:
	typedef string State;
	Originator();
	Originator(const State& sdt);
	~Originator();
	Memento* CreateMemento();
	void SetMenento(Memento*men);
	void RestoreToMemento(Memento* mt);
	State GetState();
	void SetState(const State& std);
	void PrintState();

private:
	State _sdt;
	Memento* _mt;
};

class Memento
{
public:
private:
	friend class Originator;
	typedef string State;
	Memento();
	Memento(const State& sdt);
	~Memento();
	void SetState(const State& sdt);
	State GetState();

private:
	State _sdt;
};

#endif // !_MEMENTO_H_
