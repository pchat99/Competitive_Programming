#include <bits/stdc++.h>
using namespace std;

void findfreq(string str) {
    map<string,int> m;

    string word = "";

    for (int i  = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            if (m.find(word) == m.end()) {
                m.insert(make_pair(word,1));
                word = "";
            }
            else {
                m[word]++;
                word = "";
            }
        }
        else {
            word += str[i];
        }
    }
        
    if (m.find(word) == m.end()) 
        m.insert(make_pair(word,1));
    else 
        m[word]++;

    for (auto& it : m) {
        cout<<it.first<<"-"<<it.second<<endl;
    }
}


int main() {
    string s; cin>>s;
    findfreq(s);
    return 0;
}