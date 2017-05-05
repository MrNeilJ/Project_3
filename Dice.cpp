//
// Created by Neil on 5/2/2017.
//

#include <cstdlib>
#include "Dice.hpp"

Dice::Dice() {
	sides 	= 6;
	numDie 	= 1;
}

Dice::Dice(int n, int totalDie) {
	sides 	= n;
	numDie 	= totalDie;
}

int Dice::roll() {
	int total = 0;
	for (int i = 0; i < numDie; i++) {
		total += (rand() % sides);
	}
	return total;
}
