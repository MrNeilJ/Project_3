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



int Medusa::getAttack() {
	return Creature::getAttack();
}
