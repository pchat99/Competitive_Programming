#include <bits/stdc++.h>
using namespace std;

int adjacent(int arr[], int n, int k, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
}

int main() {
    int arr[] = {20, 40, 50, 70, 70, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<adjacent(arr, n, 20, 60);
    return 0;
}