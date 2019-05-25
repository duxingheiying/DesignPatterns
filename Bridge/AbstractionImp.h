// AbstractionImp.h

#ifndef _ABSTRACTIONIMP_H_
#define _ABSTRACTIONIMP_H_

class AbstractionImp
{
public:
	~AbstractionImp();
	virtual void Operation() = 0;

protected:
	AbstractionImp();

private:

};

class ConcreteAbstractionA : public AbstractionImp
{
public:
	ConcreteAbstractionA();
	~ConcreteAbstractionA();
	virtual void Operation();

protected:

private:

};

class ConcreteAbstractionB : public AbstractionImp
{
public:
	ConcreteAbstractionB();
	~ConcreteAbstractionB();
	virtual void Operation();

protected:

private:

};


#endif // !_ABSTRACTIONIMP_H_
