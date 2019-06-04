#include "player.h"
#include <iostream>
#include <iomanip>


/*Take another card from top of the deck.*/

void Player::hit() {
	this->hand.push_back(getCard());
}

/*Take no more cards */

void Player::stand() {
	//Stand, do nothing.
}

/*The player is allowed to increase the initial bet by up to 100% in exchange for committing to stand after receiving exactly one more card.*/

void Player::Double() {}

/*If the first two cards of a hand have the same value, the player can split them into two hands, by moving a second bet equal to the first into an area outside
the betting box.*/

void Player::split() {}

/*Check the sum of player's cards.*/

int Player::checkHand() {
	int sum = 0;
	for (auto i : this->hand) {
		if (i == 1 && sum + 11 <= 21) i = 11;
		cout << "Card:" << i << endl;
		sum += i;
	}
	return sum;
}

/*In each turn, Players can choose to Hit or Stand if their hand is less than 21*/

char Player::choice() {
	cout << "Non Blackjack, Hit or Stand?" << endl;
	cout << "Press H to draw a card, press S to stand." << endl;
	char c = ' ';
	cin >> c;
	return c;
}