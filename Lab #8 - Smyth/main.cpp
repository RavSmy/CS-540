// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- main.cpp

#include <iostream>
#include "Creature.h"
#include "Demon.h"


int main()
{
	srand(time(0));

	Creature *a[2];
	a[0]= new Demon();
	a[1]= new Demon(5,5);
	
	a[0]->getDamage();
	a[1]->getDamage();

	std::cout << "a[0] old strength = " << a[0]->getStrength() << " , old hitpoints = " << a[0]->getHitpoints() << std::endl;
	a[0]->setStrength(5);
	a[0]->setHitpoints(5);
	std::cout << "a[0] new strength = " << a[0]->getStrength() << " , new hitpoints = " << a[0]->getHitpoints() << std::endl;
	
}


