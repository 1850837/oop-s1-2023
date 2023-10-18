#include "Cell.h"
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
    
    std::tuple<int,int> c;
    std::cout << "Distance is " << Utils::calculateDistance(newCell.getPos(), Utils::generateRandomPos(10,10)) << "\n";

    return 0;
}