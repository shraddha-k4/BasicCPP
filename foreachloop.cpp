#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5];

    cout<<"Enter Array Element :";
    for(auto &it : arr)
    {
        cin>>it;
    }

    cout<<"Array Element :";
    for(auto it : arr)
    {
        cout<< it << " ";
    }

    return 0;

}