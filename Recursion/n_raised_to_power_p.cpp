#include <bits/stdc++.h>
using namespace std;

int npowerp(int n, int p) {
    if (p == 0) {
        return 1;
    }

    int prevpower = npowerp(n,p-1);
    return n * prevpower;
}

int main() {
    int n,p;
    cin>>n>>p;
    cout<<npowerp(n,p);
    return 0;
}