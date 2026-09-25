//Sum of 1 to 100 number like 1+2+3...

#include<iostream>
using namespace std;

int main()
{
    int no,sum=0;

    
    for(no=0;no<=100;no++)
    {
        sum=sum+no;
    }
    cout<<"Sum of 1 to 100 :"<<sum;
    return 0;
}