// ---------------------left rotate the array by 1 place-----------------------------------

#include <iostream>
using namespace std;

void left_rotate(int arr[],int n){
    int temp = arr[0];                   // we have store the first letter in the temporary variable.
    for (int i = 0; i < n; i++){
        arr[i - 1] = arr[i];             // then its next element is shift towards the 0th position.
    }
    arr[n - 1] = temp;                   // and at the last element, we shifted the element stored at first plac
}


int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    left_rotate(arr, n);
    cout << "Left rotated array : ";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
// The output of this program is = { 2 3 4 5 6 1 }