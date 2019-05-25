// Prototype
#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

class Prototype
{
public:
	virtual ~Prototype();
	virtual Prototype * Clone() const = 0;

protected:
	Prototype();

private:
};

class  ConcretePrototye : public Prototype
{
public:
	 ConcretePrototye();
	 ConcretePrototye(const ConcretePrototye& cp);
	~ ConcretePrototye();
	Prototype* Clone() const;

protected:

private:

private:

};

#endif

