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
    setSpeed(120);
    std::cout << name << ": i got a smokey on my tail!" << std::endl;
}

void Car::setSpeed(int s)
{
     if( s < 90 )
    {
        //ignore the request to lower the speed
        // middle finger text emoji
        std::cout<< name << "  t(*_*) " << std::endl;
    }
    else
    {
        speed = s;
    }
}
