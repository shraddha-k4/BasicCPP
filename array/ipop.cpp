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
    return 0;
}