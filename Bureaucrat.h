// Practical 3: Rock, Paper, Scissors II
// Bureaucrat Interface (Only Plays Paper)
// A1780385 

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Computer.h"

class Bureaucrat: public Computer{
public:
	Bureaucrat();
	char makeMove();
};

#endif // BUREAUCRAT_H