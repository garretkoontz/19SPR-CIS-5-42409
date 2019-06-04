#include "Deck.h"
#include <vector>

vector<int>deck;

/*Initialize a 52 card deck.*/

void init_deck() {
    
    int Ace = 1;
int J = 10;
int Q = 10;
int K = 10;
	deck = { Ace,2,3,4,5,6,7,8,9,10,J,Q,K,
	         Ace,2,3,4,5,6,7,8,9,10,J,Q,K,
	         Ace,2,3,4,5,6,7,8,9,10,J,Q,K,
	         Ace,2,3,4,5,6,7,8,9,10,J,Q,K };
}

/*Shuffle the 52 card deck.*/

void shuffler() {
	srand((unsigned)time(0));
	for (int i = 0; i < 52; i++) 
		swap(deck[i], deck[rand() % 52]);
	cout << "Deck Shuffled" << endl;
}

/*Print the deck.*/

void print_deck() {
	cout << "deck:" << endl;
	int t=0;
	for (auto i : deck) {
		cout << i << " ,";
		t++;
		if (t % 13 == 0) cout << endl;
	}
}

/*Draw a card from deck.*/
int getCard() {
	int card=deck.front();
	deck.erase(deck.begin());
	return card;
}

/*Check if the deck is empty.*/
bool is_deck_empty() {
	return deck.empty();
}