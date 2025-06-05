#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(int n, vector<int> &arr, int target){
    vector<int> ans;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = 5;
    int target = 14;

    vector<int> ans = twosum(n, arr, target);
    cout << "The target value is present at index : {" << ans[0] <<" , " << ans[1] <<"}" << endl;
    return 0;
}