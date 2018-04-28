// Smyth, Ravela -- CS 540 --  Lab #2+3+4+5+6 --Fraction.cpp 

#include "Fraction.h"
#include <iostream>
#include <cmath>
using namespace std;

/*LAB #2*/
void Fraction::check() {

	if (denom == 0) { denom = 1; cout << "-->Denominator changed to 1, it can't be 0.\n"; }
	if (numer < 0 || denom < 0 || whole < 0) {
		cout << "-->Your values were negative, now absolute value.\n";
		setAll(abs(whole), abs(numer), abs(denom));
	}

	if (numer > denom) {
		whole += numer / denom;
		numer = numer % denom;
	}
}

Fraction::Fraction() { setAll(0, 0, 1); }

Fraction::Fraction(int n, int d) { setAll(0, n, d); }

Fraction::Fraction(int w, int n, int d) { setAll(w, n, d); }

void Fraction::print() {
	cout << "\nF: ";
	if (whole != 0) cout << whole << " ";
	cout << numer << "/" << denom << '\n';
}

void Fraction::setAll(int w, int n, int d) {
	denom = d; whole = w; numer = n;
	check();
}

/*LAB #3 -- Copy Constructor + Destructor*/

Fraction::Fraction(const Fraction &obj) {
	cout << "-->Copy Constructor Called...\n";
	setAll(obj.whole, obj.numer, obj.denom);
}

Fraction::~Fraction() {
	cout << "-->Destructor Called...\n";
	setAll(0, 0, 1);
}

/*LAB #4 -- Operation Overloading*/
Fraction Fraction::operator+(const Fraction& obj) {
	int denominator = obj.denom * denom;

	int numerator = (add_whole_To_num(this) * obj.denom) +
		(add_whole_To_num(&obj) * denom);

	Fraction sum(0, numerator, denominator);
	return sum;
}

Fraction Fraction::operator*(const Fraction& obj) {
	int numerator = add_whole_To_num(&obj) * add_whole_To_num(this)
		, denominator = obj.denom * denom;

	Fraction mult(0, numerator, denominator);
	return mult;
}
bool Fraction::operator==(const Fraction& obj) {
	return (add_whole_To_num(this) * obj.denom) == (add_whole_To_num(&obj) * denom);
}

void Fraction::operator=(const Fraction& obj) {
	setAll(obj.whole, obj.numer, obj.denom);
}

int Fraction::add_whole_To_num(const Fraction* obj) {
	return (obj->whole * obj->denom) + obj->numer;
}

	
ostream& operator<<(ostream &os, const Fraction& obj) {
	os << obj.whole << " " << obj.numer << "/" << obj.denom;
	return os;  
} 

istream& operator>>(istream &is, Fraction& obj) { 
	char slash;
	is >> obj.whole >> obj.numer >> slash >> obj.denom;
	return is; 
}
