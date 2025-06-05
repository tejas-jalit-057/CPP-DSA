#include <iostream>
using namespace std;

// Enter the Number : 6
// 6
// 5
// 4
// 3
// 2
// 1

void printNums(int i, int n){
    if (i > n)               
        return;  // ---------shortcut :- BC, FUNCTn, PRINT
     
    //first write the funtion
    printNums(i + 1, n);
    cout << i << endl;
}

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    printNums(1,n);
    return 0;
}