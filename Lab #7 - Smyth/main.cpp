#include <iostream>
#include "Creature.h"
#include "Demon.h"

int main()
{
	Demon demon;
	Creature creature;  
	
	for (int i = 0 ; i < 10 ; i++) std::cout << "\ndemon.getDamage(): " << demon.getDamage(); 
	for (int i = 0 ; i < 10 ; i++) std::cout << "\ncreature.getDamage(): " << creature.getDamage(); 
}

