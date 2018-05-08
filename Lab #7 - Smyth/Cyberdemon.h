#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "Demon.h"

class Cyberdemon : public Demon {

private:
	std::string getSpecies();

public:
	Cyberdemon();
	Cyberdemon(int, int);
};

#endif
