#include <bits/stdc++.h>

using namespace std;

int alternatingCharacters(string s) {
    char c1 = 'A'; char c2 = 'B'; int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c1 && s[i+1] == c1) {
            count++;
        }
        else if (s[i] == c2 && s[i+1] == c2) {
            count++;
        }
    }
    return count;
}

int main()
{
    string s; cin>>s;
    cout<<alternatingCharacters(s);
    return 0;
}
