#include "Game.h"
#include<string>
#include <iostream>
#include <iomanip>

vector<Dealer*>dealerSet;
vector<Player*>playerSet;

/*Add a Dealer to the game.*/
void addDealer() {
	Dealer* d = new Dealer();
	dealerSet.push_back(d);
}

/*Add a Player to the game.*/
void addPlayer() {
	Player* d = new Player();
	playerSet.push_back(d);
}

/*Start a game and configure the deck and players.*/
void start() {
	cout << "Game Start" <<endl;
	init_deck();
	print_deck();
	shuffler();
	print_deck();
	Dealer* d = dealerSet.front();
	d->setPlayerSet(playerSet);
	d->distribute();
}

/*Check who wins in a round.*/
void checkWin() {
	cout << "Check Win" << endl;
	Dealer* d = dealerSet.front();
	int dealerHand=d->checkHand();
	int player = 0;

	string res = "";
	for (auto p : d->getPlayerSet()) {
		player++;
		cout << "Player" << player << "'s Hand" << endl;
		int playerHand = p->checkHand();
		if (playerHand == 21 && dealerHand == 21) {
			res += "Player";
			res += (char)(player + '0');
			res+=" Blackjack Push!\n";
		}else
		if (playerHand == 21 && dealerHand != 21) {
			res += "Player";
			res += (char)(player + '0');
			res += " Wins, Blackjack!\n";
		}else
		if(playerHand != 21 && dealerHand == 21) {
			res+= "Dealer Wins, Blackjack!\n";
		}else
		if (playerHand <21 && playerHand > dealerHand) {
			res+= "Player";
			res+= (char)(player + '0');
			res += " Wins!\n";
		}else
		if (playerHand > 21) {
			res+= "Player";
			res+= (char)(player + '0');
			res += " Bust, lose!\n";
		}else
		if (dealerHand > 21) {
			res+= "Dealer Bust, Player Wins!\n";
		}else
		if (playerHand == dealerHand) {
			res += "Player";
			res += (char)(player + '0');
			res+= " Push!\n";
		}else
		if (playerHand < dealerHand) {
			res += "Player";
			res += (char)(player + '0');
			res += " lose!\n";
		}
	}
		cout << res << endl;
}

/*Take turns, each non-blackjack player can choose to hit or stand,
              if hands is more than 21, it is a bust! 
			  After all players' turn end, Dealer must Hit until hand is more than 17,
			  if hand is more than 21, it is a bust, else, checkWin().*/
void turn() {
	Dealer* d = dealerSet.front();
	int player = 0;
	for (auto p : d->getPlayerSet()) {
		player++;
		cout << endl;
		cout << "******Player" << player << "'s move*******" << endl;
		cout << "Player" << player << "'s Hand" << endl;
		int playerHand = p->checkHand();
		char c = ' ';
		while (c != 'S' && playerHand < 21) {
			c = p->choice();
			if (c == 'H') 
				p->hit();
			else if (c == 'S') 
				/*Stand, do nothing*/;
			else 
				cout << "Invalid input, try again." << endl;
			playerHand = p->checkHand();
		}
	}
	cout << "Turns end!" << endl;
	while (d->checkHand() < 17) 
		d->hit();
}