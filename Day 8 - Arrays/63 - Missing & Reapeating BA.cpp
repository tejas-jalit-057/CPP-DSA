
#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size();
    int reapeating =-1;
    int missing=-1;

    for(int i=1; i<n; i++){
        int cnt = 0;
        for(int j =0; i<n; j++){
            if(a[j]== i) cnt ++;
        }
        if(cnt == 2) repeating =  i;
        if(cnt == 0) missing = i;
        if(repeating != -1 && missing != -1) break;
    }
    return {repeating, missing};
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}


