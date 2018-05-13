// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- Balrogs.h

#ifndef BALROGS_H
#define BALROGS_H

#include "Demon.h"

class Balrogs : public Demon {
private:
	std::string getSpecies() override;
public:
	Balrogs();
	Balrogs(int, int);
	int getDamage();
};

#endif 
