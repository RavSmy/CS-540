// Smyth, Ravela -- CS 540 TH. -- Lab #9 -- main.cpp

#include <iostream>
#include "FracTable.h"

using namespace std;

int main() {

	cout << "Input size: ";
	int size;
	cin >> size;

	FracTable table(size);
	table.print_table();	

}

