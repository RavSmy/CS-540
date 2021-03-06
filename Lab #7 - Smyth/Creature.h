// Smyth, Ravela -- CS 540 TH. -- Lab #7 -- Creature.h

#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
#include <cstdlib>

class Creature {

private: 
	int strength;
	int hitpoints;
	virtual std::string getSpecies() const;

public: 
	Creature();
	Creature(int newStrength, int newHit);
	virtual int getDamage();

	int getStrength() const;
	int getHitpoints() const;
	void setStrength(int strength);
	void setHitpoints(int hitpoints);
};


#endif
