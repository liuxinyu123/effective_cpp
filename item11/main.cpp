#include <iostream>
#include "widget.h"

using std::cout;
using std::endl;

void test_self_assignment ();

int main (int argc, char *argv[])
{
	test_self_assignment ();

	return 0;
}

void test_self_assignment ()
{
	Widget w(20, 40, "window");
	
	cout << w.get_width () << " " << w.get_height () << " " << w.get_name () << endl;
	w = w;
	cout << w.get_width () << " " << w.get_height () << " " << w.get_name () << endl;
}
