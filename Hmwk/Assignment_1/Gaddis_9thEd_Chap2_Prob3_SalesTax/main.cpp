
/* 
 * File:   main.cpp
 * Author: Garret
 *
 * Created on February 26, 2019, 4:36 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    int purchase = 95;
    float state = purchase * 0.04;
    float county = purchase * 0.02;
    
    float total = state+county;
    
    cout<<setprecision(2)<<fixed<<"The total tax is $"<<total<<endl;
    
    return 0;
}

