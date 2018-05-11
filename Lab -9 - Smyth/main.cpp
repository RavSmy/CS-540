// Smyth, Ravela -- CS 540 TH. -- Lab #9 -- main.cpp

#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {

	cout << "Input size: ";
	int size;
	cin >> size;

	Fraction*** table = new Fraction**[size+1];
	for (int i = 0; i <= size; i++) 
		table[i] = new Fraction*[size+1];
	
	for (int row = 1; row <= size; row++) {
		for (int col = 1; col <= size; col++) {
			Fraction *temp = new Fraction(col*row,(size+1)*(size+1));
			table[row][col] = temp;
		}
	}
	
	for (int row = 0; row <= size; row++) {
		for (int col = 1; col <= size; col++) {
			table[row][col]->print();
			cout << " ";
		}
		cout << endl;
	}
	cin >> size;
}
