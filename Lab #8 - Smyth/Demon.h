// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- Demon.h

#ifndef DEMON_H
#define DEMON_H

#include "Creature.h"

class Demon : public Creature {
public:
	Demon();
	Demon(int, int);
	int getDamage();
};



#endif  