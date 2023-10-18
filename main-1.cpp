#include "Effect.h"
#include "Utils.h"
#include <iostream>
#include <tuple>

int main() {

    Cell newCell = Cell(1,2,'c');

    int a = std::get<0>(newCell.getPos());
    int b = std::get<1>(newCell.getPos());

    std::cout << "Pos is " << a << " " << b << "\n";
    std::cout << "Type is " << newCell.getType() << "\n";
    
    Utils newUtils = Utils();
    std::tuple<int,int> c;
    c = newUtils.generateRandomPos(10,10);
    std::cout << "Distance is " << newUtils.calculateDistance(newCell.getPos(), c) << "\n";

    return 0;
}