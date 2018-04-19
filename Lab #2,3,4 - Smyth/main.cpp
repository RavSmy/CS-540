// Smyth, Ravela -- CS 540 -- Lab #2+3+4 -- main.cpp
//#include "stdafx.h"
#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {

	//NO ARGS--default: denom = 1, numer = 0, whole = 0
	Fraction *myfrac1 = new (nothrow) Fraction();
	if (myfrac1 != nullptr) {
		if (myfrac1->print();
		cout << "   [frac2: 0/1]\n\n";

		myfrac1->setWhole(-10);
		myfrac1->setDenom(0);
		myfrac1->setNumer(1);
		myfrac1->print();
		cout << "   [frac1: 11 0/1]\n\n";
	}

	
	//2 ARGS--format: (numerator denominator)
	Fraction myfrac2(1,8);
	myfrac2.print(); 
	cout << "   [frac2: 1/8]\n\n";


	//THREE ARGS--format: (whole numerator denominator)
	Fraction myfrac3(1, 8, 3);
	myfrac3.print();
	cout << "   [frac3: 3 2/3]\n\n";


	//**LAB 3** --- Constructor + Destructor
	Fraction myfrac4 = myfrac3; 
	myfrac4.print();	
	cout << "   [frac4 = frac3 : 3 2/3]\n\n";

	myfrac4.~Fraction();
	myfrac4.print();
	cout << "   [~frac4: 0/1]\n\n";


	//**LAB 4** --- Operator Overloading
	Fraction myfrac5;

	myfrac5 = myfrac3+myfrac2;
	myfrac5.print();
	cout << "   [frac5 = frac3 (3 2/3) + frac2 (1/8) : 3 19/24]\n\n";

	myfrac5 = myfrac3 * myfrac2;
	myfrac5.print();
	cout << "   [frac5 = frac3 (3 2/3) * frac2 (1/8) : 11/24]\n\n";
	
	Fraction myfrac6(3, 4, 6);
	cout<< "\n   [frac6 (3 4/6) and frac3 (3 2/3) are: ";
	if (myfrac6 == myfrac3) cout << "EQUAL\n\n";
	else cout <<"NOT EQUAL\n\n";

	Fraction myfrac7(3, 4, 1);
	cout<< "\n   [frac7 (3 4/1) and frac3 (3 2/3) are: ";
	if (myfrac7 == myfrac3) cout << "EQUAL\n\n";
	else cout <<"NOT EQUAL\n\n";

	// Free Pointer
	delete myfrac1;
	myfrac1 = nullptr;  
}
