#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main (int argc, char *argv[])
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

	return 0;
}
