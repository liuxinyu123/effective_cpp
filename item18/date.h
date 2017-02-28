#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>

class Day
{

public:
		explicit Day (unsigned int d = 1)
			:value (d) {}
		operator unsigned int () const
		{
			return value;
		}	
private:
		unsigned int value;
};

class Month 
{

public:
		explicit Month (unsigned int m = 1)
			:value (m) {}
		operator unsigned int () const
		{
			return value;
		}
private:
		unsigned int value;
};

class Year 
{

public:
		explicit Year (unsigned int y = 1990) 
			:value (y) {}
		operator unsigned int () const
		{
			return value;
		}
private:
		unsigned int value;
};

class Date
{

		friend std::ostream& operator<< (std::ostream &os, const Date &d);
public:
		Date (const Month &m, const Day &d, const Year &y)
			:month (m), day (d), year (y) {}

private:
		Month month;
		Day day;
		Year year;
};

#endif
