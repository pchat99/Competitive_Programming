#include <bits/stdc++.h>
using namespace std; 

int main() {

int n, k;
cin>>n>>k;

int arr[n];
for (int i = 0;i<n;i++) {
    cin>>arr[i];
}

int ans = arr[n-1] - arr[0];

sort(arr, arr + n);

int small = arr[0] + k;
int big = arr[n - 1] - k;
if (small > big) {
    swap(small,big);
}

for (int i = 1; i < n-1; i ++)
    {
        int subtract = arr[i] - k;
        int add = arr[i] + k;

        if (subtract >= small || add <= big)
            continue;
        if (big - subtract <= add - small)
            small = subtract;
        else
            big = add;
    }

int x = min(ans, big - small);

cout<<x<<endl;
return 0;
}
