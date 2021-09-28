#include <bits/stdc++.h>
using namespace std;

void subsetsofarr(int arr[], int n) {
    int count = pow(2,n);
    for (int i = 0; i < count;i++) {
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) 
                cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n; cin>>n;
    int arr[n];
    for (int i  = 0; i < n; i++) {
        cin>>arr[i];
    }
    subsetsofarr(arr,n);
}