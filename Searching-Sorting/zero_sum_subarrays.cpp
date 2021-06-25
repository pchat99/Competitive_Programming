#include <bits/stdc++.h>
using namespace std;

void zerosum(int arr[], int n) {
    int count = 0;
    for (int i  = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {                
                sum  += arr[k];
            }
            if (sum == 0) {
                count++;
            }
        }
    } cout<<count;
}

int main() {
    int arr[] = {6,-1,-3,4,-2,2,4,6,-12,-7};
    int n = sizeof(arr)/sizeof(arr[0]);
    zerosum(arr, n);
    return 0;
}