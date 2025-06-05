#include <iostream>
#include<vector>
using namespace std;

//                   [4]

// Array Reverse
// Using Recursion 

void reverse_arr(vector<int>& arr,int left,int right){
    if (left >= right){
        return;
    }
    swap(arr[left], arr[right]);
    reverse_arr(arr,left+1, right-1);
}

void reverseArray(vector<int> &arr) {
    int n = 6;
    reverse_arr(arr, 0, n - 1);
}




int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    reverseArray(arr);
    for(int i =0 ;  i<6 ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}