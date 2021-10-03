#include <bits/stdc++.h>
using namespace std;

int coinsin2bags(int bag1[], int bag2[], int n, int m) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((bag1[i]*bag2[j]) % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n,m;
    cin>>n>>m;
    int bag1[n], bag2[m];
    n = sizeof(bag1)/sizeof(bag1[0]);
    m = sizeof(bag2)/sizeof(bag2[0]);
    for (int i = 0; i < n; i++) {
        cin>>bag1[i];
    }
    for (int j = 0; j < m; j++) {
        cin>>bag2[j];
    }

    cout<<coinsin2bags(bag1,bag2,n,m)<<endl;
    return 0;

}