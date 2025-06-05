#include <bits/stdc++.h>
using namespace std;

string twosum(int n, vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = n - 1;

    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target) return "Yes";
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = 5;
    int target = 13;

    string ans = twosum(n, arr, target);
    cout << "This is the answer : " << ans << endl;
}