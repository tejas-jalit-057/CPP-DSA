#include <iostream>
using namespace std;

// move all zeros to the end of the array......
 
void movezero(int arr[], int n) {
    int count = 0;  // Count of non-zero elements

    // Traverse the array. If the element is non-zero, then
    // swap the element at index 'count' with the element at index 'i'
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[count], arr[i]);
            count++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    movezero(arr, n);

    cout << "Array after moving all zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}