#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while (start < end){
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
    }
}

void rightRotate(int arr[], int n, int d){
    reverse(arr, 0, n - 1); // full array
    reverse(arr, 0, d - 1); // first part
    reverse(arr, d, n - 1); // second part
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

    rightRotate(arr, n, d);
    cout << "After rotation:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}