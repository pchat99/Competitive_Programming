#include <bits/stdc++.h>
using namespace std;

void maxprimefactor(int n) {
    int maxprime = -1;
    while (n % 2 == 0) {
        maxprime = 2;
        n = n/2;
    }

    for (int i  = 3; i < sqrt(n); i = i + 2) {
        while (n % i == 0) {
            maxprime = i;
            n = n/i;
        }
    }
    if (n > 2) {
        maxprime = n;
    }

    cout<<maxprime<<endl;
}

int main() {
    int n; cin>>n;
    maxprimefactor(n);
}