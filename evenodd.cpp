// Print Even Odd no in 1 to 100
#include<iostream>
using namespace std;
int main ()
{
    int even, odd, no,counteven = 0,countodd=0;

    cout<<"Even numbers from 1 to 100 :";
    for(no=1;no<=100;no++)
    {
        if(no % 2 == 0)
        {
            cout<<" "<<no;
            counteven ++;
        }
    }
    cout<<endl<<"Total count of Even numbers from 1 to 100 : "<<counteven;

    cout<<endl<<endl<<"Odd numbers from 1 to 100 :";
    for(no=1;no<=100;no++)
    {
        if(no % 2 != 0)
        {
            cout<<" "<<no;
            countodd ++;
        }
    }
     cout<<endl<<"Total count of Odd numbers from 1 to 100 : "<<countodd;

    return 0;
}