// Builder.h
#ifndef _BUILDER_H_
#define _BUILDER_H_

#include <string>
using namespace std;

class Product;
class Builder
{
public:
	virtual ~Builder();
	virtual void BuildPartA(const string& buildPata) = 0;
	virtual void BuildPartB(const string& buildPata) = 0;
	virtual void BuildPartC(const string& buildPata) = 0;
	virtual Product* GetProduct() = 0;

protected:
	Builder();
};

class ConcreteBuilder : public Builder
{
public:
	ConcreteBuilder();
	~ConcreteBuilder();
	virtual void BuildPartA(const string& buildPata);
	virtual void BuildPartB(const string& buildPata);
	virtual void BuildPartC(const string& buildPata);
	Product* GetProduct();

protected:

private:
};


#endif // ! _BUILDER_H_

