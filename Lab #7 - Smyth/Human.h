#ifndef HUMAN_H
#define HUMAN_H

#include "Creature.h"

class Human : public Creature {

private:
	std::string getSpecies();

public:
	Human();
	Human(int, int);
};

#endif
