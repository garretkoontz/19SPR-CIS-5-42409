
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    float charge = 88.67,
            taxRate = 0.0675,
            tipRate = 0.20,
            taxAmount,
            tipAmount,
            billTotal;
    taxAmount = (charge*taxRate)+charge;
    tipAmount = taxAmount*tipRate;
    billTotal = taxAmount+tipAmount;
    
    cout<<setprecision(2)<<fixed<<"The meal cost $ "<<charge<<endl;
    cout<<setprecision(2)<<fixed<<"The tax $"<<charge*taxRate<<endl;
    cout<<setprecision(2)<<fixed<<"The total with tip before tip was $"<<taxAmount<<endl;
    cout<<setprecision(2)<<fixed<<"The tip after tax was $"<<tipAmount<<endl;
    cout<<setprecision(2)<<fixed<<"The final bill was $"<<billTotal<<endl;
    
    return 0;
}

