// Practical 3: Rock, Paper, Scissors II
// Human Player Interface
// A1780385 

#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player{

    public:
    Human();
    char makeMove();
};

#endif // HUMAN_H