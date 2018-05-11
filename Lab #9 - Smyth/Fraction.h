// Smyth, Ravela -- CS 540 TH. --  Lab #9 --Fraction.h 

#ifndef FRACTION_H
#define FRACTION_H 
#include <iostream>   

using namespace std;

class Fraction {

private:
	int denom, numer, whole;

	void check();
	int add_whole_To_num(const Fraction* obj);

public:


	Fraction();

	Fraction(int n, int d);

	Fraction(int w, int n, int d);

	void  print() const;

	void setDenom(int d) { denom = d; check(); }
	void setNumer(int n) { numer = n; check(); }
	void setWhole(int w) { whole = w; check(); }
	void setAll(int w, int n, int d);

	int getDenom() const { return denom; }
	int getNumer() const { return numer; }
	int getWhole() const { return whole; }


	Fraction(const Fraction &obj);
	~Fraction();


	Fraction operator+(const Fraction& obj);
	Fraction operator*(const Fraction& obj);
	bool operator==(const Fraction& obj);
	void operator=(const Fraction& obj);


	friend 	ostream& operator<<(ostream &os, const Fraction& obj);
	friend 	istream& operator>>(istream &is, Fraction& obj);
};

#endif