#include <bits/stdc++.h>
using namespace std;

int difference(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j] - arr[i] == x) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {90, 70, 20, 80, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<difference(arr, n, 20);
    return 0;
}