#include <iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>

#ifndef DECK_H
#define DECK_H

using namespace std;

void init_deck();
void shuffler();
void print_deck();
int getCard();
bool is_deck_empty();

#endif /* DECK_H */

