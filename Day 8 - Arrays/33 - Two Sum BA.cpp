#include <bits/stdc++.h>
using namespace std;

string twosum(int n, vector<int>arr, int target){
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++){
        int num = arr[i];
        int moreneeded = target - num;

        if(mpp.find(moreneeded) != mpp.end()) return "Yes";
        else mpp[num] = i;
    }
    return "No";
}



int main(){
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = 5;
    int target = 13;

    string ans = twosum(n, arr, target);
    cout << "This is the answer : " << ans << endl;
}