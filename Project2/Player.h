/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: Garret
 *
 * Created on June 1, 2019, 10:52 AM
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "deck.h"

class Player {
public:
    void hit();
    void Double();
    void split();
    void stand();
    int checkHand();
    char choice();
    
private:
    vector<int>hand;

};

#endif /* PLAYER_H */

