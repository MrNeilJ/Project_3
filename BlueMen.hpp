//
// Created by Neil on 5/2/2017.
//

#ifndef PROJECT_3_BLUEMEN_HPP
#define PROJECT_3_BLUEMEN_HPP


#include "Creature.hpp"

class BlueMen : public Creature {
private:

public:
	BlueMen();

	void attack();
	void defend(int);

	void attackDescription(int);
	void defenseDescription(int);

};


#endif //PROJECT_3_BLUEMEN_HPP
