// Smyth, Ravela -- CS 540 TH. -- Lab #7 -- Demon.h

#ifndef DEMON_H
#define DEMON_H

#include "Creature.h"

class Demon : public Creature{
private:
	std::string getSpecies()  const;
public:
	Demon();
	Demon(int, int);
	int getDamage()  const;
};



#endif 
