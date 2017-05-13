//
// Created by Neil on 5/2/2017.
//

#ifndef PROJECT_3_HARRYPOTTER_HPP
#define PROJECT_3_HARRYPOTTER_HPP


#include "Creature.hpp"

class HarryPotter : public Creature {
private:

public:
	HarryPotter();

	void attack();

	void defend(int);

	void attackDescription(int);
	void defenseDescription(int);

};


#endif //PROJECT_3_HARRYPOTTER_HPP
