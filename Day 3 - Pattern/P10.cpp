#include <iostream>
using namespace std;

// Enter the Number : 6
// * 
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    
    for ( int i =1; i<=n ; i++){
        for ( int j =1; j <= i ; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}