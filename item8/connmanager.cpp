#include "connmanager.h"

ConnManager::~ConnManager ()
{
	db.close ();
}
