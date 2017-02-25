#include "customer.h"

std::ostream& operator<< (std::ostream &os, const Customer &c)
{
	os << c.name << " " << c.lastTransaction.get_year () << "-" << c.lastTransaction.get_month () <<
			"-" << c.lastTransaction.get_day ();

	return os;	
}

std::ostream& operator<< (std::ostream &os, const PriorityCustomer &pc)
{
	const Customer &rc = pc;
	operator<< (os, rc);
	os << " " << pc.get_priority ();

	return os;
}

PriorityCustomer::PriorityCustomer (const PriorityCustomer &pc)
	:Customer (pc), priority (pc.priority) {}

PriorityCustomer& PriorityCustomer::operator= (const PriorityCustomer &pc)
{
	Customer::operator= (pc);
	priority = pc.priority;

	return *this;
}
