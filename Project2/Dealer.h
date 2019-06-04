#include "Deck.h"
#include "Player.h"

/*The information of the Dealer.*/

class Dealer {
    
private:
	vector<int>hand;
	vector<Player*>playerSet;
public:
	void setPlayerSet(vector<Player*>& playerSet);
	vector<Player*> getPlayerSet();
	void distribute();
	void hit();
	int checkHand();
};