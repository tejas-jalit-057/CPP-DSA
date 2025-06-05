#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    // 1 ------------------------
    // adding element to vector
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.emplace_back(5);
    // for(int i = 0; i< v.size(); i++){
    //     cout << v[i] << " ";
    // }

    // 2----------------------------
    // // use of pairs in vector
    // vector<pair<int, int>> vec;
    // vec.push_back({7,8});
    // vec.emplace_back(12,9);

    // for(auto p : v){
    //     cout << p.first << " " ;
    //     cout << p.second << " ";
    // }


    // printing vec by providing size-------
    // vector<int> v(5,100);
    // vector<int> v(5);
    // vector<int> v1(5,20);
    // vector<int> v2(v1); //------ copies v1
    // for(int i = 0; i< v2.size(); i++){
    //     cout << v2[i] << " ";
    // }


    // vector<int> v1(5,20);
    // vector<int> v2(v1);
    // cout << v1[0] << "\n";
    // cout << v1[2];
    // cout << v2.back() << " "; //------------gives the last element.

    return 0;
}