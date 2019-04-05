

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    
    string runner1, runner2, runner3;
    double time1, time2, time3;
    
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    
    cin>>runner1>>time1;
    cin>>runner2>>time2;
    cin>>runner3>>time3;
    
    if (time1 > 0 && time2 > 0 && time3 > 0)
        if (time1 < time2 && time1 < time3)
            if (time2 < time3)
            {
                cout<<runner1<<"\t"<<time1<<endl;
                cout<<runner2<<"\t"<<time2<<endl;
                cout<<runner3<<"\t"<<time3;
            }
            else
            {
                cout<<runner1<<"\t"<<time1<<endl;
                cout<<runner3<<"\t"<<time3<<endl;
                cout<<runner2<<"\t"<<time2;
            }
        else if (time2 < time1 && time2< time3)
            if (time1 < time3)
            {
                cout<<runner2<<"\t"<<time2<<endl;
                cout<<runner1<<"\t"<<time1<<endl;
                cout<<runner3<<"\t"<<time3;
            }
            else
            {
                cout<<runner2<<"\t"<<time2<<endl;
                cout<<runner3<<"\t"<<time3<<endl;
                cout<<runner1<<"\t"<<time1;
            }
        else
            if (time1 < time2)
            {
                cout<<runner3<<"\t"<<time3<<endl;
                cout<<runner1<<"\t"<<time1<<endl;
                cout<<runner2<<"\t"<<time2;
            }
        else
        {
                cout<<runner3<<"\t"<<time3<<endl;
                cout<<runner2<<"\t"<<time2<<endl;
                cout<<runner1<<""<<time1;
        }
    return 0;
}

