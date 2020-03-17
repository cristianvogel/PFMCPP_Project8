#include "Vehicle.h"
#include "Highway.h"
#include "Car.h"
#include "Motorcycle.h"
#include "SemiTruck.h"


#include <cassert>

void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    */
    if ( Car* c = dynamic_cast<Car*>(v) ) 
    {
        c->closeWindows();
    } 
    else if ( Motorcycle* mc = dynamic_cast<Motorcycle*>(v) )
    {
        mc->lanesplitAndRace(100);
    }
    else if ( SemiTruck* t = dynamic_cast<SemiTruck*>(v) )
    {
        t->honk();
    }
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    /*
    depending on the derived type, call the member function that tries to evade the cops. 

    trucks pull over, but cars and bikes try to evade!!
    */
    if ( Car* c = dynamic_cast<Car*>(v) ) 
    {
        c->tryToEvade();
    } 
    else if ( SemiTruck* t = dynamic_cast<SemiTruck*>(v) )
    {
        t->pullOver();
    }
    else if ( Motorcycle* mc = dynamic_cast<Motorcycle*>(v) )
    { 
        mc->tryToEvade();
    }
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}
