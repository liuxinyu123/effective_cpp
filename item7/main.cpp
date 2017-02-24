#include <iostream>
#include <string>

using std::cout;
using std::endl;

void test_string ();

int main (int argc, char *argv[])
{
	test_string ();

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
