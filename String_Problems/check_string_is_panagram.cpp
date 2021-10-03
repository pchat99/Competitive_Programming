#include <bits/stdc++.h>
using namespace std;

bool panagram(string s) {
    vector<bool> check(26,false);
    int index;
    for (int i  = 0; i < s.length(); i++) {
        if ('A' <= s[i] && s[i] <= 'Z') 
            index = s[i] - 'A';
        
        else if ('a' <= s[i] && s[i] <= 'z')
            index = s[i] - 'a';

        else 
            continue;
        
        check[index] = true;
    }

    for (int i = 0; i <= 25; i++) {
        if (check[i] == false) {
            return (false);
        }
    }
    return (true);
}

int main() {
    string s;
    getline(cin,s);
    if (panagram(s) == true) {
        cout<<"panagram";
    }
    else {
        cout<<"not panagram";
    }
    return 0;

}