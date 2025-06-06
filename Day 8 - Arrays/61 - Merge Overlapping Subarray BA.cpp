// The merged intervals are : [ 1, 6 ][8, 10][15, 18]

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
    int n = arr.size(); // size of the array

    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++){
        int start = arr[i][0];
        int end = arr[i][1];

        if (!ans.empty() && end <= arr.back()[1]){
            continue;
        }

        for (int j = i + 1; j < n; j++){
            if(arr[j][0] <= end){
                end = max(end, arr[j][0]);
            }         
            else break;
        }
        ans.push_back({start, end});
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeOverlappingIntervals(arr);
    cout << "The merged intervals are: " << "\n";
    for (auto it : ans)
    {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}
