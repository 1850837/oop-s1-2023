#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle{

    public:
    //empty constructor
    Bus();

    //constructor
    Bus(int ID);

    //functions
    int getParkingDuration();

};

#endif