#include <iostream>
using namespace std;

// The missing number is : 3

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int n = 6;

    int sum = 0;
    // to find sum of all elements in the array.
    for (int i = 0; i< n-1; i++){
        sum = sum + arr[i];
    }

    // to find the sum of n elements.
    int ans = n * (n - 1) / 2;
    int miss_num = sum - ans;
    

    cout << " The missing number is : "<<  miss_num << endl;
    return 0;
}