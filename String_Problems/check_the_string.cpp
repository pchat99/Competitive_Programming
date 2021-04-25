#include <bits/stdc++.h>
using namespace std; 
  
int main() {
    string s;
    cin>>s;

    int n = s.length();
    string num = "";
    string rs = "";
    for (int i = 0; i < n; i++) {
        if (s[i] >= '0' and s[i] <= '9') {
            num += s[i];
        }
        else {
            rs += s[i];
        }
    }

    if (stoi(num) == rs.length()) {
        cout<<"True"<<" "<<rs.length();
    }
    else {
        cout<<"False"<<" "<<rs.length();
    }

    return 0;
}