// Left rotate the array by d places.

#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d)
{

    d = d % n; // d = 13 % 7 = 6 means we have to shift by 6 places

    int temp[d]; // declare the vector of size d, to store first d element
    for (int i = 0; i < d; i++)
    { // store first d elements
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    { // shift remaining element to left
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < d; i++)
    { // copy temp at last of array.
        arr[n - d + i] = temp[i];
    }
}
int main()
{

    int n = 7;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;

    cout << "Before rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    leftRotate(arr, n, d);
    cout << "After rotation:" << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}