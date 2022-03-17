// Practical 3: Rock, Paper, Scissors II
// PaperDoll Interface (Plays Paper, Scissors, Scissors)
// A1780385 

#include "PaperDoll.h"

PaperDoll::PaperDoll(){
	ctr = 0;
}

char PaperDoll::makeMove(){
	if ((ctr % 3) == 0){
		move = 'P';
	} else if ((ctr % 3) == 1){
		move = 'S';
	} else {
		move = 'S';
	}

	ctr++;
	return move;
}