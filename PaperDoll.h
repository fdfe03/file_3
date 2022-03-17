// Practical 3: Rock, Paper, Scissors II
// PaperDoll Interface (Plays Paper, Scissors, Scissors)
// A1780385 

#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"


class PaperDoll: public Computer{
    public:
	    PaperDoll();
	    char makeMove();
};

#endif // PAPERDOLL_H