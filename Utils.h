#include <tuple>
#include <math.h>

#ifndef UTILS_H
#define UTILS_H

class Utils{
    protected:

    public:
    Utils(){

    }

    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
        static int s = 0;
        std::tuple<int,int> pos;

        if (s == 0){
            pos = std::make_tuple(0,0);
        }
        else{
            pos = std::make_tuple(std::rand() % gridWidth,std::rand() % gridHeight);
        }

        return pos;
    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        double distance;

        distance = sqrt(((std::get<0>(pos1))^2) + ((std::get<1>(pos1))^2))
                    - sqrt(((std::get<0>(pos2))^2) + ((std::get<1>(pos2))^2));

        return distance;}
};

#endif