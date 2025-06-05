#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(int n, vector<int> arr, int target){
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++){
        int num = arr[i];
        int moreneeded = target - num;

        if (mpp.find(moreneeded) != mpp.end()) return {mpp[moreneeded],i} ;
        else mpp[num] = i;
    }
    return {-1,-1};
}

int main(){
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = 5;
    int target = 13;

    vector<int> ans = twosum(n, arr, target);
    cout << "This target value is present at index : [" << ans[0] <<" , "<< ans[1] << "]" << endl;
}