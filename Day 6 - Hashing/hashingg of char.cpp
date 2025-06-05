#include <bits/stdc++.h>
using namespace std;

// Enter the char without space : abcdeeefffghtiiiihddttt
// Enter the Amt of Queries : 5
// Enter Query : a
// 3
// Enter Query : b
// 1
// Enter Query : i
// 6
// Enter Query : t
// 7
// Enter Query : z
// 0

int main() {
    string s;
    cout << "Enter the char without space : " ;
    cin >> s;


    int hash[256] = {0};
    for (int i = 0; i < 256; i++){
        hash[s[i] - 'a'] ++;
    }

    // queries
    int query;
    cout << "Enter the Amt of Queries : ";
    cin >> query;
    while(query--){
        char c;
        cout << "Enter Query : ";
        cin >> c;
        cout << hash[c-'a'] << endl;
    }

    return 0;
}
