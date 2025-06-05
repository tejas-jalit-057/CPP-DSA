#include <iostream>
#include<vector>
using namespace std;

//                   [2]

// Array Reverse
// Using Two Pointers.

void reverse_arr(vector<int>& arr,int n){
    int left = 0;
    int right = n - 1;

    // Initialize left to the beginning and right to the end
    while (left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = 6;

    reverse_arr(arr, n);
    for(int i= 0 ; i<n ; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}