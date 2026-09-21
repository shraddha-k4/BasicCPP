#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[ ] = {23,43,54,12,45};

    /* By Value   
    it gets a copy of each element.
    Changes in it do not affect the original array.  */
    cout<<"Iterating by value :"<<endl;
    for(auto it : arr)
    {
        cout<<it<<" "<<endl;
    }

    /*By reference
    it refers to the original element.
    Changes in it affect the original array.*/

    cout<<"Iterating by Reference :";
    for(auto &it : arr)
    {
        cout<<it <<" ";
        cin>>it;
    }
    cout<<"Updated Array :";
    for(auto it : arr)
    {
        cout<< it <<" ";
    }
    return 0;
}