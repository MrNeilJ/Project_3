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
}

void Barbarian::description() {
	std::cout << "Think Conan or Hercules from the movies. Big sword, big muscles, bare torso." << std::endl;

}
