#pragma once

#include <string>
#include <iostream>

struct HighwayPatrol;

struct Vehicle
{
    Vehicle(const std::string& n);
    virtual ~Vehicle();

    virtual void setSpeed(int s);
    virtual void tryToEvade();
    

    Vehicle(const Vehicle&);
    Vehicle& operator=(const Vehicle&);

protected:
    int speed = 0;
    std::string name;

    friend HighwayPatrol;
};
