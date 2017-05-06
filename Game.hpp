//
// Created by Neil on 5/2/2017.
//

#ifndef PROJECT_3_GAME_HPP
#define PROJECT_3_GAME_HPP

#include <iostream>
#include "Creature.hpp"
class Game {
private:
	Creature* Opponents[2];
	int currOpp;
	int currAttack;
	int currDefense;
	int currStrengthLoss;

public:
	Game();
	~Game();
	void classDescriptions(int);
	void setOpponent(int, int);
	void round();
	void play();
};


#endif //PROJECT_3_GAME_HPP
