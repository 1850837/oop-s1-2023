#include <tuple>

class GameEntity{
    private:
    std::tuple<int, int> position;
    char type;

    public:
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos();
    char getType();
};

GameEntity::GameEntity(int x, int y, char new_type){
    position = std::make_tuple(x,y);
    type = new_type;
}

std::tuple<int, int> GameEntity::getPos(){
    return position;
}

char GameEntity::getType(){
    return type;
}