#include <iostream>
using namespace std;

// Enter the number of rows: 7
// 1 2 3 4 5 6 7 
// 2 3 4 5 6 7
// 3 4 5 6 7
// 4 5 6 7
// 5 6 7
// 6 7
// 7

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++)
        {
            cout << j << " " ;
        }
        cout << endl;
    }


    return 0;
}  