#include<iostream>
using namespace std;

int main()
{
    int i,n;
   
    cout<<"Enter array size :";
    cin>>n;
     int arr[n];

    cout<<"Enter Array no :";
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Array Element :";
    for(i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;

    cout<<"Reverse Array Element :";
    for(i=n-1;i>=0;i--)
        cout<<arr[i]<<"\t";
    return 0;
}