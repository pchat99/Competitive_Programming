#include <bits/stdc++.h>
using namespace std;

string hackerrankinstring(string str) {
    vector<char> word = {'k', 'n', 'a', 'r', 'r', 'e', 'k', 'c', 'a', 'h'};
    for (int i = 0; i < str.length(); i++) {
        if (word.size() == 0) {
            break;
        }
        else if (str[i] == word[word.size() - 1]) {
            word.pop_back();
        }
    }

    if (word.size() == 0) {
        return "Yes";
    }
    else {
        return "No";
    }
}

int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        string str;
        cin>>str;
        string res = hackerrankinstring(str);
        cout<<res<<endl;
    }
    return 0;
}