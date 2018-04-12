// Smyth, Ravela -- CS 540 --Lab #2 --Fraction.cpp 

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

class Fraction {

private:
	int denom, numer, whole;

	void check() {

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

public:

	Fraction() {
		denom = 1; numer = 0; whole = 0;
	}

	Fraction(int n, int d) {
		denom = d;
		whole = 0;
		numer = n;

		check();
	}

	Fraction(int w, int n, int d) {
		denom = d;
		whole = w;
		numer = n;

		check();
	}

	void print() {
		cout << "Your fraction:";
		if (whole != 0) cout << ' ' << whole << " ";
		cout << numer << "/" << denom << '\n';
	}

	void setDenom(int d) { denom = d; check(); }
	void setNumer(int n) { numer = n; check(); }
	void setWhole(int w) { whole = w; check(); }
	void setAll(int w, int n, int d) {
		denom = d; whole = w; numer = n;
		check();
	}

	int getDenom() const { return denom; }
	int getNumer() const { return numer; }
	int getWhole() const { return whole; }

};
