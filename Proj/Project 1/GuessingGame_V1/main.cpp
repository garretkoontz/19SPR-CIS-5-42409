<<<<<<< HEAD
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main() {
rerun:

    int guess, number, guessCount = 0, guessLimit = 5;
    string name;

    srand(time(NULL));
    number = rand() % 25 + 1;
    system("cls");

    cout << "Hello, welcome to Random Guesser!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "Enter your name : ";
    cin >> name;
    cout << "The random number has been generated." << endl;
    cout << "It is between 1 and 25." << endl;
    cout << "You can guess 5 times." << endl;

    while (guess != number) {
        cout << "Enter your guess: " << endl;
        cin >> guess;

        if (guess == number + 1 || guess == number - 1) {
            cout << "You are so close!" << endl;
        }
        guessCount++;

        if (guess != number && guessCount == guessLimit) {
            cout << "Sorry, you reached the guess limit of " << guessLimit << endl;
            exit(0);
        }

    }
    if (guess == number || guessCount <= guessLimit) {

        cout << "Congrats " << name << "! You win!" << endl;
        cout << "The number was " << number << endl;
        cout << "It took you " << guessCount << " guesses." << endl;
    }
    return 0;
=======
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main() {
rerun:

    int guess, number, guessCount = 0, guessLimit = 5;
    string name;

    srand(time(NULL));
    number = rand() % 25 + 1;
    system("cls");

    cout << "Hello, welcome to Random Guesser!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << "Enter your name : ";
    cin >> name;
    cout << "The random number has been generated." << endl;
    cout << "It is between 1 and 25." << endl;
    cout << "You can guess 5 times." << endl;

    while (guess != number) {
        cout << "Enter your guess: " << endl;
        cin >> guess;

        if (guess == number + 1 || guess == number - 1) {
            cout << "You are so close!" << endl;
        }
        guessCount++;

        if (guess != number && guessCount == guessLimit) {
            cout << "Sorry, you reached the guess limit of " << guessLimit << endl;
            exit(0);
        }

    }
    if (guess == number || guessCount <= guessLimit) {

        cout << "Congrats " << name << "! You win!" << endl;
        cout << "The number was " << number << endl;
        cout << "It took you " << guessCount << " guesses." << endl;
    }
    return 0;
>>>>>>> 471311ed50bb201e1488d9001f7556c2f238e9ce
}