//
// Created by Neil on 5/2/2017.
//

#include "BlueMen.hpp"

BlueMen::BlueMen() {
	setAttack(Dice(2, 10));
	setDefense(Dice(3, 6));
	setArmor(3);
	setStrength(12);
	setLives(1);
}

void BlueMen::attack() {
	int temp = rollAttack();
	setCurrAttack(temp);
}

void BlueMen::defend(int damageDone) {
	// Roll the BlueMens defense dice
	int temp = rollDefense();

	// Save that value to a variable for later
	setCurrDefense(temp);

	// Modify their overall health value.
	strengthloss(damageDone);

	// Save the value so we know how much damage was done in the last attack
	setDamageReceived(damageDone);

	// Check to see if we need to modify their defense die
	if(getStrength() < 4) {
		setDefense(Dice(1,6));
	}
	else if(getStrength() < 8) {
		setDefense(Dice(2,6));
	}
}

void BlueMen::attackDescription(int) {
	if (getAttack() > 1) {
		std::cout << "jumped onto their opponent, pummeling them to the floor" << std::endl;
	}
	else {
		std::cout << "bumped into it's teammate, and began bickering, ignoring their opponent." << std::endl;
	}
}

void BlueMen::defenseDescription(int) {
	return;
}
