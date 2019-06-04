/* 
 * File:   main.cpp
 * Author: Garret
 *
 * Created on June 1, 2019, 10:51 AM
 */

#include <iostream>
#include <stdlib.h>
#include "game.h"

using namespace std;

int main(int argc, char** argv) {
    addDealer();
    addPlayer();
    addPlayer();
    
    start();
    turn();
    checkWin();

    exit(0);
    
}