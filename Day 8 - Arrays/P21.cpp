#include <iostream>
#include<vector>
using namespace std;
              
//                   [1]

// Array Reverse
// Using a temporary array
void reverse_arr(vector<int>& arr,int n){
    // Temporary array to store elements in reversed order
    vector<int> temp(6);

    // Temporary array to store elements in reversed order
    for (int i= 0; i< n ;i++){
        temp[i] = arr[n - i - 1];
    }

    // Copy elements back to original array
    for(int i = 0 ; i< n; i++){
        arr[i] = temp[i];
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = 6;

    reverse_arr(arr,n);
    for(int i = 0; i<n ; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}