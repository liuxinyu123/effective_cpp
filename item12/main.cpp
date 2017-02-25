#include <iostream>
#include "customer.h"

using std::cout;
using std::endl;

void test_customer ();

int main ()
{
	test_customer ();

	return 0;
}

void test_customer ()
{
	Customer c1 ("hello", 2017, 2, 25);
	Customer c2 = c1;
	Customer c3;
	c3 = c2;

	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;

}
