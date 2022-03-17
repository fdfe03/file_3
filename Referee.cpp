// Practical 3: Rock, Paper, Scissors II
// Referee Function
// A1780385 

#include <iostream>
#include "Referee.h"

Referee::Referee(){

}

char Referee::compare(Player* player1, Player* player2){
    p1Move = player1->makeMove();
	p2Move = player2->makeMove();
    
    switch(p1Move){
		case 'R':
			if (p2Move == ('R')){
				result='T';
			} else if (p2Move == ('P')){
				result='L';
			} else {
				result='W';
			}
			break;

		case 'P':
			if (p2Move == ('R')){
				result = 'W';
			} else if (p2Move == ('P')){
				result = 'T';
			} else {
				result = 'L';
			}
			break;

		case 'S':
			if (p2Move == ('R')){
				result = 'L';
			} else if (p2Move==('P')){
				result = 'W';
			} else {
				result = 'T';
			}
			break;
	}
	return result;
}