// Left rotate the array by d places.

#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d){
    d = d % n;   
    int temp[d];

    // Step 1: Store the last d elements in temp
    for (int i = 0; i < d; i++){
        temp[i] = arr[n-d+i];
    }
    
    // step2 : shifting remaining elements to right
    for (int i = n-d-1; i >= 0; i--){
        arr[i+d] = arr[i];
    }

    // step 3 : copy temp at beginning
    for (int i = 0; i < d; i++){
        arr[i] = temp[i];
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
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}