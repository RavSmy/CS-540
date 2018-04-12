// Smyth, Ravela -- CS 536 -- Project #1 -- Records.cpp

#include "stdafx.h"
#include <iostream>
#include <iomanip>    
#include <string> 

using namespace std;

class Records {
	
	//Individual node records
	struct info {
		string FIRST, LAST, EMAIL;
		double GPA, ID;
		info *NEXT;
	};

private:
	info * head; // head of the linked list

	// Retrieve numbers and strings based on field number [for bubbleSort()]
	double retrieveNum(info *n, int field) {
		if (field == 3) return n->GPA;
		return n->ID;
	}

	string retrieveStr(info *n, int field) {
		if (field == 1) return n->FIRST;
		else if (field == 2) return n->LAST;
		return n->EMAIL;
	}

	// Returns if b is alphabetically superior to a [for bubbleSort()]
	bool compSTR(string a, string b) {
		for (int i = 0; i < a.length() && i < b.length(); i++) {
			if (toUpper(a[i]) > toUpper(b[i])) return true; // <-- if char a > char b , then they need to be swapped
			else if (toUpper(a[i]) < toUpper(b[i])) return false; 
		}
		return false;
	}

	// Returns upper case version of char [for compSTR()]
	char toUpper(char c) {
		if (c >= 97 && c <= 122) c -= ('a' - 'A');
		return c;
	}

public:

	Records() { head = NULL; }

	// Adds new node to record linked list
	void add(string FIRST, string LAST, double GPA, double ID, string EMAIL) {
		info *n = new info();
		n->FIRST = FIRST; 	n->LAST = LAST;	n->GPA = GPA;	n->ID = ID;	n->EMAIL = EMAIL;
		n->NEXT = head;
		head = n;
	}

	// Prints whole list
	void print() {
		info *n = new info();
		n = head;
		while (n != NULL) {
			cout << "\n" << n->FIRST << "\t\t" << n->LAST << "\t\t" << n->GPA << "\t\t" << setprecision(9) << n->ID << "\t\t" << n->EMAIL; 
			n = n->NEXT;
		}
		cout << "\n";
	}

	//Bubble sorts lists based on field denoted by i
	void bubbleSort(int i) {
		info *a, *b, *prev; 
		bool swapped;

		// Keep running through list until nothing can be swapped
		do {
			swapped = false;

			// Initial value of pair pointers at beginning of list
			prev = head;
			a = head;
			b = head->NEXT;

			while (b != NULL) {
				// Depending on field selected by user, is a > b? Then it should be swapped!
				if (((i == 3 || i == 4) && retrieveNum(a, i) > retrieveNum(b, i)) || ((i == 1 || i == 2 || i == 5) && compSTR(retrieveStr(a, i), retrieveStr(b, i))))
				{
					swapped = true;
					// Swapping and incrementing pointers to next pair
					if (a == head) { head = b; }
					else prev->NEXT = b;
					a->NEXT = b->NEXT;
					b->NEXT = a;
					prev = b;
					b = a->NEXT;
				}
				else { //If not swapped, then increment pointers to next pair
					prev = a;
					a = b;
					b = b->NEXT;
				}
			}
		} while (swapped);
	}
};

