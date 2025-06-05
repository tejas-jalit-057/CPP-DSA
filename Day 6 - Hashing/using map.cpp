#include <bits/stdc++.h>
using namespace std;

// Enter the Size of array : 5
// Enter the Elements : 1 3 4 3 1
// Enter the Amt of Query : 5

// Enter the Query : 1
// No. of query : 2
// Enter the Query : 3
// No. of query : 2
// Enter the Query : 4
// No. of query : 1
// Enter the Query : 5
// No. of query : 0
// Enter the Query : 9
// No. of query : 0


int main() {
    int n;
    cout << "Enter the Size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // using mapping
    map<int, int> mpp;
    for (int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    
    int query;
    cout << "Enter the Amt of Query : ";
    cin >> query;
    while(query--){
        int num;
        cout << "Enter the Query : ";
        cin >> num;
        cout << "No. of query : " << mpp[num] << endl;
    }
    return 0;
}