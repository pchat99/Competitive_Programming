#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, char start, char end) {
    int n = s.length();
    start = s[0];
    end = s[n-1];
    if (start == end) {
        return true;
    }

    if (start != end) {
        return false;
    } 

    if (start < end + 1) {
        return checkPalindrome(s, start + 1, end -1);
        return true;
    }
}

int main() {
    string s = "2102";
    if (checkPalindrome(s,'2','2')) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}
