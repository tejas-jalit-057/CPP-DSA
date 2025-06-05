#include <iostream>
using namespace std;

// a 
// b b
// c c c
// d d d d
// e e e e e

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    
    for ( int i =1; i<=n ; i++){
        char name = 'a' + (i-1);
        for ( int j =1; j <= i ; j++){
            cout << name <<" " ;
        }
        cout << endl;
    }

    return 0;
}