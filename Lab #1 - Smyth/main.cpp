// Smyth, Ravela -- CS 536 -- Project #1 -- main.cpp

#include "stdafx.h"
#include <iostream>
#include <string> 
#include <fstream>
#include "Records.cpp"

using namespace std;

Records *fileInput();

int main() {

	// Variables
	Records *LIST;
	int input;

	LIST = fileInput(); 

	// Meny Loop
	do {
		cout << "\nSort records by (1) FIRST name (2) LAST name (3) GPA (4) ID (5) EMAIL (6) QUIT :  ";
		cin >> input;
		if (input != 6) {
			//Call object methods with field # 
			LIST->bubbleSort(input);
			LIST->print();
		}
	} while (input != 6);



	cout << "\nBYE!\n";
}

Records *fileInput() {
	// Variables
	ifstream inFile;
	string first, last, email;
	double GPA, ID;

	// Pointer to a Records object later to be returned
	Records *LIST = new Records(); 
	 
	// Open File
	inFile.open("input.txt");

	if (!inFile || myfrac1 == nullptr) {
		cout << "Unable to open file";
		return 0;
	}

	//Input from file to linked list
	while (inFile >> first >> last >> GPA >> ID >> email) {
		LIST->add(first, last, GPA, ID, email);
	}

	inFile.close();
	return LIST;

}
