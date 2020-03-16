#pragma once 

#include "Vehicle.h"
#include "Highway.h"

struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();
    void scanHighway(Highway* h);
    void pullOver( Vehicle* v, bool willArrest, Highway* h );
    std::string getVehicleType( Vehicle* v);

    virtual ~HighwayPatrol();
    
    HighwayPatrol(const HighwayPatrol&);
    HighwayPatrol& operator=(const HighwayPatrol&);
};
