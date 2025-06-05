#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {99, 100, 45, 60, 75};
    int size = 5;
    int smallestnum = INT_MAX;

    // Loop to find the smallest number
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallestnum) {  // Corrected condition
            smallestnum = arr[i];
        }
    }

    cout << "Smallest number: " << smallestnum << endl;

    return 0;
}