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
	Widget w(20, 40, "data", "window");
	
	cout << w.get_width () << " " << w.get_height () << " " << w.get_name () << endl;
	cout << w.get_data () << endl;
	w = w;
	cout << w.get_width () << " " << w.get_height () << " " << w.get_name () << endl;
	cout << w.get_data () << endl;

	Widget w2 (w);
	Widget w3 (40, 60, "data11", "win");
	w2 = w3;
	cout << w2.get_width () << " " << w2.get_height () << " " << w2.get_name () << " " 
			<< w2.get_data () << endl;

}
