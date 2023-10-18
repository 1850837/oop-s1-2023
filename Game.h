#include <vector>
#include "Character.h"
#include "Utils.h"
#include "Trap.h"

class Game{
    private:
    std::vector<Cell*> grid;

    public:
    Game(){

    }

    std::vector<Cell*>& getGrid(){
        return grid;
    }

    void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){
        Character* array;
        array = new Character[numCharacters];

        Trap* array2;
        array2 = new Trap[numTraps];

        for (int i = 0; i < numCharacters; i++){
            int a = std::get<0>(Utils::generateRandomPos(gridWidth, gridHeight));
            int b = std::get<1>(Utils::generateRandomPos(gridWidth, gridHeight));
            array[i] = Character(a,b);
        }

        for (int i = 0; i < numTraps; i++){
            int a = std::get<0>(Utils::generateRandomPos(gridWidth, gridHeight));
            int b = std::get<1>(Utils::generateRandomPos(gridWidth, gridHeight));
            array2[i] = Trap(a,b);
        }
    }

    void gameLoop(int maxIterations, double trapActivationDistance){

        

    }

    ~Game(){
        //delete[] array;
    }
};