// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- Elf.cpp

#include "Elf.h"

Elf::Elf() : Creature() {}

Elf::Elf(int strength, int hitpoints) : Creature(strength, hitpoints) {}

std::string Elf::getSpecies() { return "Elf"; }

int Elf::getDamage() {
	int damage = Creature::getDamage();
	if ((rand() % 10) == 0) {
		std::cout << "Magical attack inflict " << damage << " additional damage points!" << std::endl;
		damage *= 2;
	}
	return damage;
}
