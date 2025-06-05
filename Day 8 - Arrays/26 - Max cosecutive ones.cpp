#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &arr)
{
    int n = arr.size();
    int maxi = 0;
    int count = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] == 1)
            count++;
        else
            count = 0;
        maxi = max(maxi, count);
    }
    return maxi;
}

int main(){
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int ans = findMaxConsecutiveOnes(arr);
    cout << "The maximum  consecutive (1's) are " << ans;
    return 0;
}