#include <bits/stdc++.h>
using namespace std;

void removedupwords(string s) {
    
    stringstream str(s);
    unordered_set<string> hsh;

    do {
        string word;
        str >> word;

        while (hsh.find(word) == hsh.end())
        {
            cout<<word<<" ";
            hsh.insert(word);
        }
    } while (str);

}

int main() {
    string s;
    getline(cin,s);
    removedupwords(s);
    return 0;
}