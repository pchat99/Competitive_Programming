#include <bits/stdc++.h>
using namespace std; 
int main() {
int n;
cin>>n;

int arr[n];
for (int i = 0;i<n;i++) {
    cin>>arr[i];
}

n = sizeof(arr)/sizeof(arr[0]);

int res = INT_MAX;
for (int i = n - 2; i >= 0; i--) {
     if (i + arr[i] >= n - 1) {
            int sub_res = (arr, i + 1);
            if (sub_res != INT_MAX)
                res = min(res, sub_res + 1);
        }
}

cout<<res<<" ";

return 0;
}
