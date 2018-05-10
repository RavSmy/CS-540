// Smyth, Ravela -- CS 540 TH. -- Lab #7 -- main.cpp

#include <iostream>
#include "Creature.h"
#include "Demon.h"


int main()
{
	Demon demon;
	Creature creature (4,6);  
	srand ( time(0) );

	for (int i = 0 ; i < 10 ; i++) std::cout << "demon.getDamage(): " << demon.getDamage()<< std::endl; 
	for (int i = 0 ; i < 10 ; i++) std::cout << "creature.getDamage(): " << creature.getDamage() << std::endl; 
}

