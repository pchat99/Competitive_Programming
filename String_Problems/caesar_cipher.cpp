#include <bits/stdc++.h>
using namespace std;

string caesarCipher(string str, int k) {
     string result = "";
    for (int i = 0; i < str.length(); i++) {
        {
        if (65 <= str[i] && str[i] <= 90)
            str[i] = char(65 + ((str[i] - 65) + k) % 26);
        else if (97 <= str[i] && str[i] <= 122)
            str[i] = char(97 + ((str[i] - 97) + k) % 26);
        }     
    }
    return str;
}

int main() {
    int n; cin>>n;
    string str; cin>>str;
    int k; cin>>k;
    cout<<caesarCipher(str,k);
    return 0;
}