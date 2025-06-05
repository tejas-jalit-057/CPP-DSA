#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    int seclarge = INT_MIN;
    for (int i = 0; i < size; i++){
        if(arr[i] > seclarge && arr[i] != largest){
            seclarge = arr[i];
        }
    }
    cout << "Second largest element : " << seclarge ;
    return 0;
}