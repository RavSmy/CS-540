#include <iostream>
#include <string>
#include "Creature.h"

Creature::Creature() {
	hitpoints = 10;
	strength = 10;
}

Creature::Creature(int newStrength, int newHit) {
	hitpoints = newHit;
	strength = newStrength;
}

int Creature::getDamage() {
	int damage = (rand() % strength) + 1;
	std::cout << getSpecies() << " attacks for " << damage << " points!" << std::endl;
	return damage;
}

std::string Creature::getSpecies() {
	return "Creature";
}

int Creature::getStrength() { return strength; }
int Creature::getHitpoints() { return hitpoints; }
void Creature::setStrength(int strength) { this->strength = strength; }
void Creature::setHitpoints(int hitpoints) { this->hitpoints = hitpoints; }