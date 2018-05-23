// Smyth, Ravela -- CS 540 TH. -- Lab #7 -- Creature.cpp

#include "Creature.h"


Creature::Creature() {
	hitpoints = 10;
	strength = 10;
}

Creature::Creature(int newStrength, int newHit) {
	hitpoints = newHit;
	strength = newStrength;
}

int Creature::getDamage()  const{
	int damage = (rand() % strength) + 1;
	std::cout << std::endl << getSpecies() << " attacks for " << damage << " points!" << std::endl;
	return damage;
}

std::string Creature::getSpecies()  const{
	return "Creature";
}

int Creature::getStrength()  const { return strength; }
int Creature::getHitpoints()  const { return hitpoints; }
void Creature::setStrength(int strength) { this->strength = strength; }
void Creature::setHitpoints(int hitpoints) { this->hitpoints = hitpoints; }
