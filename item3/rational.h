#ifndef _RATIONAL_H_
#define _RATIONAL_H_

#include <iostream>

class Rational
{
		friend const Rational operator* (const Rational &r1, const Rational &r2);
		friend std::ostream& operator<< (std::ostream &os, const Rational &r);
public:
		Rational (double r = 0, double i = 0);
		Rational (const Rational &r)
			:real (r.real), imag (r.imag) {}

private:
		double real;
		double imag;
};

#endif
