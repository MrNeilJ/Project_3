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


void Creature::strengthloss(int opponentRoll) {

}
