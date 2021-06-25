#include <bits/stdc++.h>
using namespace std;

void quadruplets(int arr[], int n, int x) {
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            for (int k = j + 1; k < n - 1; k++) {
                for (int l = k + 1; l < n; l++) {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == x) {
                        cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<arr[l]<<endl;
                    }
                }
            }
        }
    }
}

int main() {
    int arr[] = {0,0,2,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    quadruplets(arr, n, 3);
    return 0;
}