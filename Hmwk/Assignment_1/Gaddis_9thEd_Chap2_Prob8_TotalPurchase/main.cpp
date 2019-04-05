
/* 
 * File:   main.cpp
 * Author: Garret
 *
 * Created on February 26, 2019, 5:19 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    float price1=15.95, price2=24.95, price3=6.95, price4=12.95, price5=3.95, subtotal, taxRate=0.07, taxedAmount, total;
    
    subtotal = price1+price2+price3+price4+price5;
    taxedAmount = subtotal*taxRate;
    total = taxedAmount+subtotal;
            
    cout<<"Item 1 is $"<<price1<<endl;
    cout<<"Item 2 is $"<<price2<<endl;
    cout<<"Item 3 is $"<<price3<<endl;
    cout<<"Item 4 is $"<<price4<<endl;
    cout<<"Item 5 is $"<<price5<<endl;
    cout<<"The subtotal is $"<<subtotal<<endl;
    cout<<setprecision(2)<<fixed<<"The sales tax is $"<<taxedAmount<<endl;
    cout<<setprecision(2)<<fixed<<"The total is $"<<total<<endl;
    return 0;
}

