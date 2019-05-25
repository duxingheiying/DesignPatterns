// Product.h
#ifndef _PRODUCT_H_
#define _PRODUCT_H_

class Product
{
public:
	Product();
	~Product();

	void ProductPart();

protected:

private:
};

class ProductPart
{
public:
	ProductPart();
	~ProductPart();

	ProductPart* BuildPart();

protected:

private:
};

#endif // ! _PRODUCT_H_

