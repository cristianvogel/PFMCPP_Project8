#include "Car.h"

#include <iostream>

Car::Car(const std::string& n) : Vehicle(n) {}

void Car::closeWindows()
{
    setSpeed(70);
    std::cout << name << ": closing the windows!" << std::endl;
}

void Car::tryToEvade()
{
    setSpeed(0);
    std::cout << name << ":  hello officer, maybe we can settle this right here in Fargo? ( waves $100 at officer )" << std::endl;
}

