// Practical 3: Rock, Paper, Scissors II
// Player Function
// A1780385 

#include "Player.h"

Player::Player(){

}

char Player::makeMove(){
    move = ' ';
    return move;
}

void Player::resetCTR(){
    ctr = 0;
}