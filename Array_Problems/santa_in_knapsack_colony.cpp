#include <bits/stdc++.h>
using namespace std;
const int N = 10e7 + 10;

int hsh[N];

int main() {
    int n, k, hi;
    cin >> n >> k;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        cin >> hi;
        if (hsh[hi] >= k) {
            count++;
            hsh[hi] = -1;
        }
        else if (hsh[hi] < k and hsh[hi] != -1) {
            hsh[hi]++;
        }
    }
    cout<<count<<endl;

}