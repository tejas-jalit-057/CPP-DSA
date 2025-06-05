#include <iostream>
using namespace std;

// Enter the Number : 6
// a a a a a 
// b b b b b
// c c c c c
// d d d d d
// e e e e e
// f f f f f

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    
    for ( int i = 1 ; i<= n ; i++){
        
        for ( char j = 'a' ; j <= 'e' ; j++){
            char name = 'a' + (i - 1);
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}