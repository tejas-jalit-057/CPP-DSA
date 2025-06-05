#include <iostream>
using namespace std;

// Enter a string : level
// The string is a palindrome.

bool isPalindrome(string str){
    int left = 0;
    int right = str.length() - 1;

    while(left < right){
        if(str[left] != str[right])   // not equal --> not palindrome
            return false;
        left++;                      // if equal -->  move pointers
        right--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string : ";
    cin >> str;

    if (isPalindrome(str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;
    return 0;
}