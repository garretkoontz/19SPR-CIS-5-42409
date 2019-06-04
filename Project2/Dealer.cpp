#include <iostream>
#include <vector>

#include "Dealer.h"

/*Initialize player set.*/

void Dealer::setPlayerSet(vector<Player*>& playerSet) {
	this->playerSet = playerSet;
}

/* Get player set.
 */
vector<Player*> Dealer::getPlayerSet() {
	return this->playerSet;
}

/*Take another card from top of the deck.*/

void Dealer::hit() {
	this->hand.push_back(getCard());
}

/*The player or players are dealt a two-card hand.*/

void Dealer::distribute() {
	
	this->hit();
	this->hit();

	for (auto p : this->playerSet) {
		p->hit();
		p->hit();
	}
}

/*Check the sum of Dealer's cards.*/
int Dealer::checkHand() {
	int sum = 0;
	cout << "Dealer Hand:" << endl;
	for (auto i : this->hand) {
		if (i == 1 && sum + 11 <= 21) i = 11;
		cout << "Card:" << i << endl;
		sum += i;
	}
	return sum;
}