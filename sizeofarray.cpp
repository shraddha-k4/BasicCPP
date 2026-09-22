#include <iostream>
using namespace std;
int main()
{
    int arr[ ] = {23,45,32,56,12,0};
    int n = sizeof(arr); //Total memory size in bytes
    int i = sizeof(arr[0]); //One element chi memory 4bytes
    int q = sizeof(arr)/sizeof(arr[0]); //size of array

    cout<<"Size of n : "<<n<<endl;
    cout<<"Size of i : "<<i<<endl;
    cout<<"Size of q : "<<q<<endl;
    return 0;
}