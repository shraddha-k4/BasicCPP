#include <iostream>
using namespace std;

int main()
{
    int i,n;

    cout<<"Enter Array Size :";
    cin>>n;
    int arr[n];
    cout<<"Enter Array element :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   
    int max = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    cout<<"Maximum Array element : "<<max;

    int min = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]< min)
        {
            min = arr[i];
        }
    }
    cout<<endl<<"Minimum Array Element : "<<min;
    
    return 0;
}