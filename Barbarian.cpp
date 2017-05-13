//
// Created by Neil on 5/2/2017.
//

#include <iostream>
#include "Barbarian.hpp"

Barbarian::Barbarian() {
	setAttack(Dice(2, 6));
	setDefense(Dice(2, 6));
	setArmor(0);
	setStrength(12);
	setLives(1);
	setSpecial(0);

}

void Barbarian::attack() {
	int temp = rollAttack();
	setCurrAttack(temp);
}

void Barbarian::defend(int damageDone) {
	// Roll the Barbs defense dice
	int temp = rollDefense();

	// Save that value to a variable for later
	setCurrDefense(temp);

	// Modify their overall health value.
	strengthLoss(damageDone);

}



void Barbarian::attackDescription(int attackDamage) {
	if (attackDamage > 0) {
		std::cout << "The Barbarian swung their axe valiantly." << std::endl;
	}
	else {
		std::cout << "The Barbarian couldn't muster up the strength to raise their axe..." << std::endl;
	}

}

void Barbarian::defenseDescription(int) {
	return;
}


