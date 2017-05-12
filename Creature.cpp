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

void Creature::setCurrAttack(int atkDamage) {
	currAttack = atkDamage;
}

void Creature::setCurrDefense(int defensePts) {
	currDefense = defensePts;
}



/********************************************
 * HEALTH MODIFIERS
 ********************************************/
void Creature::strengthloss(int opponentRoll) {
	if ((opponentRoll - currDefense - armor) < 0) {
		strength += 0;
		damageReceived = 0;
	}
	else {
		strength -= (opponentRoll - currDefense - armor);
		damageReceived = (opponentRoll - currDefense - armor);
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

int Creature::getArmor() {
	return armor;
}

int Creature::getDamageReceived() {
	return damageReceived;
}





