#ifndef BALROGS_H
#define BALROGS_H

#include "Demon.h"

class Balrogs : public Demon {
private:
	std::string getSpecies();
public:
	Balrogs();
	Balrogs(int, int);
	int getDamage();
};

#endif 
