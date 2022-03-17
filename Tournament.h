// Practical 3: Rock, Paper, Scissors II
// Tournament Interface
// A1780385 

#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "Player.h"
#include <array>

class Tournament{

    public:
	Tournament();
	Player* run(std::array<Player*,8>competitors);
	Player* Round(Player* comp1, Player* comp2);

	private:
	Player* Winner;
};

#endif // TOURNAMENT_H