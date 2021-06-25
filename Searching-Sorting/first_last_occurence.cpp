#include <bits/stdc++.h>
using namespace std;

void firstandlast(int arr[], int n, int x) {
    int a1 = -1;
    int a2 = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            a1 = i;
            break;
        }
    }

    for (int i = n-1;i >= 0; i--) {
        if (arr[i] == x) {
            a2 = i;
            break;
        }
    }

    cout<<a1<<" "<<a2;
}

int main() {
    int arr[] = {1,2,5,5,5,5,5,7,9,13,21,55,63};
    int n = sizeof(arr)/sizeof(arr[0]);
    firstandlast(arr,n,5);
    return 0;
}