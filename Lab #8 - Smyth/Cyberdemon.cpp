// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- Cyberdemon.cpp

#include "Cyberdemon.h"

std::string Cyberdemon::getSpecies() { return "Cyberdemon"; }
Cyberdemon::Cyberdemon() : Demon() {}
Cyberdemon::Cyberdemon(int strength, int hitpoints) : Demon(strength, hitpoints) {}
