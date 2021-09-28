#include <bits/stdc++.h>
using namespace std;

void leftrotate(string &s, int d) {
    reverse(s.begin(),s.begin() + d);
    reverse(s.begin() + d, s.end());
    reverse(s.begin(),s.end());
}

void rightrotate(string &s, int d) {
    leftrotate(s,s.length()-d);
}

int main() {
    string str1,str2;
    cin>>str1>>str2;
    leftrotate(str1,1);
    rightrotate(str2,1);
    if (str1 == str2) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    return 0;
}