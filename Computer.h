// Practical 3: Rock, Paper, Scissors II
// Computer Player Interface
// A1780385 

#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer : public Player{

    public:
    Computer();
    virtual char makeMove();
    
};

#endif // COMPUTER_H