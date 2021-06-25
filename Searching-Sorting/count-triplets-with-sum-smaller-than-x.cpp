#include <bits/stdc++.h>
using namespace std;

int triplets(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] < x) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {-2, 0, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<triplets(arr, n, 2);
    return 0;
}