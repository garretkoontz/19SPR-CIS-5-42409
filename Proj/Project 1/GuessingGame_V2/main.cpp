#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cstring>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    int guess, 
            number, 
            guessCount = 0, 
            guessLimit = 5;
    string name;
    string yorn;
    //This is the library function for random number generation.
    rerun:
    srand(time(NULL));
    // This creates the range for where the random number will fall in between.
    number = rand() % 25 + 1;
    system("cls");
    
    ifstream in;
    ofstream out;
    string fileIn;
    char fileOut[]="highscores.dat";
    
    fileIn = "highscores.dat";
    in.open(fileIn.c_str());
    out.open(fileOut);
    

    cout << "Hello, welcome to Random Guesser!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "Enter your name : ";
    cin >> name;
    cout << "The random number has been generated." << endl;
    cout << "It is between 1 and 25." << endl;
    cout << "You can guess 5 times." << endl;
    
    // Using this if you wants to play again.
    
    while (guess != number) {
        cout << "Enter your guess: " << endl;
        cin >> guess;
        // If the guess is over 25, it will prompt you to try again.
        if (guess > 25){
            cout << "Please enter a number between 1 and 25. Try again." << endl;
            goto rerun;
        }
        
        // If the entered guess is within 1 of the random number, you will get a notice telling you are close to guessing it.
        if (guess == number + 1 || guess == number - 1) {
            cout << "You are so close!" << endl;
        }
        guessCount++;
        
        // If the guess is not equal to the number and if you reach the guess limit, 
        // you lose and it will prompt you if you would like to try again.
        if (guess != number && guessCount == guessLimit) {
            
            cout << "Sorry, you reached the guess limit of " << guessLimit << endl;
           // You have the option to try again by typing Y for yes or N for no.
           // It is not limited to capitalization.
            cout << "Would you like to play again? (Y/N)" << endl;
            cin >> yorn;
               // If Y or y is entered, the program will jump back up to the line called rerun.
            if (yorn == "Y" || yorn == "y") {
                goto rerun;
               
            // If N or n is entered, the program will terminate.
            } else if (yorn == "N" || yorn == "n") {
                exit(0);
            }
        }

    }
    // If the guess is equal to the random number and if the guess count is less tha nor equal to the guess limit,
    // you win the game and have the option to play again.'
    if (guess == number || guessCount <= guessLimit) {
        
        cout << "Congrats " << name << "! You win!" << endl;
        cout << "The number was " << number << endl;
        cout << "It took you " << guessCount << " guesses." << endl;
        cout << "Would you like to play again? (Y/N)" << endl;
            cin >> yorn;

            if (yorn == "Y" || yorn == "y") {
                goto rerun;
       
            } else if (yorn == "N" || yorn == "n") {
                exit(0);
            }
            
    }
    
    in.close();
    out.close();
    
    return 0;
}