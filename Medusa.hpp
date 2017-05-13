//
// Created by Neil on 5/2/2017.
//

#ifndef PROJECT_3_MEDUSA_HPP
#define PROJECT_3_MEDUSA_HPP


#include "Creature.hpp"

class Medusa : public Creature{
private:

public:
	Medusa();

	void attack();
	void defend(int);

	void attackDescription(int);
	void defenseDescription(int);

};


#endif //PROJECT_3_MEDUSA_HPP
