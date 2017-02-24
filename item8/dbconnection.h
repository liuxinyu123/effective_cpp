#ifndef _DBCONNECTION_H_
#define _DBCONNECTION_H_

#include <string>


struct NetInfo
{
	std::string ipAddr;
	std::string portNum;
	int connType;
};

class DBConnection
{
	
public:
		DBConnection (const std::string &ip, const std::string &port, int type)
			:ipAddr (ip), portNum (port), connType (type) {}
		static DBConnection create (NetInfo &info);	
		void close ();
		std::string getIp () const
		{
			return ipAddr;
		}

		std::string getPort () const
		{
			return portNum;
		}

		int getType () const
		{
			return connType;
		}

private:
		std::string ipAddr;
		std::string portNum;
		int connType; 		
};

#endif
