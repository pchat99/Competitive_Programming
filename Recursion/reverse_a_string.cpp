#include <bits/stdc++.h>
using namespace std;

void reverseastring(string s) {
    if (s.length() == 0) {
        return ;
    }

    string ros = s.substr(1);
    reverseastring(ros);
    cout<<s[0];
}

int main() {
    string s = "binod";
    reverseastring(s);
    return 0;
}