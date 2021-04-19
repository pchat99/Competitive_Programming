#include <bits/stdc++.h>
using namespace std; 

int main() {
    string s1,s2;
    cin>>s1>>s2;

    int n = s1.length();
    int m = s2.length();
    bool flag = false;

    if (n != m) {
        flag = false;
    }

    string temp = s1 + s1;
    if (temp.find(s2) != string::npos) {
        flag = true;
    }
    else {
        flag = false;
    }

    if (flag) {
        cout<<"S2 is rotation of S1"<<endl;
    }
    else {
        cout<<"S2 is not rotation of S1"<<endl;
    }


    return 0;

}