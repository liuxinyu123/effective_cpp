#include <iostream>
#include <cstdlib>
#include <vector>
#include "rational.h"
#include "textblock.h"
#include "ctextblock.h"

using std::cout;
using std::endl;

void test_const ();
void test_itertor ();
void test_rational ();
void test_textbolck ();
void test_ctextblock ();

int main (int argc, char *argv[])
{
	test_const ();
	test_itertor ();
	test_rational ();
	test_textbolck ();
	test_ctextblock ();

	return 0;
}

void test_const ()
{
	char str1[] = "hello";
	char str2[] = "world";
	char *ps = str1;
	const char *ps2 = str1;//data is const
	char* const ps3 = str1;//point is const
	//ps3 = str2;
	//*ps2 = 'w';
	const char* const ps4 = str2;
	//ps4 = str1;

	for (std::size_t i = 0; i < strlen (ps); ++i)
		cout << ps[i];
	cout << endl;
}

void test_itertor ()
{
	std::vector<int> iVec = {23, 53, 423, 33, 54};
	const std::vector<int>::iterator it1 = iVec.begin ();
	//++it1; // iterator is const
	*it1 = 111;

	std::vector<int>::const_iterator it2 = iVec.begin ();
	++it2;
	//*it2 = 2222;// data is const
}

void test_rational ()
{
	Rational r1(2, 3);
	Rational r2 (3, 4);
	
	cout << "r1 is " << r1 << endl;
	cout << "r2 is " << r2 << endl;
	Rational r3 = r1 * r2;
	//r1 * r2 = r3;
	cout << "r3 is " << r3 << endl;

}

void test_textbolck ()
{
	TextBlock tb ("hello,world");
	const TextBlock ctb ("thank you");

	cout << tb[3] << endl;
	cout << ctb[3] << endl;

	tb[0] = 'w';
	//ctb[0] = 'w';

}

void test_ctextblock ()
{
	const CTextBlock cctb ("hello");
   	char *pc = &cctb[0];
	//*pc = 'e';   
}
