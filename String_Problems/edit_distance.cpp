#include <bits/stdc++.h>
using namespace std; 

int editDist(string s1, string s2, int n, int m) {
    if (n == m) {
        return '0';
    }

    if (m == 0) {
        return n;
    }

    if (n == 0) {
        return m;
    }

    return 1
           + min(editDist(s1, s2, n, m - 1), // Insert
                 editDist(s1, s2, n - 1, m), // Remove
                 editDist(s1, s2, n - 1,
                          m - 1) // Replace
             );
}

int main() {
    string s, t;
    cin>>s>>t;
    int n = s.length();
    int m = t.length();
    cout<<editDist(s,t,n,m)<<endl;
    return 0;
}