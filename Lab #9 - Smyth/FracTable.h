// Smyth, Ravela -- CS 540 TH. --  Lab #9 -- FracTable.h 

#ifndef FRACTABLE_H
#define FRACTABLE_H 
#include <iostream>   

#include "Fraction.h"

class FracTable {

private: 
	Fraction** table;
	int size;
	
public:
	FracTable(int size);	
	void print_table();
	~FracTable();
	
};


#endif
