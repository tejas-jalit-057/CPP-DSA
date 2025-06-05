#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// To find the largest of three elment in the array

vector<int> three_largest(vector<int>& arr){
    int fst = INT_MIN;
    int sec = INT_MIN;
    int thd = INT_MIN;

    for(int i = 0; i< 6; i++){
        if(arr[i] > fst){
            thd = sec;
            sec = fst;
            fst = arr[i];
        }
        else if(arr[i] > sec && arr[i]!= fst){
            thd = sec;
            sec = arr[i];
        }
        else if (arr[i] > thd && arr[i] != sec && arr[i] != fst){
            thd = arr[i];
        }
    }
    
    // declare the vector to store the unique elements 
    vector<int> result;   
    if ( fst != INT_MIN) result.push_back(fst);
    if ( sec != INT_MIN) result.push_back(sec);
    if ( thd != INT_MIN) result.push_back(thd);
    return result;
}


int main() {
    vector<int> arr = {12, 13, 1, 10, 34, 1};

    vector<int> result = three_largest(arr);
    for (int i = 0; i<6; i++){
        cout << result[i]<< " " ;
    }

    return 0;
}