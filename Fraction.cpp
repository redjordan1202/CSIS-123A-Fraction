/*
Jordan Del Pilar
0701246
Fraction.cpp
Added new constructors per guided practice 2
*/
#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
    this->setFraction(1, 1);
}

Fraction::Fraction(int num, int den)
{
    this->setFraction(num, den);
}

Fraction::Fraction(string val)
{
    string num = val.substr(0,1);
    string dem = val.substr(2,1);
    this->setFraction(stoi(num), stoi(dem));
}

void Fraction::setFraction(int n, int d)
{
	this->num = n;
	this->den = d;
}

Fraction Fraction::add(const Fraction& f)
{
	Fraction tmp;
	tmp.num = (this->num * f.den) + (f.num * this->den);
	tmp.den = f.den * this->den;
	return tmp;
}

Fraction Fraction::sub(const Fraction& f)
{
	Fraction tmp;
	tmp.num = (this->num * f.den) - (f.num * f.den);
	tmp.den = f.den * this->den;
	return tmp;
}

Fraction Fraction::mul(const Fraction& f)
{
	Fraction tmp;
	tmp.num = this->num * f.num;
	tmp.den = this->den * f.den;
	return tmp;
}

Fraction Fraction::div(const Fraction& f)
{
	Fraction tmp;
	tmp.num = this->num * f.den;
	tmp.den = this->den * f.num;

	if (tmp.den <= 0)
    {
		tmp.den *= -1;
        tmp.num *= -1;
	}
	return tmp;
}

void Fraction::printFraction()
{
	cout << this->num << "/" << this->den << endl;
}