/*
Jordan Del Pilar
0701246
Fraction.h
Updated to have overloaded operators
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
    int getNum() const;
    int getDen() const;
	void printFraction();

    //Constructor
    Fraction();
    Fraction(int num, int den);
    Fraction(string val);

    //Operator Overloads
    Fraction operator +(const Fraction &f);
    Fraction operator -(const Fraction &f);
    Fraction operator *(const Fraction &f);
    Fraction operator /(const Fraction &f);
    Fraction &operator =(const Fraction &f);

};
#endif
