#include <iostream>
#include <cstdlib>
#include "dbconnection.h"

using std::cout;
using std::endl;

void test_dbconnection ();

int main (int argc, char *argv[])
{
	test_dbconnection ();
	
	return 0;
}

void test_dbconnection ()
{
	NetInfo info;
	info.ipAddr = "192.168.1.1";
	info.portNum = "80";
	info.connType = 0;

	DBConnection connection = DBConnection::create (info);
	cout << connection.getIp () << " " << connection.getPort () << " " <<
			connection.getType () << endl;
	connection.close ();
}
