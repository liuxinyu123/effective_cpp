#include "customer.h"

std::ostream& operator<< (std::ostream &os, const Customer &c)
{
	os << c.name << " " << c.lastTransaction.get_year () << "-" << c.lastTransaction.get_month () <<
			"-" << c.lastTransaction.get_day ();

	return os;	
}


