#include <iostream>
using namespace std;

int count(int array[], int n){

    //initialising
    int num = 0;

    for (int i = 0; i < n; ++i){
        if (array[i] % 2 == 0){
            num = num + 1;
        }
    }

    return num;

}