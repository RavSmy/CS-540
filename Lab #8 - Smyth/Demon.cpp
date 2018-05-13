// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- Demon.cpp

#include "Demon.h"

Demon::Demon() : Creature() {}

Demon::Demon(int strength, int hitpoints) : Creature(strength, hitpoints) {}

int Demon::getDamage() {
	int damage = Creature::getDamage();
	if ((rand() % 100) < 10) {
		damage = damage + 10;
		std::cout << "Demonic attack inflicts 10 additional damage points!" << std::endl;
	}

	return damage;
}
