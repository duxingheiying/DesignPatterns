// Abstraction.h

#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_

class AbstractionImp;

class Abstraction
{
public:
	virtual ~Abstraction();
	virtual void Operation() = 0;

protected:
	Abstraction();

private:
};

class RefineAbstraction : public Abstraction
{
public:
	RefineAbstraction(AbstractionImp* imp);
	~RefineAbstraction();
	void Operation();

protected:

private:
	AbstractionImp* _imp;
};

#endif // !_ABSTRACTION_H_

