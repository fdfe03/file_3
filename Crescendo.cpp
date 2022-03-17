// Practical 3: Rock, Paper, Scissors II
// Crescendo Function (Plays Paper, Scissors, Rock)
// A1780385 

#include "Crescendo.h"

Crescendo::Crescendo(){
	ctr = 0;
}

char Crescendo::makeMove(){
	if ((ctr % 3) == 0){
		move = 'P';
	} else if ((ctr % 3) == 1){
		move = 'S';
	} else {
		move = 'R';
	}

	ctr++;
	return move;
}