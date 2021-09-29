// you have to input a number "n", find the largest prime factor of the number "n".
// find the square root of the number "n".
// if square root of the number "n" is less than the largest prime factor of the number "n".
// then the number is called a stranger number. 

// for example if a number is 15, then square root of number is 3.87 and largest prime factor is 5. (i.e prime factors of 15 are 3 and 5).
// the above example is example of stranger number. (square root is less than largest prime factor).

#include <bits/stdc++.h>
using namespace std;

int largeprimefactor(int n) {
    int largeprime = -1;
    while (n % 2 == 0) {
        largeprime = 2;
        n = n/2;
    }

    for (int i  = 3; i < sqrt(n); i = i + 2) {
        while (n % i == 0) {
            largeprime = i;
            n = n/i;
        }
    }
    if (n > 2) {
        largeprime = n;
    }

    return largeprime;
}

int main() {
    int n; cin>>n;
    int sqn = sqrt(n);
    int max = largeprimefactor(n);
    if (sqn < max) {
        cout<<"Stranger"<<endl;
    }
    else {
        cout<<"Not Stranger"<<endl;
    }
    return 0;
}