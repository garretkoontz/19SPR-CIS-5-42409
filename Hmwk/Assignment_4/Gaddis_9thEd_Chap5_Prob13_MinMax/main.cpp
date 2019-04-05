/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Garret
 *
 * Created on March 31, 2019, 9:13 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    int min=0, num;
for (int i=0; num !=-99; i++)
	{
		cout<<"Enter the number <-99 to end input> ";
		cin>>num;
		if (num<min) {
                    min=num;
                }
	}
    return 0;
}

