#include <bits/stdc++.h>
using namespace std;

int findmissingnumber(int arr[], int n) {
    int sumofnumberstilln =  (n+1)*(n+2)/2;
    for (int i = 0; i < n; i++) {
        sumofnumberstilln -= arr[i];
    }
    return sumofnumberstilln;
}

int main() {
    int n;
    int arr[n];
    n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int result = findmissingnumber(arr,n);
    cout<<result;
    return 0;
}