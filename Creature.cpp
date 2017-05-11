//
// Created by Neil on 5/2/2017.
//

#include "Creature.hpp"


/********************************************
 * DICE ROLLERS
 ********************************************/
int Creature::rollAttack() {
	return attackDie.roll();
}

int Creature::rollDefense() {
	 return defenseDie.roll();
}


/********************************************
 * SETTERS
 ********************************************/
void Creature::setAttack(Dice input) {
	attackDie = input;
}

void Creature::setDefense(Dice input) {
	defenseDie = input;
}

void Creature::setArmor(int input) {
	armor = input;
}

void Creature::setStrength(int input) {
	strength = input;
}

void Creature::setLives(int input) {
	lives = input;
}


/********************************************
 * HEALTH MODIFIERS
 ********************************************/
int Creature::strengthloss(int opponentRoll) {
	if ((opponentRoll - currDefense - armor) < 0) {
		strength += 0;
		return 0;
	}
	else {
		strength -= (opponentRoll - currDefense - armor);
		return (opponentRoll - currDefense - armor);
	}
}


/********************************************
 * GETTERS
 ********************************************/
int Creature::getAttack() {
	return currAttack;
}

int Creature::getDefense() {
	return currDefense;
}

int Creature::getLives() {
	return lives;
}

int Creature::getStrength() {
	return strength;
}





