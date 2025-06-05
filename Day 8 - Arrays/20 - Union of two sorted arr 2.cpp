#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> findunion(int a[], int b[], int n, int m){
    int i = 0;
    int j = 0;
    vector<int> Union;

    while (i < n && j < m){
        if (a[i] < b[j]){
            if (Union.size() == 0 || Union.back() != a[i]) Union.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j]){
            if (Union.size() == 0 || Union.back() != b[j]) Union.push_back(b[j]);
            j++;
        }
        else{
            if (Union.empty() || Union.back() != a[i]) Union.push_back(a[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements of array a
    while (i < n){
        if (Union.empty() || Union.back() != a[i]) Union.push_back(a[i]);
        i++;
    }
    // Add remaining elements of array b
    while (j < m){
        if (Union.empty() || Union.back() != b[j]) Union.push_back(b[j]);
        j++;
    }
    return Union;
}
int main(){
    int a[] = {1, 1, 2, 3, 4, 5};
    int b[] = {2, 3, 4, 4, 5, 6};

    int n = 6;
    int m = 6;

    vector<int> r = findunion(a, b, n, m);
    for (int num : r)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}