//
// Created by Neil on 5/2/2017.
//

#include "Creature.hpp"

void Creature::rollAttack() {
	currAttack = attack.roll();
}

void Creature::rollDefense() {
	currDefense = defense.roll();
}

void Creature::setAttack(Dice input) {
	attack = input;
}

void Creature::setDefense(Dice input) {
	defense = input;
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





