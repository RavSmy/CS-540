#ifndef ELF_H
#define ELF_H

#include "Creature.h"

class Elf : public Creature {

private:
	std::string getSpecies();
public:
	Elf();
	Elf(int, int);
	int getDamage();
};

#endif 
