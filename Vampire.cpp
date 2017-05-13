//
// Created by Neil on 5/2/2017.
//

#include "Vampire.hpp"
Vampire::Vampire() {
	setAttack(Dice(2, 6));
	setDefense(Dice(2, 6));
	setArmor(0);
	setStrength(12);
	setLives(1);

}

void Vampire::attack() {
	int temp = rollAttack();
	setCurrAttack(temp);
}

void Vampire::defend(int damageDone) {
	// Check to see if the vampires special will activate
	setSpecial(rand() % 2);

	if (getSpecial()) {
		setCurrDefense(500);
		strengthLoss(0);
		// Save the value so we know how much damage was done in the last attack
		setDamageReceived(0);
	}
	else {
		// Roll the Vampires defense dice
		int temp = rollDefense();

		// Save that value to a variable for later
		setCurrDefense(temp);

		// Modify their overall health value.
		strengthLoss(damageDone);
	}

}



void Vampire::attackDescription(int attackDamage) {
	if (attackDamage > 0) {
		std::cout << "The Vampire bit their opponent, sucking their blood." << std::endl;
	}
	else {
		std::cout << "The Vampire smelled garlic on the opponent, causing him to wince" << std::endl;
	}

}

void Vampire::defenseDescription(int specialInput) {
	if (getSpecial()) {
		std::cout << "But the Vampire locked eyes with them, and used his charm to subdue them." << std::endl;
		setSpecial(0);
	}
	else{
		return;
	}
}

