#include <tuple>

class Cell{
    protected:
    std::tuple<int, int> position;
    char type;

    public:
    Cell();
    Cell(int x, int y, char new_type);
    std::tuple<int, int> getPos();
    char getType();
    void setPos(int x, int y);
    void setType(char new_type);
};

Cell::Cell(){
    position = std::make_tuple(0,0);
    type = 0;
}

Cell::Cell(int x, int y, char new_type){
    position = std::make_tuple(x,y);
    type = new_type;
}

char Cell::getType(){
    return type;
}

void Cell::setPos(int x, int y){
    position = std::make_tuple(x,y);
}

void Cell::setType(char new_type){
    type = new_type;
}