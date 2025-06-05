#include <iostream>
#include<vector>
using namespace std;

//                   [3]

// Array Reverse
// By Swapping Elements

void reverse_arr(vector<int>& arr,int n){
// swapping the elements in the array upto half
    for(int i = 0; i<n/2 ; i++){
        swap(arr[i],arr[n-i-1]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = 6;

    reverse_arr(arr, n);
    for(int i = 0; i< n ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}