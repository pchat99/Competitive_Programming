#include <bits/stdc++.h>
using namespace std;

int leftrotate(int arr[], int n, int d) {
    reverse(arr,arr + d);
    reverse(arr + d, arr + n);
    reverse(arr,arr + n);
}

int rightrotate(int arr[], int d) {
    int n = sizeof(arr)/size(arr[0]);
    leftrotate(arr,n-d);
}

int main() {
    int n,d; cin>>n>>d;
    int arr[n];
    n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<leftrotate(arr,d);
    return 0;
}
