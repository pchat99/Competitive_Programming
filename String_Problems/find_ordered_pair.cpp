#include <bits/stdc++.h>
using namespace std; 


int findorderedpair(string s, string ans, int startindex) {
    int n = s.length();
    int count = 0;
    if (ans == "HSL") {
        return 1;
    }
    if (ans.length() > 3) {
        return 0;
    }

    for (int i = startindex; i < n; i++) {
        count += findorderedpair(s, ans + s[i], i + 1);
    }
    return count;
}
  
int main() {
    string s;
    cin>>s;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        for (int j = i; j <= n - i; j++) {
            cout<<s.substr(i,j)<<endl;
        }
    }
    
    cout<<findorderedpair(s,"",0);
    return 0;
}