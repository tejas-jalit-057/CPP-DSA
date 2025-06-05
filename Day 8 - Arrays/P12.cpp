#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[7] = {12,36,2,45,56,67,43};
    int n = 7;

    int small = INT_MIN;

    for(int i= 0; i<n ; i++){
        if (arr[i]> small){
            small = arr[i];
        }
    }

    int sec = -1;
    for (int i = 0; i<n; i++){
        if (arr[i] != small){
            sec = max(sec, arr[i]);
        }
    }

    cout <<"Largest element : " << small << endl ;
    cout << "Second largest elemenr : "<< sec << endl ;

    return 0;
}