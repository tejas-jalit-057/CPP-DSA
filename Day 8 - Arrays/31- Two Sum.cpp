#include <bits/stdc++.h>
using namespace std;

string twosum(int n, vector<int> &arr, int target){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == target) return "Yes";
        }
    }
    return "No";
}

int main(){
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = 5;
    int target = 14;

    string ans = twosum(n, arr, target);
    cout << "This is the answer : " << ans << endl;
}