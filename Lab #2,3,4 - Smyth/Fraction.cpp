// Smyth, Ravela -- CS 540 -- Lab #2+3+4 --Fraction.cpp 

#include "stdafx.h"
#include "Fraction.h"
#include <iostream>
#include <cmath>
using namespace std;


void Fraction::check() {

	if (denom == 0) { denom = 1; cout << "Denominator changed to 1, it can't be 0.\n"; }
	if (numer < 0 || denom < 0 || whole < 0) {
		cout << "Your values were negative, now absolute value.\n";
		denom = abs(denom); numer = abs(numer); whole = abs(whole);
	}

	if (numer > denom) {
		whole += numer / denom;
		numer = numer % denom;
	}
}          

Fraction::Fraction() {
	denom = 1; numer = 0; whole = 0;
}

Fraction::Fraction(int n, int d) {
	denom = d;
	whole = 0;
	numer = n;

	check();
}

Fraction::Fraction(int w, int n, int d) {
	denom = d;
	whole = w;
	numer = n;

	check();
}

void Fraction::print() {
	cout << "Your fraction:";
	if (whole != 0) cout << ' ' << whole << " ";
	cout << numer << "/" << denom << '\n';
}

void Fraction::setAll(int w, int n, int d) {
	denom = d; whole = w; numer = n;
	check();
}

//**LAB 3** --- Constructor + Destructor

Fraction::Fraction(const Fraction &obj) {
	cout << "Copy Constructor Called...\n";
	whole = obj.whole;
	numer = obj.numer;
	denom = obj.denom;
}

Fraction::~Fraction() {
	cout << "Destructor Called...\n";
	whole = 0; denom = 1; numer = 0; 
}

//**LAB 4** --- Operator Overloading
