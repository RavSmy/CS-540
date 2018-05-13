// Smyth, Ravela -- CS 540 TH. -- Lab #8 -- Human.cpp

#include "Human.h"

std::string Human::getSpecies() { return "Human"; }
Human::Human() : Creature() {}
Human::Human(int strength, int hitpoints) : Creature(strength, hitpoints) {}
