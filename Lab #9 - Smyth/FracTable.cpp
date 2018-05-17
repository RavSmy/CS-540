// Smyth, Ravela -- CS 540 TH. --  Lab #9 -- FracTable.cpp 

#include "FracTable.h"

#include <iostream> 
using namespace std; 

FracTable::FracTable(int size){
	this->size = size;
	table = new Fraction*[size*size];
	
	//Filling first row
		for (int i = 0; i < size; i++){
			table[i] = new Fraction(i,size); 
			table[i*size] = table[i]; 
		}
	//Filling by multiplication
		for (int row = 1; row < size; row++)
			for (int col = 1; col < size; col++)
				if (col%size != 0) table[row+(col*size)] = new Fraction(row*col, size*size);
}

void FracTable::print_table(){
	for (int i = 0 ; i < size*size; i++){
		if ( i%size == 0) std::cout << std::endl; 
		table[i]->print();
	}	
}

FracTable::~FracTable(){
	for (int i = 0 ; i < size*size; i++) { delete table[i]; table[i] = NULL;} 
	delete table; table = NULL;
}
