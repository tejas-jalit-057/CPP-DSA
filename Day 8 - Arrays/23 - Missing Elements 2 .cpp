#include <iostream>
#include <set>
#include <vector>
using namespace std;

int missingNumber(vector<int> &arr, int n){
    int hash[n + 1] = {0};

    for (int i = 0; i < n-1 ; i++){
        hash[arr[i]] = 1;
    }
    for (int i = 1; i < n - 1; i++){
        if(hash[i] == 0) return i;
    }

    return -1;
}

int main(){
    int n = 5;
    vector<int> arr = {1, 2, 4, 5};

    int ans = missingNumber(arr, n);
    cout << "The missing number is: " << ans << endl;
    return 0;
}