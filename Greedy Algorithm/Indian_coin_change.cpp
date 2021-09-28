#include<bits/stdc++.h>
using namespace std;

signed main() {
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x; cin>>x;
    sort(a,a+n,greater<int>());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += x/a[i];
        x -= x/a[i] * a[i];
    }

    cout<<ans<<endl;
    return 0;
}