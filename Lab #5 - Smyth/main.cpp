// Smyth, Ravela -- CS 540 TH. -- Lab #5+6 -- main.cpp

#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {

	/*LAB #2*/

	//NO ARGS--default: denom = 1, numer = 0, whole = 0
	Fraction *myfrac1 = new (nothrow) Fraction();
	if (myfrac1 != NULL) {
		myfrac1->print();
		cout << "   [frac2: 0/1]\n\n";

		myfrac1->setWhole(-10);
		myfrac1->setDenom(0);
		myfrac1->setNumer(1);
		myfrac1->print();
		cout << "   [frac1: 11 0/1]\n\n";
	}

	// Free Pointer
	delete myfrac1;
	myfrac1 = NULL;


	//2 ARGS--format: (numerator denominator)
	Fraction myfrac2(1, 8);
	myfrac2.print();
	cout << "   [frac2: 1/8]\n\n";


	//THREE ARGS--format: (whole numerator denominator)
	Fraction myfrac3(1, 8, 3);
	myfrac3.print();
	cout << "   [frac3: 3 2/3]\n\n";

	/*LAB #3*/

	//Copy Constructor
	Fraction myfrac4 = myfrac3;
	myfrac4.print();
	cout << "   [frac4 = frac3 : 3 2/3]\n\n";

	//Destructor
	myfrac4.~Fraction();
	myfrac4.print();
	cout << "   [~frac4: 0/1]\n\n";

	/*LAB #4*/

	Fraction myfrac5;

	//Operator Overloadings: +
	myfrac5 = myfrac3 + myfrac2;
	myfrac5.print();
	cout << "   [frac5 = frac3 (3 2/3) + frac2 (1/8) : 3 19/24]\n\n";

	//Operator Overloadings: *
	myfrac5 = myfrac3 * myfrac2;
	myfrac5.print();
	cout << "   [frac5 = frac3 (3 2/3) * frac2 (1/8) : 11/24]\n\n";

	//Operator Overloadings: ==
	Fraction myfrac6(3, 4, 6);
	cout << "\n   [frac6 (3 4/6) and frac3 (3 2/3) are: ";
	if (myfrac6 == myfrac3) cout << "EQUAL\n\n";
	else cout << "NOT EQUAL\n\n";

	Fraction myfrac7(3, 4, 3);
	cout << "\n   [frac7 (3 4/1) and frac3 (3 2/3) are: ";
	if (myfrac7 == myfrac3) cout << "EQUAL\n\n";
	else cout << "NOT EQUAL\n\n";

	/*LAB #5 -- << >> Overloading*/
	Fraction myfrac8;  
	cout << "Input frac8 (w n/d): ";	
	cin >> myfrac8; 
	cout << "Your frac8 : " << myfrac8 << "\n"; 

}   
