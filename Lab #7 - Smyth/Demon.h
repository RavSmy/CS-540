#ifndef DEMON_H
#define DEMON_H

#include "Creature.h"

class Demon : public Creature{
private:
	std::string getSpecies();
public:
	Demon();
	Demon(int, int);
	int getDamage();
};



#endif 
