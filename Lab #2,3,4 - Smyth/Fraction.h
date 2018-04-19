// Smyth, Ravela -- CS 540 -- Lab #2+3+4 --Fraction.h 

#ifndef FRACTION_H
#define FRACTION_H

class Fraction {

private:
	int denom, numer, whole;

	void check();
public:

	Fraction();

	Fraction(int n, int d);

	Fraction(int w, int n, int d);

	void print();

	void setDenom(int d) { denom = d; check(); }
	void setNumer(int n) { numer = n; check(); }
	void setWhole(int w) { whole = w; check(); }
	void setAll(int w, int n, int d);

	int getDenom() const { return denom; }
	int getNumer() const { return numer; }
	int getWhole() const { return whole; }

	//**LAB 3** --- Copy Constructor + Destructor
	Fraction(const Fraction &obj);
	~Fraction();

	//**LAB 4** --- Operator Overloading
	Fraction operator+(const Fraction& obj);
	Fraction operator*(const Fraction& obj);
	bool operator==(const Fraction& obj);
	void operator=(const Fraction& obj);

	int gcd(int a, int b);
	int add_whole_To_num(const Fraction* obj);
};

#endif
