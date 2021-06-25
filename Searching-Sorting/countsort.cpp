#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n) {
    int k = arr[0];
    for (int i = 0; i < n; i++) {
        k = max(k, arr[i]);
    }

    int count[10] = {0}; // declaring a count array

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;  // putting elements in count array
    }
    
    for (int i = 1; i <= k; i++) {
        count[i] += count[i-1]; // modifying the count array
    }

    int output[n];
    for (int i = n - 1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i]; //putting elements in output array in sorted increasing order
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

}

int main() {
    int arr[] = {1,3,2,3,2,4,1,6,4,3};
    countSort(arr,10);

    for (int i = 0; i < 10; i++) {
        cout<<arr[i]<<" ";
    } 

    return 0;
}