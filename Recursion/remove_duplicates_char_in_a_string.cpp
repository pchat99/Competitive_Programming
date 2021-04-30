#include <bits/stdc++.h>
using namespace std;

string removeDup(string s) {
    if (s.length() == 0) {
        return "";
    }

    char chr = s[0];
    string ans = removeDup(s.substr(1));

    if (chr == ans[0]) {
        return ans;
    }
    else {
        return (chr + ans);
    }
}

int main() {
    string s;
    cin>>s;

    cout<<removeDup(s);
}