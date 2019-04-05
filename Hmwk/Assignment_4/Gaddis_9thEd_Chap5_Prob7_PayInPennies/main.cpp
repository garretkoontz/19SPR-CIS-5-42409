

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int days, salary;
double total = 0.0;

//Get integer
cout << "Enter a positive number\n";
cin >> days;
for (; days > 0; days--)
{
(total+=days*2);
}

cout << fixed << showpoint << setprecision(0);
cout << "Pay = $" << total << endl;
    return 0;
}

