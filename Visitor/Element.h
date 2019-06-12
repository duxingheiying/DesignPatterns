// Element.h
#ifndef _ELEMENT_H_
#define _ELEMENT_H_

class Visitor;

class Element
{
public:
	Element();
	~Element();
	virtual void Accept(Visitor* vis);
};

class ConcreteElementA : public Element
{
public:
	ConcreteElementA();
	~ConcreteElementA();
	virtual void Accept(Visitor* vis);
};

class ConcreteElementB : public Element
{
public:
	ConcreteElementB();
	~ConcreteElementB();
	virtual void Accept(Visitor* vis);
};

#endif // !_ELEMENT_H_
