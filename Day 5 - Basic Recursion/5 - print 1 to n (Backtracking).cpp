#include <iostream>
using namespace std;

// Enter the Number : 5
// 1
// 2
// 3
// 4
// 5


void printNums(int n){
    if (n < 1)               
        return;  // ---------shortcut :- Base Condition, FUNCTn, PRINT
    
    //first write the funtion
    n--;
    printNums(n);
    cout << n+1 <<" - Hello Tejas "<< endl;
}

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    printNums(n);
    return 0;
}