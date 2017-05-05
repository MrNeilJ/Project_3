//
// Created by Neil on 5/2/2017.
//

#ifndef PROJECT_3_CREATURE_HPP
#define PROJECT_3_CREATURE_HPP

#include "Dice.hpp"

class Creature {
private:
	Dice 	attack;
	Dice 	defense;
	int		armor;
	int 	strength;
	int 	lives;

	int		currAttack;
	int 	currDefense;
public:
	// Setters
	void setAttack(Dice);
	void setDefense(Dice);
	void setArmor(int);
	void setStrength(int);
	void setLives(int);


	void rollAttack();
	void rollDefense();
	virtual int strengthloss(int);
	int getLives();
	int getAttack();
	int getDefense();
	int getStrength();


};


#endif //PROJECT_3_CREATURE_HPP
