#include <bits/stdc++.h>
using namespace std;

void findmaxsum(int arr[], int n) {
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k+=2) {
                sum += arr[k];
            }
            maxsum = max(maxsum, sum);
        }
    }
    cout<<maxsum;
}

int main() {
    int arr[] = {5, 3, 4, 11, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    findmaxsum(arr, n);
    return 0;
}