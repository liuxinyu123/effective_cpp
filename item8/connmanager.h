#ifndef _CONNMANAGER_H_
#define _CONNMANAGER_H_

#include "dbconnection.h"

class ConnManager
{

public:
		ConnManager (const DBConnection &dbc)
			: db (dbc) {}
		~ConnManager ();

private:
		DBConnection db;
};

#endif
