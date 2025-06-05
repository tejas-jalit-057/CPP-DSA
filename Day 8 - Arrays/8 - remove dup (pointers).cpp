#include <iostream>
using namespace std;


int remove_dup(int arr[], int n){
    int k = 1;
    // Starts at 1 because the first element is always unique in a sorted array.
    for (int i = 1; i < n; i++){
        if(arr[i] != arr[k-1]){
            arr[k] = arr[i];     // If the current element is unique, store it at index k.
            k++;
        }
    }
    return k;
}
// After the loop, k contains the count of unique elements.Also,
// the first k elements of the array now contain all unique values in sorted order.

    int
    main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = 8;

    int k = remove_dup(arr, n);
    cout << "The array after removing duplicate elements is : ";

    for (int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}