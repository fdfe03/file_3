// Practical 3: Rock, Paper, Scissors II
// RandomComputer Interface (Randomly Generates A Move)
// A1780385 

#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

#include "Computer.h"
class RandomComputer: public Computer{
public:
	RandomComputer();
	char makeMove();
};

#endif // RANDOMCOMPUTER_H