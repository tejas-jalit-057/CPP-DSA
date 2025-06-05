#include <iostream>
#include <cctype>
using namespace std;

// Enter a string : race car
// The string is a palindrome

bool isPalindrome(string str){
    string clean_str;

    for(char c : str){
        if(isalnum(c)) {                //either a letter (A-Z, a-z) or a digit (0-9) 
            clean_str += tolower(c);    // to lowercase
        }
    }                                   // for cleaning the string 

    int left = 0;
    int right = clean_str.size() - 1;   // same as previous code
    while(left < right){
        if(clean_str[left] != clean_str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    if(isPalindrome(str)){
        cout << "The string is a palindrome" << endl;
    }
    else{
        cout << "The string is non palindrome" << endl;
    }

    return 0;
}