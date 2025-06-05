#include <iostream>
using namespace std;

// Linear search program 


int search(int arr[],int target,int n){
    for( int i = 0; i< n ; i++){
        if (arr[i] == target){
            return  i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3,6,10};
    int n =sizeof(arr) / sizeof(arr[0]);
    int target = 6; 
    int find = search(arr, target, n);
    
    if (find == -1){
        cout << " Not Present ";
    }
    else
        cout << "Present at index : "<< find;
    return 0;
}