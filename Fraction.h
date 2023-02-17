/*
Jordan Del Pilar
0701246
Fraction.h
Header file for Fraction guided practice
*/
#ifndef FRACTION
#define FRACTION
#include <string>

using std::string;

class Fraction
{
private:
	int num;
	int den;

public:
	void setFraction(int n, int d);
	Fraction add(const Fraction &f);
	Fraction sub(const Fraction &f);
	Fraction mul(const Fraction& f);
	Fraction div(const Fraction& f);
	void printFraction();

    //Constructor
    Fraction();
    Fraction(int num, int den);
    Fraction(string val);

};
#endif