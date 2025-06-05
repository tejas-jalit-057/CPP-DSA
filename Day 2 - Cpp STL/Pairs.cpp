#include <iostream>
#include<utility>
using namespace std;


int main() {
    // 1------------------------------
    // pair<int,int> p = {1, 3};
    // cout << p.first << " " << p.second;

    // 2---------------------------------------
    // we want to store more number then
    // pair<int, pair<int, int>> p1 = {1,{2,3}};
    // cout << p1.first << " " << p1.second.first << " " << p1.second.second;

    // 3-------------------------------------------
    // declare  pair in array
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << arr[0].first <<" " <<  arr[0].second << " " ;
    cout << arr[1].first << " " << arr[1].second << " " ;
    cout << arr[2].first << " " << arr[2].second;

    return 0;
}