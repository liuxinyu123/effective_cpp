#include <iostream>
#include "homeforsale.h"
#include "homeforsale1.h"
#include "homeforsale2.h"

void test_homeforsale ();
void test_homeforsale1 ();
void test_homeforsale2 ();

int main (int argc, char *argv[])
{
	test_homeforsale ();
	test_homeforsale1 ();
	test_homeforsale2 ();

	return 0;
}

void test_homeforsale ()
{
	HomeForSale hfs1;
	//HomeForSale hfs2 = hfs1;
	//HomeForSale hfs3;
	//hfs3 = hfs1;
	hfs1.memFunc ();
}

void test_homeforsale1 ()
{
	HomeForSale1 hfs1;
	//HomeForSale1 hfs2 (hfs1);
	//HomeForSale1 hfs3;
	//hfs3 = hfs1;
}

void test_homeforsale2 ()
{
	HomeForSale2 hfs1;
	//HomeForSale2 hfs2 (hfs1);
	//HomeForSale2 hfs3;
	//hfs3 = hfs1;

}
