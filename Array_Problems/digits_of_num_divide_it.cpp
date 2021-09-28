#include <bits/stdc++.h>
using namespace std;

void digitsofnum(int n) {
    if (n >= 10) {
        digitsofnum(n/10);
    }
    int digit = n%10;
    if (digit != 0 && (n%digit) == 0) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
}

int main() {
    int n; cin>>n;
    digitsofnum(n);
}