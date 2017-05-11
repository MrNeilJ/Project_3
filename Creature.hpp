//
// Created by Neil on 5/2/2017.
//

#ifndef PROJECT_3_CREATURE_HPP
#define PROJECT_3_CREATURE_HPP

#include "Dice.hpp"

class Creature {
private:
	Dice 	attackDie;
	Dice 	defenseDie;
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

	virtual int strengthloss(int);

	// Dice Rollers
	void rollAttack();
	void rollDefense();

	// Attack and Defense Layout
	virtual int attack() = 0;
	virtual int defend() = 0;

	// Getters
	int getLives();
	virtual int getAttack();
	int getDefense();
	int getStrength();


};


#endif //PROJECT_3_CREATURE_HPP
