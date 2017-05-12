//
// Created by Neil on 5/2/2017.
//

#ifndef PROJECT_3_CREATURE_HPP
#define PROJECT_3_CREATURE_HPP

#include "Dice.hpp"
#include <iostream>

class Creature {
private:
	Dice 	attackDie;
	Dice 	defenseDie;
	int		armor;
	int 	strength;
	int 	lives;

	int		currAttack;
	int 	currDefense;
	int		damageReceived;
public:
	// Setters
	void setAttack(Dice);
	void setDefense(Dice);
	void setArmor(int);
	void setStrength(int);
	void setLives(int);
	void setCurrAttack(int);
	void setCurrDefense(int);

	virtual void strengthloss(int);

	// Dice Rollers
	int rollAttack();
	int rollDefense();

	// Attack and Defense Layout
	virtual int attack() = 0;
	virtual int defend(int) = 0;
	virtual int strengthLoss(int) = 0;

	virtual void attackDescription(int) = 0;
	virtual void defenseDescription(int) = 0;

	// Getters
	int getLives();
	virtual int getAttack();
	int getDefense();
	int getStrength();
	int getArmor();
	int getDamageReceived();


};


#endif //PROJECT_3_CREATURE_HPP
