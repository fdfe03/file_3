// Practical 3: Rock, Paper, Scissors II
// FistfullODollars Function (Plays Rock, Paper, Paper}
// A1780385 

#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
	ctr = 0;
}

char FistfullODollars::makeMove(){
	if ((ctr % 3) == 0){
		move = 'R';
	} else if ((ctr % 3) == 1){
		move = 'P';
	} else {
		move = 'P';
	}

	ctr++;
	return move;
}