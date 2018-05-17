// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- Creature.h

#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
#include <cstdlib>

class Creature {

private:
	int strength;
	int hitpoints;
	virtual std::string getSpecies() = 0;

public:
	Creature();
	Creature(int newStrength, int newHit);

	virtual int getDamage();

	int getStrength();
	int getHitpoints();
	void setStrength(int strength);
	void setHitpoints(int hitpoints);

	virtual ~Creature() {strength=0; hitpoints=0;};
};


#endif
