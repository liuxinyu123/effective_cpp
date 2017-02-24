#include <iostream>

using std::cout;
using std::endl;

void test_non_initialization ();

int main (int argc, char *argv[])
{

	test_non_initialization ();
	return 0;

}

void test_non_initialization ()
{
	class Point
	{

		public:
				int x;
				int y;
	};

	for (int i = 0; i < 100; ++i)
	{
		int v;
		cout << v << endl;
	}

	for (int i = 0; i < 100; ++i)
	{
		Point p;
		cout << p.x << " " << p.y << endl;
	}
}
