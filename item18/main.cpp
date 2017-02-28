#include <iostream>
#include "date.h"

using std::cout;
using std::endl;

//void test_date1 ();
void test_date2 ();

int main (int argc, char *argv[])
{
	//test_date1 ();
	test_date2 ();

	return 0;

}

//void test_date1 ()
//{
	//Date d1;
	//Date d2 (3, 12, 1999);
	//Date d3 (d2);
//
	//cout << d1 << endl;
	//cout << d2 << endl;
	//cout << d3 << endl;

	//d1 = d3;
	//cout << d1 << endl;
	//cout << d2 << endl;
	//cout << d3 << endl;

	//Date d4 (30, 4, 2007);
	//cout << d4 << endl;
//}

void test_date2 ()
{
	Date d1 (Month (3), Day (12), Year (2017));
	cout << d1 << endl;
	
}
