/*
Jordan Del Pilar
0701246
main.cpp
Testing new overloaded operators from guided practice 3
*/
#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction f1(1,4),f2(1,2),f3;

    f3 = f1 + f2;
    f3.printFraction();

	return 0;
}
