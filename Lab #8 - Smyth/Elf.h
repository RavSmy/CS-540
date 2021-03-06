// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- Elf.h

#ifndef ELF_H
#define ELF_H

#include "Creature.h"

class Elf : public Creature {

private:
	std::string getSpecies() override;
public:
	Elf();
	Elf(int, int);
	int getDamage();
};

#endif 
