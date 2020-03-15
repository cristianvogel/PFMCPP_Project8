#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);

    void honk();
    
    void tryToEvade() override;

    void setSpeed(int s) override;
};

