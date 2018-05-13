// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- Human.h

#ifndef HUMAN_H
#define HUMAN_H

#include "Creature.h"

class Human : public Creature {

private:
	std::string getSpecies() override;

public:
	Human();
	Human(int, int);
};

#endif
