#include <iostream>
using namespace std;

// Enter the number of rows: 6
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1 ; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << j << " " ;
        }
        cout << endl;
    }


    return 0;
}