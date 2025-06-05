#include <iostream>
using namespace std;

//----------------------Binary search------------------------------

// Enter the size of array : 8
// Enter the elements in the array : 2 4 6 8 10 12 14 16
// Enter the Key : 4
// We have find the value of key at index : 1

int binary_search(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid;

    while(start <= end){

        // first find the mid.
        mid = start +((end - start) / 2);

        // there will be three cases
        if(arr[mid] == key){
            cout << "We have find the value of key at index : ";
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[1000];
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the elements in the array : ";
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the Key : ";
    cin >> key;

    cout << binary_search(arr,n,key);
    return 0;
}