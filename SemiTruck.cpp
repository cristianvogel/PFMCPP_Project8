#include <iostream>
#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::setSpeed(int) { }
void SemiTruck::tryToEvade() { }

void SemiTruck::honk()
{
    std::cout << name << " goes HONK! " << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": I'm pulling over now" << std::endl;
}
