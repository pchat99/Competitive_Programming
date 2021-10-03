// Given a str, the task here is to find the number of chairs which are correctly placed as per the ordinal number of the letters as given below.

#include <bits/stdc++.h>
using namespace std;

void chairplacement(string s) {
    int count = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s.at(i) == (s.at(0) + i)) {
            count++;
        }
    }

    cout<<count;
}

int main() {
    string s;
    cin>>s;
    chairplacement(s);
    return 0;
}