#include <iostream>
#include <string>
#include "b.h"

using std::cout;
using std::endl;

void test_string ();
void test_pure_virtual ();

int main (int argc, char *argv[])
{
	test_string ();
	test_pure_virtual ();

	return 0;	
}

void test_string ()
{
	class MyString : public std::string
	{

		public:
				MyString (const std::string &s = "", int v = 0)
					:std::string (s), i (v) {}
		private:
				int i;
	};

	std::string s1 ("world");
	MyString s2 ("hello,world", 432);
	cout << s2.size () << endl;
	cout << s2 << endl;
	
	MyString *ps = new MyString ("hello", 4);
	std::string *pss = nullptr;
	pss = ps;
	delete pss;
}

void test_pure_virtual ()
{
	D d;
}
