#include <iostream>
using namespace std;

// Enter the number of rows: 6
// 1 1 1 1 1 1 
// 2 2 2 2 2
// 3 3 3 3
// 4 4 4
// 5 5
// 6

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++)
        {
            cout << i << " " ;
        }
        cout << endl;
    }


    return 0;
}  