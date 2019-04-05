
/* 
 * File:   main.cpp
 * Author: Garret
 *
 * Created on March 3, 2019, 7:32 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    
    float milBdgt = 7.0e11f, fedBdgt = 4.1e12f, milPrcnt;
    
    milPrcnt = fedBdgt / milBdgt;
    
    cout<<setprecision(1)<<fixed<<"The military budget accounts for "<<milPrcnt<<"% of the federal budget."<<endl;
            
    return 0;
}

