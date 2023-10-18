#include "Cell.h"
#include "Effect.h"

class Trap : public Cell, public Effect {

    protected:
    bool active;

    public:
    Trap(int x, int y){
        position = std::make_tuple(x,y);
        type = 'T';
        active = 1;
    }

    bool isActive(){
        return active;
    }

    void apply(Cell& cell){
        cell.setType('T');
        active = 0;
    }

};