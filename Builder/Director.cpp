// Director.cpp

#include "Director.h"
#include "Builder.h"

Director::Director(Builder* bld)
{
	_bld = bld;
}

Director::~Director()
{

}

void Director::Construct()
{
	_bld->BuildPartA("user-definded");
	_bld->BuildPartB("user-definded");
	_bld->BuildPartC("user-definded");
}