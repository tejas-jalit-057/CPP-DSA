#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> findunion(int a[], int b[], int n, int m){
    set<int> s;
    vector<int> Union;

    // Insert elements from both arrays into the set
    for (int i = 0; i < n;i++){
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++){
        s.insert(b[i]);
    }

    // Copy unique elements from set to vector
    for(auto it: s){
        Union.push_back(it);
    }
    return Union;
}
int main(){
    int a[] = {1, 1, 2, 3, 4, 5};
    int b[] = {2, 3, 4, 4, 5, 6};

    int n = 6;
    int m = 6;

    vector<int> r = findunion(a, b, n, m);
    for (int num : r){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}