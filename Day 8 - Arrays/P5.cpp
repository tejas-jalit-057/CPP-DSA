#include <iostream>
using namespace std;
// reverse the array
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = 4;

    while( start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "After reversinng the array : ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}