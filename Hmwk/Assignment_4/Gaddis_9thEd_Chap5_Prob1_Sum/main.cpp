/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Garret
 *
 * Created on March 31, 2019, 9:59 PM
 */

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num;
    
    cin >> num;
    
    for (int counter = 0; counter <= num; counter++)
 {
        sum = sum + num;
        counter++;
    }
    if (num < 1)
 {
        cout << "\n" << num << " is an invalid input.";
        cout << " The program will now terminate.\n";
    }
    else
        cout << "Sum = "<< sum;
    return 0;
}

