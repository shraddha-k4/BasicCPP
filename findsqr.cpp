#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double D;
    float F;
    long double  L;

    cout<<"Enter Number of type double :";
    cin>>D;
    cout<<"Square root of double :"<<sqrt(D)<<endl;
    
    cout<<"Enter Number of type float :";
    cin>>F;
    cout<<"Square root of float :"<<sqrtf(F)<<endl;

    cout<<"Enter Number of type long double :";
    cin>>L; 
    cout<<endl<<"Square root of long double :"<<sqrtl(L)<<endl;

    return 0;
}