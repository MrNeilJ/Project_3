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

}

int Barbarian::attack() {
	int temp = rollAttack();
	setCurrAttack(temp);
	return temp;
}

int Barbarian::defend(int damageDone) {
	int temp = rollDefense();
	setCurrDefense(temp);
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


