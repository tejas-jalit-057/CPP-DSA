#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v)
{
    int n = v.size();
    int count = 0;
    int ele;

    for (int i = 0; i < n; i++){
        if( count == 0) {
            count = 1;
            ele = v[i];
        }
        else if( ele == v[i]) count++;
        else count--;
    }

    int count1 = 0;
    for (int i = 0; i < n; i++){
        if(v[i] == ele) count1++;
    }
    if (count1 > (n / 2)) return ele;
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
