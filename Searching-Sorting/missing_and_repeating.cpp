#include <bits/stdc++.h>
using namespace std;

int missingandrepeating(int arr[], int n) {
    int missing = 0;
    int repeating = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i+1]) {
            repeating = arr[i];
        }
        missing = (arr[i] - 1);
    }
    cout<<repeating<<" "<<missing;
}

int main() {
    int arr[] = {2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<missingandrepeating(arr,n);
    return 0;
}