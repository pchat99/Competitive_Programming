#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,5,7,9,13,21,55,63};
    cout<<linearsearch(arr,9,10);

    return 0;
}