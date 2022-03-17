// Practical 3: Rock, Paper, Scissors II
// Tournament Interface
// A1780385 

#include "Tournament.h"
#include "Referee.h"
using namespace std;

Tournament::Tournament(){

}


Player* Tournament::Round(Player* comp1, Player* comp2){

	Referee ref;
	int W = 0; // Wins
	int L = 0; // Loses
	int T = 0; // Ties

	for(int i = 0; i < 5; i++){

        char result = ref.compare(comp1, comp2);
        
        if (result == 'W'){
			W++;
		} else if(result == 'L'){
			L++;
		} else {
			T++;
		}
	}

	comp1->resetCTR();
	comp2->resetCTR();

	if(W >= L){
		return comp1;
	} else {
		return comp2;
	}

}

Player* Tournament::run(array<Player*, 8> competitors){
    
    Player* Winner12 = Round(competitors[0], competitors[1]); // 1st Bracke
    Player* Winner34 = Round(competitors[2], competitors[3]); // 2nd Bracke;
    Player* Winner56 = Round(competitors[4], competitors[5]); // 3rd Bracket
    Player* Winner78 = Round(competitors[6], competitors[7]); // 4th Bracket

    Player* Semi1Win = Round(Winner12, Winner34); // Semi Final
    Player* Semi2Win = Round(Winner56, Winner78); // Semi Final
    
    Winner = Round(Semi1Win, Semi2Win); // Final 
    
    return Winner;
}