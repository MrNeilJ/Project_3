//
// Created by Neil on 5/2/2017.
//

#include "HarryPotter.hpp"

HarryPotter::HarryPotter() {
	setAttack(Dice(2, 6));
	setDefense(Dice(2, 6));
	setArmor(0);
	setStrength(12);
	setLives(2);
	setSpecial(0);


}

void HarryPotter::attack() {
	int temp = rollAttack();
	setCurrAttack(temp);
}

void HarryPotter::defend(int damageDone) {
	// Roll the Potters defense dice
	int temp = rollDefense();

	// Save that value to a variable for later
	setCurrDefense(temp);

	// Modify their overall health value.
	strengthLoss(damageDone);

	if (getStrength() < 1) {
		if (getLives() == 2) {
			// Utilize the Hogwarts special move (health at 20, lives back down to 1)
			setStrength(20);
			setLives(1);
			setSpecial(1);
		}

	}

}



void HarryPotter::attackDescription(int attackDamage) {
	if (attackDamage > 0) {
		std::cout << "Harry raised his wand and shouted \"Expectopetronum!\"" << std::endl;
	}
	else {
		std::cout << "Harry raised his wand, but couldn't remember what spell he wanted to use..." << std::endl;
	}

}

void HarryPotter::defenseDescription(int) {
	if (getSpecial() == 1) {
		std::cout << "Using his final breath, Harry called upon the staff of Hogwarts to strengthen him." << std::endl;
		setSpecial(0);
	}
}

