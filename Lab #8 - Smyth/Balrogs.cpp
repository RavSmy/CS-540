#include "Balrogs.h"

std::string Balrogs::getSpecies() { return "Balrogs"; }
Balrogs::Balrogs() : Demon() {}
Balrogs::Balrogs(int strength, int hitpoints) : Demon(strength, hitpoints) {}

int Balrogs::getDamage() {
	int damage = Demon::getDamage();
	int damage2 = (rand() % Creature::getStrength()) + 1;

	std::cout << "Balrog speed attack inflicts " << damage2 <<
		" additional damage points!" << std::endl;

	damage = damage + damage2;

	return damage;
}