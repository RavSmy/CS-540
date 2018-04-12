// Smyth, Ravela -- CS 540 -- Lab #2+3+4 -- main.cpp
#include "stdafx.h"
#include <iostream>
#include "Fraction.cpp"

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
	Fraction *myfrac2 = new Fraction(3, 4);
	myfrac2->print();

	myfrac2->setWhole(10);
	myfrac2->setDenom(-20);
	myfrac2->print();


	//THREE ARGS--format: (whole numerator denominator)
	Fraction *myfrac3 = new Fraction(1, 8, 3);
	myfrac3->print();

	myfrac3->setNumer(10);
	myfrac3->setDenom(100);
	myfrac3->print();

	// Free Pointer
	delete myfrac1, myfrac2, myfrac3;
	myfrac1 = nullptr; myfrac2 = nullptr; myfrac3 = nullptr;

}
