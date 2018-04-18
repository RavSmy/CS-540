// Smyth, Ravela -- CS 540 -- Lab #2+3+4 -- main.cpp
#include "stdafx.h"
#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {

	//NO ARGS--default: denom = 1, numer = 0, whole = 0
	Fraction *myfrac1 = new (nothrow) Fraction();
	if (myfrac1 != nullptr) {
		myfrac1->print();

		myfrac1->setWhole(-10);
		myfrac1->setDenom(-23);
		myfrac1->setNumer(10);
		myfrac1->print();
	}

	
	//2 ARGS--format: (numerator denominator)
	Fraction myfrac2(1,8);
	 myfrac2.print();


	//THREE ARGS--format: (whole numerator denominator)
	Fraction myfrac3(1, 8, 3);
	myfrac3.print();

	//**LAB 3** --- Constructor + Destructor
	Fraction myfrac4 = myfrac3; 
	myfrac4.print();	

	myfrac4.~Fraction();
	myfrac4.print();

	//**LAB 4** --- Operator Overloading
	Fraction myfrac5;

	myfrac5 = myfrac3+myfrac2;
	myfrac5.print();

	myfrac5 = myfrac3 * myfrac2;
	myfrac5.print();

	// Free Pointer
	delete myfrac1;
	myfrac1 = nullptr;  

}
