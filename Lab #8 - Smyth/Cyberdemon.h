#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "Demon.h"

class Cyberdemon : public Demon {

private:
	std::string getSpecies() override;

public:
	Cyberdemon();
	Cyberdemon(int, int);
};

#endif