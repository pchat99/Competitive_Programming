#include <bits/stdc++.h>
using namespace std; 

int main() {

int n, k;
cin>>n>>k;

int arr[n];
for (int i = 0;i<n;i++) {
    cin>>arr[i];
}


sort(arr, arr + n);


for (int i = 0; i < n - 1; i++) {
    if (arr[i] == arr[i + 1]) {
        cout<<i<<"\n";
        cout<<"Duplicate found";
    }
    else {
        cout<<"Duplicate not found";
    }
}

return 0;
}