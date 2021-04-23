#include <bits/stdc++.h>
using namespace std; 
int uniquenumber(int arr[], int n) {
    int xorsum = 0;
    for (int i = 0; i < n; i++) {
        xorsum = xorsum ^ arr[i];
    }

    return xorsum;
}
   
int main() {
    int arr[] = {1,4,6,7,4,6,1};

    cout<<uniquenumber(arr,7);
    return 0;
}