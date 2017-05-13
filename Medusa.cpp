//
// Created by Neil on 5/2/2017.
//

#include <iostream>
#include "Medusa.hpp"

Medusa::Medusa() {
	setAttack(Dice(2, 6));
	setDefense(Dice(1, 6));
	setArmor(3);
	setStrength(8);
	setLives(1);
}

void Medusa::attack() {
	int temp = rollAttack();

	// Use glare instead
	if (temp == 12) {
		temp = 300;
		setCurrAttack(temp);
	}
	// Use standard attack
	else {
		setCurrAttack(temp);
	}
}

void Medusa::defend(int damageDone) {
	// Roll the Medusas defense dice
	int temp = rollDefense();

	// Save that value to a variable for later
	setCurrDefense(temp);

	// Modify their overall health value.
	strengthloss(damageDone);

	// Save the value so we know how much damage was done in the last attack
	setDamageReceived(damageDone);

}

void Medusa::attackDescription(int attackDamage) {
	if (attackDamage > 299) {
		std::cout << "locked eyes with her opponent, and used her glare ability" << std::endl;
	}
	if (attackDamage > 0) {
		std::cout << "used her snakes to bite her opponent." << std::endl;
	}
	else {
		std::cout << "commanded her snakes to strike, but they didn't listen." << std::endl;
	}
}

void Medusa::defenseDescription(int) {
	return;
}


/*
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
	strengthloss(damageDone);

	// Save the value so we know how much damage was done in the last attack
	setDamageReceived(damageDone);

}



void Barbarian::attackDescription(int attackDamage) {
	if (attackDamage > 0) {
		std::cout << "swung their axe valiantly, dealing " << attackDamage << " damage." << std::endl;
	}
	else {
		std::cout << "couldn't muster up the strength to raise their axe, causing them to do "
				  << attackDamage << " damage." << std::endl;
	}

}

void Barbarian::defenseDescription(int) {
	return;
}
*/

