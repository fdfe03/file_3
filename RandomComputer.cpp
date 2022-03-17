// Practical 3: Rock, Paper, Scissors II
// RandomComputer Function (Randomly Generates A Move)
// A1780385 

#include <iostream>
#include <ctime>
#include "RandomComputer.h"

RandomComputer::RandomComputer(){
}

char RandomComputer::makeMove(){
    srand(time(NULL));
    int randNum = rand() % 3;

    switch(randNum){
        case 0:
        move = 'R';
        break;

        case 1:
        move = 'P';
        break;

        case 2:
        move = 'S';
        break;
    }
    return move;
}