#include <iostream>
#include "strobj.h"
#include "strobj1.h"

using std::cout;
using std::endl;

void test_strobj ();
void test_strobj1 ();

int main (int argc, char *argv[])
{
	test_strobj ();
	
	return 0;
}

void test_strobj ()
{
	StrObj<int> obj1 ("hello", 2);//ctor
	StrObj<int> obj2 (obj1);//copy ctor
	StrObj<int> obj3 ("world", 4);
	obj3 = obj2;//assign operator

	cout << "obj1 is " << obj1.getName () << " " << obj1.getValue () << endl;
	cout << "obj2 is " << obj2.getName () << " " << obj2.getValue () << endl;
	cout << "obj3 is " << obj3.getName () << " " << obj3.getValue () << endl;

	int a = 0;
	int b = 0;
	int c = 0;

	StrObj<int*> obj4 ("hello", &a);
	StrObj<int*> obj5 = obj4;
	StrObj<int*> obj6 ("world", &c);
	obj6 = obj4;

}

void test_strobj1 ()
{
	std::string s1 = "hello";
	std::string s2 = "world";
	StrObj1<int> obj1 (s1, 2);//ctor
	StrObj1<int> obj2 (obj1);//copy ctor
	StrObj1<int> obj3 (s2, 4);
	obj3 = obj2;//assign operator

	cout << "obj1 is " << obj1.getName () << " " << obj1.getValue () << endl;
	cout << "obj2 is " << obj2.getName () << " " << obj2.getValue () << endl;
	cout << "obj3 is " << obj3.getName () << " " << obj3.getValue () << endl;

	int a = 0;
	int b = 0;
	int c = 0;

	StrObj1<int*> obj4 (s1, &a);
	StrObj1<int*> obj5 = obj4;
	StrObj1<int*> obj6 (s2, &c);
	obj6 = obj4;

}
