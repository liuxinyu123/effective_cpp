#include "date.h"

std::ostream& operator<< (std::ostream &os, const Date &d)
{
	os << d.year << "-" << d.month << "-" << d.day;

	return os;
}
