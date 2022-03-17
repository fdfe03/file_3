// Practical 3: Rock, Paper, Scissors II
// Referee Interface
// A1780385 

#ifndef REFEREE_H
#define REFEREE_H

#include "Human.h"
#include "Computer.h"


class Referee{

    public:
    Referee();
    char compare(Player*, Player*);

    private:
        char result;
        char p1Move;
        char p2Move;
};

#endif // REFEREE_H