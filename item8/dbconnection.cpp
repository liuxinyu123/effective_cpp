#include "dbconnection.h"
#include <iostream>

DBConnection DBConnection::create (NetInfo &info)
{
	DBConnection conn(info.ipAddr, info.portNum, info.connType);

	return conn;
}

void DBConnection::close ()
{
	std::cout << "connection is closing..." << std::endl;	
}
