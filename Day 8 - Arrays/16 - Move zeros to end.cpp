#include <iostream>
#include <vector>
using namespace std;

// move all zeros to the end of the array......

void movezero(int arr[], int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++){   // storing elements to temp
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();          // storing it to array
    for (int i = 0; i < nz; i++){
        arr[i] = temp[i];
    }

    for (int i = nz; i < n; i++){  // remaining element as 0
        arr[i] = 0;
    }
}

int main()
{
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    movezero(arr, n);

    cout << "Array after moving all zeros to the end: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}