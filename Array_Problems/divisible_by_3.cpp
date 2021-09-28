#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int arr[n];
    for (int i  = 0; i < n; i++) {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i  = 0; i < n; i++) {
        sum += arr[i];
    }
    if (sum % 3 == 0) {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;

    return 0;
    
}