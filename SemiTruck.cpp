#include <iostream>
#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::honk()
{
    std::cout << name << " goes HONK! " << std::endl;
}

void SemiTruck::tryToEvade()
{
    setSpeed(0);
    std::cout << name << ": hello officer, maybe we can settle this right here in Fargo? ( waves $100 at officer )" << std::endl;
}

void SemiTruck::setSpeed(int s)
{
    Vehicle::setSpeed(s);
}
