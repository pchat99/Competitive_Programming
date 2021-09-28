#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void wavelikearr(int arr[], int n) {
    for (int i = 0; i < n; i+=2) {
        if (i > 0 && arr[i-1] > arr[i]) {
            swap(&arr[i],&arr[i-1]);
        }
        if (i < n-1 && arr[i] < arr[i+1]) {
            swap(&arr[i], &arr[i+1]);
        }
    }
}

int main() {
    int n; cin>>n;
    int arr[n];
    n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    wavelikearr(arr,n);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}