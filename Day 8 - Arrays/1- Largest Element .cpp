#include <iostream>
using namespace std;
// program to  "calculate largest number in the array"..

int main() {
    int arr[] = {3, 2, 1, 15, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];

    for (int i = 1; i < n; i++){
        if (arr[i] > largest)
            largest = arr[i];
    }
    cout << "Largest element is : " << largest;

    return 0;
}