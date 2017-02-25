#include <iostream>
#include <string>
#include <memory>

void test_shared_ptr ();
void test_memory ();

int main (int argc, char *argv[])
{
	//test_memory ();
	test_shared_ptr ();

	return 0;
	
}

void test_memory ()
{
	while (1)
	{
		std::string *ps = new std::string ("hello,world");
		delete ps;	
	}

}

void test_shared_ptr ()
{
	while (1)
		std::shared_ptr<std::string> ps (new std::string (1000, 'h'));
}
