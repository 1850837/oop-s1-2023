#ifndef LAND_H
#define LAND_H

#include "Produce.h"
#include "Crops.h"
#include "Animals.h"
//#include "Farm.h"

class Farm; //<if this doesn't work, we need to rework the Farm class entirely>


class Land{
    protected:
    bool empty_or_used;
    bool unlocked;
    Produce planted;

    public:
    //constructors
    Land();     //initialises without produce, and empty

    //functions
    bool getEmptyOrUsed();
    void setEmptyOrUsed(bool a);
    bool getUnlocked();
    Produce getPlanted();
    void setUnlocked(bool b);
    void setProduce(Produce newPlanted);
    //<put the above in the diagram>

    //void plantProduce(int produceIteration, Farm farm);    //Also takes away money and only does the following:
                                                //this function finds the first available element in
                                                //the Land vector and assigns that pointer to a produce
                                                //of iteration produceIteration

    void harvestProduce(); //this function removes the produce and adds money

    //destructor

};

#endif