#include "Cell.h"

class Character : public Cell {
    protected:

    public:
    Character(){
        position = std::make_tuple(0,0);
        type = 'C';
    }

    Character(int x, int y){
        position = std::make_tuple(x,y);
        type = 'C';
    }

    void move(int dx, int dy){
        setPos(std::get<0>(getPos()) + dx, std::get<1>(getPos()) + dy);
        return;
    }
};