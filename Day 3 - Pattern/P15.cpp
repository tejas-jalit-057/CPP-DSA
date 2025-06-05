#include <iostream>
using namespace std;

// Enter the number of rows: 6
// * * * * * * * * * * * 
//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < i; j++)
        {
            cout  << "  " ;
        }
        // for stars
        for (int j = 0; j < 2*n -(2*i+1); j++)
        {
            cout  << "* " ;
        }
        // for spaces
        for (int j = 0; j < i; j++)
        {
            cout  << "  " ;
        }
        cout << endl;
    }


    return 0;
}  