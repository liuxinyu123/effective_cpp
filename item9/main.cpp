#include "transaction.h"

void test_transaction ();

int main ()
{
	test_transaction ();

	return 0;

}

void test_transaction ()
{
	//Transaction t ("eh", 23.2);
	//t.logTransaction ();
	BuyTransaction bt ("hello", 2444.2, "world");
	SellTransaction st ("world", 233235.23, "hello");

}

