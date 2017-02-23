#include <functional>
#include "rational.h"

using std::multiplies;
Rational::Rational (double r, double i)
	:real (r), imag (i) {}

const Rational operator* (const Rational &r1, const Rational &r2)
{
	double r = multiplies<double> () (r1.real, r2.real) - multiplies<double> () (r1.imag, r2.imag);
	double i = multiplies<double> () (r1.real, r2.imag) + multiplies<double> () (r1.imag, r2.real);
	Rational ret (r, i);

	return ret;
}	

std::ostream& operator<< (std::ostream &os, const Rational &r)
{
	os << r.real << " + " << r.imag << "i";

	return os;
}
