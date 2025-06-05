#include <iostream>
#include<climits>
using namespace std;
// second maximum number in the array

// The largest element is : 5
// The second largest element is : 4


int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];  // assumr the first element as largest number.

    for (int i = 0; i < size; i++){
        if ( arr[i] > largest ){
            largest = arr[i];
        }
    }
    cout << "The largest number is  : " << largest << endl;

    int second = INT_MIN;
    for (int i = 0; i < size; i++){
        if (arr[i]> second && arr[i] != largest ){
            second = arr[i];
        }
    } 
    cout << "The second largest element is : " << second  << endl; 
        return 0;
}