#ifndef _TRANSACTION_H_
#define _TRANSACTION_H_

#include <string>

class Transaction
{

public:
		Transaction (const std::string &s = "", double a = 0)
			:date (s), account (a)
	   	{
			logTransaction ();
		}

		virtual void logTransaction () const;
private:
		std::string date;
		double account;
		
};

class BuyTransaction : public Transaction 
{

public:
		BuyTransaction (const std::string &s = "", double a = 0, const std::string &b = "")
			:Transaction (s, a), buyer (b) {}
		void logTransaction () const;
private:
		std::string buyer;
};

class SellTransaction : public Transaction
{


public:
		SellTransaction (const std::string &s = "", double a = 0, const std::string &se = "")
			:Transaction (s, a), seller (se) {}
		void logTransaction () const;
private:
		std::string seller;
};

#endif
