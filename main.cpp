#include <iostream>
#include "menuMaker.hpp"

#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"

int main() {
	std::cout << "*****************************************" << std::endl;
	std::cout << "*         MONSTER BATTLE ROYALE         *" << std::endl;
	std::cout << "*****************************************" << std::endl;
	std::cout << "Welcome to Monster Battle Royale! Here you will" 		<< std::endl;
	std::cout << "be battling it out between monsters of all different" << std::endl;
	std::cout << "shapes and sizes.  The rules are simple, get your" 	<< std::endl;
	std::cout << "opponents health to zero.  Winner take all!\n" 		<< std::endl;

	menuMaker monsterSelect("Pick your Creature!",
							"Vampire",
							"Barbarian",
							"Blue Men",
							"Medusa",
							"Harry Potter");

	menuMaker monsterConfirmation(	"Is this the character you'd like to play as?",
									"Yes",
									"No",
									"Quit");

	int monsterChoice = -1;
	int monsterConfirm = -1;

	do {
		monsterSelect.prompt();
		monsterChoice = monsterSelect.getResponse();

		if (monsterChoice == 1) {
			std::cout << "VAMPIRE:" << std::endl;
			std::cout << "--------------------------------" << std::endl;
			std::cout << Vampire.description()				<< std::endl;

			monsterConfirmation.prompt();
			monsterConfirm = monsterConfirmation.getResponse();
		}
		else if (monsterChoice == 2) {
			std::cout << "BARBARIAN:" << std::endl;
			std::cout << "--------------------------------" << std::endl;
			std::cout << Barbarian.description()			<< std::endl;

			monsterConfirmation.prompt();
			monsterConfirm = monsterConfirmation.getResponse();
		}
		else if (monsterChoice == 3) {
			std::cout << "BLUE MEN:" << std::endl;
			std::cout << "--------------------------------" << std::endl;
			std::cout << BlueMen.description()				<< std::endl;

			monsterConfirmation.prompt();
			monsterConfirm = monsterConfirmation.getResponse();
		}
		else if (monsterChoice == 4) {
			std::cout << "MEDUSA:" << std::endl;
			std::cout << "--------------------------------" << std::endl;
			std::cout << Medusa.description()				<< std::endl;

			monsterConfirmation.prompt();
			monsterConfirm = monsterConfirmation.getResponse();
		}
		else if (monsterChoice == 5) {
			std::cout << "HARRY POTTER:" << std::endl;
			std::cout << "--------------------------------" << std::endl;
			std::cout << HarryPotter.description()			<< std::endl;

			monsterConfirmation.prompt();
			monsterConfirm = monsterConfirmation.getResponse();
		}
		else if (monsterChoice == 6) {
			std::cout << "I see the fear is strong in you, goodbye" << std::endl;
		}
		else {
			std::cout << "Incorrect response, try again\n" << std::endl;
		}

	} while(monsterChoice == 4 || monsterChoice > 6 || monsterChoice < 1 &&
		   (monsterConfirm < 1 || monsterConfirm > 2));


	return 0;
}