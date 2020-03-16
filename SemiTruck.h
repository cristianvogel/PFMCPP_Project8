#pragma once

#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& s);

    void honk();
    void pullOver();

    virtual ~SemiTruck();
    
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);
};
