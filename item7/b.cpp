#include "b.h"
#include <iostream>

B::~B ()
{
	std::cout << "Base dtor" << std::endl;
}

D::~D ()
{
	//B::~B ();
	std::cout << "Drived dtor" << std::endl;	
}
