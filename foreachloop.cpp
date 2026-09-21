// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
  
//   int arr[] = {1, 2, 3, 4, 5};
    
//     // By value
//     cout << "Iterating by value" << endl;
//     for(auto it : arr){
//         cout << it <<" ";
//     }
//     cout<< endl;
    
//     // By reference
//     cout << "Iterating with reference" << endl;
//     for(auto &it : arr){
//         cout << it << " "<<endl;
        
//     }
//     cout<<endl;
//     return 0;
// }

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