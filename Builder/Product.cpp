// Product.cpp

#include "Product.h"

Product::Product() 
{
}

Product::~Product() 
{
}

void Product::ProductPart()
{
}

ProductPart::ProductPart()
{
}

ProductPart::~ProductPart()
{
}

ProductPart* ProductPart::BuildPart()
{
	return new ProductPart();
}