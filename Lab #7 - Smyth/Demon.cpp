#include "Demon.h"

Demon::Demon() : Creature() {}

Demon::Demon(int strength, int hitpoints) : Creature(strength, hitpoints) {}

int Demon::getDamage() {
	int damage = Creature::getDamage();
	if((rand() % 100) < 5){
		damage = damage + 50;
		std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
	}

	return damage;
}

std::string Demon::getSpecies(){ return "Demon"; }
