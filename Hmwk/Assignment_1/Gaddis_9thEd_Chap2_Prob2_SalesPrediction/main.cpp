/* 
 * File:   main.cpp
 * Author: Garret
 *
 * Created on February 26, 2019, 3:59 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int salesProjection = 8600000;
    float eastCoastSales = 0.58;
    
    cout<< setprecision(0)<<fixed<< "The East Coast sales division will generate $"<<salesProjection * eastCoastSales<<" this year for the company"<<endl;
   
    return 0;
}

