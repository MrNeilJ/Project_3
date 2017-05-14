//
// Created by Neil on 5/2/2017.
//

#include "Game.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"

void Game::classDescriptions(int userChoice) {
	if (userChoice == 1) {
		std::cout << "Suave, debonair, but vicious and surprisingly resilient!\n" << std::endl;
	}
	else if (userChoice == 2) {
		std::cout << "Think Conan or Hercules from the movies. Big sword, big muscles, bare torso.\n" << std::endl;
	}
	else if (userChoice == 3) {
		std::cout << "They are small (6\' tall), fast and tough. So they are hard to hit and can take\n"
					 "some damage. As for the attack value, you can do a LOT of damage when you can \n"
					 "crawl inside the armor or clothing of your opponent.\n" << std::endl;
	}
	else if (userChoice == 4) {
		std::cout << "Scrawny lady with snakes for hair. They help with fighting. Just don’t look at her!\n" << std::endl;
	}
	else if (userChoice == 5) {
		std::cout << "Why are you reading this? How can you not know who Harry Potter is?\n" << std::endl;
	}


}

Game::Game() {
	currOpp = 0;
}

void Game::setOpponent(int currOpp, int userCreature) {
	if (userCreature == 1) {
		Opponents[currOpp] = new Vampire;
	}
	else if (userCreature == 2) {
		Opponents[currOpp] = new Barbarian;
	}
	else if (userCreature == 3) {
		Opponents[currOpp] = new BlueMen;
	}
	else if (userCreature == 4) {
		Opponents[currOpp] = new Medusa;
	}
	else if (userCreature == 5) {
		Opponents[currOpp] = new HarryPotter;
	}
}

void Game::round() {
	// If it is opponent one's turn

	if (currOpp == 0) {
		std::cout << "OPPONENT 1's TURN TO ATTACK:" << std::endl;
		std::cout << "----------------------------------------" << std::endl;

		Opponents[0]->attack();
		Opponents[1]->defend(Opponents[0]->getAttack());


		Opponents[0]->attackDescription(Opponents[1]->getDamageReceived());
		Opponents[1]->defenseDescription(Opponents[1]->getDefense());



		// Print the actual results for the round
		std::cout << "ROUND " << turn << " STATS" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Opponent 1's Attack Roll:  "   << Opponents[0]->getAttack()  << std::endl;
		std::cout << "Opponent 2's Defense Roll: "   << Opponents[1]->getDefense() << std::endl;
		std::cout << "\nRound Strength Loss:        " << Opponents[1]->getDamageReceived() << std::endl;

		currOpp = 1;
	}
	else {
		std::cout << "OPPONENT 2's TURN TO ATTACK:" << std::endl;
		std::cout << "----------------------------------------" << std::endl;

		Opponents[1]->attack();
		Opponents[0]->defend(Opponents[1]->getAttack());


		Opponents[1]->attackDescription(Opponents[0]->getDamageReceived());
		Opponents[0]->defenseDescription(Opponents[0]->getSpecial());



		// Print the actual results for the round
		std::cout << "ROUND " << turn << " STATS" << std::endl;		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Opponent 2's Attack Roll:  "   << Opponents[1]->getAttack()  << std::endl;
		std::cout << "Opponent 1's Defense Roll: "   << Opponents[0]->getDefense() << std::endl;
		std::cout << "\nRound Strength Loss:       " << Opponents[0]->getDamageReceived() << std::endl;

		currOpp = 0;
	}

	std::cout << "\nRemaining Strength:" << std::endl;
	std::cout << "Opponent 1: " << Opponents[0]->getStrength() << std::endl;
	std::cout << "Opponent 2: " << Opponents[1]->getStrength() << "\n" << std::endl;

	if (Opponents[0]->getStrength() < 1){
		Opponents[0]->setLives(Opponents[0]->getLives() - 1);
	}
	else if	(Opponents[1]->getStrength() < 1) {
		Opponents[1]->setLives(Opponents[1]->getLives() - 1);
	}

	turn++;
}

void Game::play() {
	while(Opponents[0]->getLives() != 0 && Opponents[1]->getLives() != 0) {
		round();
	}

	std::cout << "GAME COMPLETE" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	if (Opponents[0]->getLives() == 0) {
		std::cout << "The winner is: OPPONENT 2" << std::endl;
	}
	else {
		std::cout << "The winner is: OPPONENT 1" << std::endl;
	}

}

Game::~Game() {
	delete Opponents[0];
	delete Opponents[1];
	*Opponents = nullptr;
}


