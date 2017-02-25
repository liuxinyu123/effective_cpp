#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

#include <string>
#include <iostream>

class Date
{

public:
		Date (int y = 1990, int m = 1, int d = 1)
			: year (y), month (m), day (d) {}
		int get_year () const
		{
			return year;
		}

		int get_month () const
		{
			return month;
		}

		int get_day () const
		{
			return day;
		}
private:
		int year;
		int month;
		int day;
};

class Customer 
{
		friend std::ostream& operator<< (std::ostream &os, const Customer &c);
public:
		Customer (const std::string &s = "", int y = 1990, int m = 1, int d = 1)
			: name (s), lastTransaction (y, m, d) {}
		Customer (const Customer &c)
			:name (c.name), lastTransaction (c.lastTransaction) {}
		Customer& operator= (const Customer &c)
		{
			name = c.name;
			lastTransaction = c.lastTransaction;

			return *this;
		}
private:
		std::string name;
		Date lastTransaction;
};




#endif
