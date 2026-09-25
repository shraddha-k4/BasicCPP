//Multiplication table mean table of any no like table of 2,3,4...
#include<iostream>
using namespace std;

int main()
{
    int no,i,table=0;

    cout<<"Enter Number :";
    cin>>no;
    
    for(i=1;i<=10;i++)
    {
        table = no *i;
        cout<<"Table of "<<no<<": "<<table;
        cout<<endl;
    }
    
    
    return 0;
}