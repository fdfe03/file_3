// Practical 3: Rock, Paper, Scissors II
// Player Interface
// A1780385 

#ifndef PLAYER_H
#define PLAYER_H

class Player{

    public:
    Player();
    virtual char makeMove();
    void resetCTR();

    protected:
    char move;
    int ctr;

};

#endif // PLAYER_H