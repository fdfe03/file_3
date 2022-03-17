// Practical 3: Rock, Paper, Scissors II
// Avalanche Interface (Only Plays Rock)
// A1780385 

#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Computer.h"

class Avalanche: public Computer{
public:
	Avalanche();
	char makeMove();
};

#endif // AVALANCHE_H