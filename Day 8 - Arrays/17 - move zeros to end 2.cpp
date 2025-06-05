#include <iostream>
#include <vector>
using namespace std;
// two pointer appraoch

int movezero(int arr[], int n){
    int j = -1;
    for (int i = 0; i < n;i++){ // this loop fix the position of array.
        if (arr[i] == 0){
            j = i;
            break;
        }
    }
    if (j == -1) return 0;

    for (int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    movezero(arr, n);

    cout << "Array after moving all zeros to the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}