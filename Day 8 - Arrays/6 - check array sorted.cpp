//  To check if the array is sorted or not 

#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1,2,3,4,5,6};

    for (int i = 0; i < 5; i++) {
        if (arr[i] > arr[i + 1]) {
            cout << "Array is not sorted" << endl;
            return 0;
        }
    }

    cout << "Array is sorted" << endl;
    return 0;
}