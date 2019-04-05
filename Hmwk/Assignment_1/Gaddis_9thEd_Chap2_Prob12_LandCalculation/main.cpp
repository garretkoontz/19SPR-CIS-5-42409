
/* 
 * File:   main.cpp
 * Author: Garret
 *
 * Created on February 26, 2019, 5:28 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    float acre=43750,landTotal=391876,acreAmount;
    
    acreAmount = landTotal/acre;
    
    cout<<setprecision(0)<<fixed<<"There are "<<acreAmount<<" acres"<<endl;
    return 0;
}

