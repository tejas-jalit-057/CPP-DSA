#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while (start < end)
    {
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
    }
}


void leftRotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1); // First part
    reverse(arr, d, n - 1); // second part
    reverse(arr, 0, n - 1); // full array
}

int main(){

    int n = 7;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;

    cout << "Before rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    leftRotate(arr, n, d);
    cout << "After rotation:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}