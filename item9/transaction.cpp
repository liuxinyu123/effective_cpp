#include <iostream>
#include "transaction.h"

void Transaction::logTransaction () const
{
	std::cout << "logTransaction in Transaction" << std::endl;
}

void SellTransaction::logTransaction () const
{
	std::cout << "logTransaction in SellTransaction" << std::endl;
}

void BuyTransaction::logTransaction () const 
{
	std::cout << "logTransaction in BuyTransaction " << std::endl;
}
