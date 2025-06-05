#include <iostream>
using namespace std;

// search the element in the array
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    // int index = -1;
    int to_find = 3;

    for (int i = 0; i < size; i++){
        if ( arr[i]== to_find){
            cout << i<< endl ;
            cout <<"The element "<< to_find << " is present on the index : " <<i;
            break; 
        }
    }

        return 0;
}