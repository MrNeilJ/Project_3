//
// Created by Neil on 5/2/2017.
//

#ifndef PROJECT_3_BARBARIAN_HPP
#define PROJECT_3_BARBARIAN_HPP

#include "Creature.hpp"

class Barbarian : public Creature {
private:

public:
	Barbarian();

	int attack();

	int defend(int);

	void attackDescription(int);
	void defenseDescription(int);
};
#endif //PROJECT_3_BARBARIAN_HPP
