#include <iostream>
using namespace std;

// Enter the Size of array : 5
// Enter the elemnts in the array : 1 3 2 1 3
// Enter the Amt of Queries : 5

// Enter Query : 2
// 1
// Enter Query : 3
// 2
// Enter Query : 1
// 2
// Enter Query : 4
// 0
// Enter Query : 12
// 0


int main() {
    int n;
    cout << "Enter the Size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elemnts in the array : ";  // take array as a input 
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int hash[13] = {0};                          // 
    for (int i = 0; i < n; i++){
        hash[arr[i]] += 1;                      //  hash --> counts no. of each element
    }

    int query;
    cout << "Enter the Amt of Queries : ";         // queries
    cin >> query;
    while(query--){
        int num;
        cout << "Enter Query : ";
        cin >> num;
        cout << hash[num] << endl;
    }

    return 0;
}