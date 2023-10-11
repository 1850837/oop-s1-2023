#include "Textbased.h"
#include "Wheat.h"
#include "Carrots.h"
#include "Potatoes.h"
#include "Chickens.h"
#include "Cows.h"
#include "Sheep.h"

// Constructor with a title parameter
Textbased::Textbased(const std::string& title) : title(title) {}

// Function to get title
std::string Textbased::getTitle(){
    return title;
}

// Function to display the menu
void Textbased::displayMenu() {
    std::cout << "-----------------------------\n";
    std::cout << "      " << getTitle() << "      \n";
    std::cout << "-----------------------------\n";
    std::cout << "Day " << farm.getDayNum() << " | ";

    switch (farm.getTimeOfDay()) {
        case 0:
            std::cout << "Morning";
        break;
        case 1:
            std::cout << "Midday";
        break;
        case 2:
            std::cout << "Afternoon";
        break;
        default:
            std::cout << "this text should not appear.";
        break;
    }

    std::cout << " | You have $" << farm.getMoney() << " | Goal: $10000\n";

    std::cout << "What would you like to do?\n";
    std::cout << "1. Shop Produce\n";
    std::cout << "2. Buy Upgrades or Land (" << farm.getCurrentLand() << "/" << farm.getMaxLand() << " land)\n";
    std::cout << "3. Sell/Harvest Animals/Crops\n";
}

// Function to display the Farmland array
void Textbased::displayFarmland() {
    cout << " _______________________________________________________________________________\n";

    //top row
    for (int i = 0; i < 10; i++) {
        cout << "|" << farm.getTopRow(i);
    }
    cout << "|\n";

    //middle row
    for (int i = 0; i < 10; i++) {
        cout << "|" << farm.getMiddleRow(i);
    }
    cout << "|\n";

    //bottom row
    for (int i = 0; i < 10; i++) {
        cout << "|" << farm.getBottomRow(i);
    }
    cout << "|\n";

    cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n";
}

// Function to get user choice
int Textbased::getUserChoice() {
    int choice;
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;
    return choice;
}

// Function to shop for produce
void Textbased::shopProduce(){  //<can we make this easier?>
    Wheat a;
    Produce* ptr1 = &a;
    int choice;

    cout << "       Wheat   Carrots Potato  Chicken Cows    Sheep \n";
    cout << "cost   " << ptr1->getBuyingPrice() << "      ";    //Wheat

    Carrots b;
    ptr1 = &a;
    cout << ptr1->getBuyingPrice() << "      "; //Carrots

    Potatoes c;
    ptr1 = &c;
    cout << ptr1->getBuyingPrice() << "      "; //Potatoes

    Chickens d;
    ptr1 = &d;
    cout << ptr1->getBuyingPrice() << "     "; //Chickens

    Cows e;
    ptr1 = &e;
    cout << ptr1->getBuyingPrice() << "     "; //Cows

    Sheep f;
    ptr1 = &f;
    cout << ptr1->getBuyingPrice() << "\n"; //Sheep

    //<add stuff about cost efficiency>

    cout << "What is your choice? (1-6): ";
    cin >> choice;

    farm.plantProduce(choice);

    return;

}

// Function to execute the chosen action
void Textbased::executeAction(int choice){
    switch (choice) {
        case 1:
            std::cout << "You chose to Shop Produce.\n";
            // Add code for shopping produce
            // show produce and plant
            shopProduce();


            break;

        case 2:
            std::cout << "You chose to Buy Upgrades or Lands.\n";
            // Add code for buying upgrades or lands
            

            break;

        case 3:
            std::cout << "You chose to Sell/Harvest Animals/Crops.\n";
            // Add code for selling/harvesting animals/crops

            break;

        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 3.\n";
            exit(0);
    }
}

// Function to start the game loop
void Textbased::startGame() {
    while (1) {
        displayFarmland();
        displayMenu();         // Display the menu
        int choice = getUserChoice();  // Get user choice
        executeAction(choice); // Execute the chosen action
    }
}

// empty lot
//  _______________________________________________________________________________
// |       |       |       |       |       |       |       |       |       |       |
// |       |       |   X   |   X   |   X   |   X   |   X   |   X   |   X   |   X   |
// |       |       |       |       |       |       |       |       |       |       |
//  ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾

//  _______________________________________________________________________________
// |Carrots|Potato | Wheat | Sheep | Cows  |Chicken|       |       |       |       |
// |  $16  |  $50  |  $75  | $150  | $170  | $130  |   X   |   X   |   X   |   X   |
// |  15%  | 100%  |  75%  | $35/d | $40/d | $30/d |       |       |       |       |
//  ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾

//list:
//ensure that table can cope with values of <10 TICK
//Space out the text that gets given
//Remove timechange line
//make title and things only appear once
//make a column next to table for info
//check the values of cost and such appear correct and apply correctly
//continue connecting the front and back