#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int> arr, int n){
    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; i++){
        if(arr[i] > 0) pos.push_back(arr[i]);
        else neg.push_back(neg[i]);
    }
        
    for (int i = 0; i < n; i++){
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
    return arr;
}

int main(){
    int n = 4;
    vector<int> arr{1, 2, -4, -5};
    vector<int> ans = RearrangebySign(arr, n);
    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    return 0;
}