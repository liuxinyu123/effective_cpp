#include <iostream>
#include "customer.h"

using std::cout;
using std::endl;

void test_customer ();
void test_prioritycustomer ();

int main ()
{
	test_customer ();
	test_prioritycustomer ();

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

void test_prioritycustomer ()
{
	PriorityCustomer pc1 ("world", 2017, 2, 25, 1);
	PriorityCustomer pc2 (pc1);
	PriorityCustomer pc3;	
	cout << pc1 << endl;
	cout << pc2 << endl;
	cout << pc3 << endl;
	pc3 = pc2;
	cout << pc1 << endl;
	cout << pc2 << endl;
	cout << pc3 << endl;

}
