#include <iostream>
using namespace std;

// The Given array is : 5 4 3 2 1 


// The reversed array is : 1 2 3 4 5

void reversearray(int arr[],int low, int high){
    if(low < high){
        swap(arr[low], arr[high]);
        reversearray(arr, low + 1, high - 1);
    }
}

int main() {
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    cout << "The Given array is : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    reversearray(arr, 0,n - 1);
    cout << "The reversed array is : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
        return 0;
}