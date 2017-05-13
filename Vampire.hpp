//
// Created by Neil on 5/2/2017.
//

#ifndef PROJECT_3_VAMPIRE_HPP
#define PROJECT_3_VAMPIRE_HPP


#include "Creature.hpp"

class Vampire : public Creature{
private:

public:
	Vampire();

	void attack();

	void defend(int);

	void attackDescription(int);
	void defenseDescription(int);
};



#endif //PROJECT_3_VAMPIRE_HPP
