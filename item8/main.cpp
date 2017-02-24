#include <iostream>
#include <cstdlib>
#include "dbconnection.h"
#include "connmanager.h"

using std::cout;
using std::endl;

void test_dbconnection ();
void test_dbconnection_v1 ();

int main (int argc, char *argv[])
{
//	test_dbconnection ();
	test_dbconnection_v1 ();
	
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

void test_dbconnection_v1 ()
{
	NetInfo info;
	info.ipAddr = "192.168.1.1";
	info.portNum = "80";
	info.connType = 0;

	ConnManager conn (DBConnection::create (info));
}
