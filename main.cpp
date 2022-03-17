// Practical 3: Rock, Paper, Scissors II
// Main 
// A1780385 

#include <iostream>
#include <array>
#include <string>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Avalanche.h"
#include "RandomComputer.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Tournament.h"

using namespace std;

int main(){

    array<Player*,8> competitors;

    Player* P1 = new Avalanche();
    competitors[0] = P1;

    Player* P2 = new Bureaucrat();
    competitors[1] = P2;

    Player* P3 = new Bureaucrat();
    competitors[2] = P3;

    Player* P4 = new Toolbox();
    competitors[3] = P4;

    Player* P5 = new Toolbox();
    competitors[4] = P5;

    Player* P6 = new Crescendo();
    competitors[5] = P6;

    Player* P7 = new Crescendo();
    competitors[6] = P7;

    Player* P8 = new FistfullODollars();
    competitors[7] = P8;

    Tournament rumble;
    cout << rumble.run(competitors);
}
