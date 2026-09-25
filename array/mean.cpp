//mean of array element

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    
    cout<<"Enter size of array :";
    cin>>n;

    int arr[n];

    cout<<"Enter Array element :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum =0 ;

    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Addition of array :"<<sum<<endl;

    int mean = sum/n;
    cout<<"Mean of Array :"<<mean<<endl;

    int avg = sum/2;
    cout<<"Average of Array :"<<avg;

    return 0;
}