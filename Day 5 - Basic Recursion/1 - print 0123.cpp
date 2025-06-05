#include <iostream>
using namespace std;

int count = 1;
void printNum(int n) {
    if(count == n +1 )
        return ;

    cout << count << endl;
    count++;
    printNum(n);
    
}

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    printNum(n);
    return 0;
}