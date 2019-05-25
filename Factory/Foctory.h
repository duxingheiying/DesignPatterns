#ifndef _FACTORY_H_
#define _FACTORY_H_

class Product;

class Foctory
{
public:
	virtual ~Foctory() = 0;
	virtual Product* CreateProduct() = 0;

protected:
	Foctory();
};

class ConcreteFactory : public Foctory
{
public:
	~ConcreteFactory();
	ConcreteFactory();
	Product * CreateProduct();
};

#endif // !_FACTORY_H_
