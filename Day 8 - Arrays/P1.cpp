#include <iostream>
using namespace std;

// WAP a program to "calculate sum of numbers in the array"..

int sum(int arr[],int n){
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {12, 34, 45, 43, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of given array is : "<< sum(arr,n);

    return 0;
}