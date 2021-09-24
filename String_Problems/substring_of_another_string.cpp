#include <bits/stdc++.h>
using namespace std;

void issubstring(string s1,string s2) {
    if (s1.find(s2) == -1) {
        cout<<"No"<<endl;
    }
    else {
        cout<<"Yes"<<endl;
    }
}

int main() {
    string s1,s2;
    cin>>s1>>s2;
    issubstring(s1,s2);
}