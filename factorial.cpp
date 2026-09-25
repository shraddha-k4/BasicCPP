//Factorial of numbers
#include<iostream>
using namespace std;

int main()
{
    int no,fact = 1,i;
    cout<<"Enter number :";
    cin>>no;

    for(i = 1;i<=no;i++)
    {
        fact = fact *i;
    }
    cout<<"Factorial of number "<<no<<": "<<fact;
    return 0;
}