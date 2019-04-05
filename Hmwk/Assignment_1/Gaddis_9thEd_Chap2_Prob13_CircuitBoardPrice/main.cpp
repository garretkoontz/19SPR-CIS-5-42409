/* 
 * File:   main.cpp
 * Author: Garret
 *
 * Created on February 26, 2019, 5:34 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    float profit=0.35,boardCost=14.95, sellingPrice;
    
    sellingPrice =(boardCost*profit)+boardCost;
    
    cout<<setprecision(2)<<fixed<<"The selling price of a circuit board is $"<<sellingPrice<<endl;
 
    return 0;
}

