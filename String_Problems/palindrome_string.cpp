#include <bits/stdc++.h>
using namespace std; 

int main() {
    string s;
    getline(cin, s);

    int n = s.length();
    
    bool flag = false;
    for(int i = 0; i < n; i++) {
        if (s[i] == s[n - i - 1]) {
            flag = true;
        }
        else {
            flag = false;
        }
    }

    if (flag) {
        cout<<"String is Palindrome"<<endl;
    }
    else {
        cout<<"String is not Palindrome"<<endl;
    }


    return 0;

}