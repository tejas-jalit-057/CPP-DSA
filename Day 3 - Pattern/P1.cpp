#include <iostream>
using namespace std;

// Enter the number of rows: 6
// * * * * * * 
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }


    return 0;
}