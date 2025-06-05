#include <iostream>
using namespace std;

// Enter the Number : 6
// 1 2 3 4 5 6 
// 7 8 9 10 11 12
// 13 14 15 16 17 18
// 19 20 21 22 23 24
// 25 26 27 28 29 30
// 31 32 33 34 35 36

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    
    int count = 1;
    
    for ( int i =1; i<=n ; i++){
        for ( int j =1; j <= n ; j++){
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }

    return 0;
}