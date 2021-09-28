#include <bits/stdc++.h>
using namespace std;

void productcode(int arr[], int n) {
    int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) 
                break;
        }
        if (j == n) {
            cout<<arr[i]<<endl;
            break;
        }
    }
}

int main () {
    int n; cin>>n;
    int arr[n];
    n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    productcode(arr,n);
}