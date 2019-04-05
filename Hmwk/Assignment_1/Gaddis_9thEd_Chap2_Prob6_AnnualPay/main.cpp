/* 
 * File:   main.cpp
 * Author: Garret
 *
 * Created on February 26, 2019, 5:12 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float payAmount = 2200.0, payPeriods = 26, annualPay;
    annualPay = payAmount*payPeriods;
    
    cout<<"The employee's annual pay is $"<<annualPay<<endl;
    return 0;
}

