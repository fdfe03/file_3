// Practical 3: Rock, Paper, Scissors II
// Toolbox Interface (Only Plays Scissors)
// A1780385 

#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Computer.h"

class Toolbox: public Computer{
public:
	Toolbox();
	char makeMove();
};

#endif // TOOLBOX_H