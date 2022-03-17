// Practical 3: Rock, Paper, Scissors II
// Crescendo Interface (Plays Paper, Scissors, Rock)
// A1780385 

#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Computer.h"


class Crescendo: public Computer{
    public:
	    Crescendo();
	    char makeMove();
};

#endif // CRESCENDO_H