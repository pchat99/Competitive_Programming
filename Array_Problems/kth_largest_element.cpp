#include <bits/stdc++.h>

using namespace std;

int kthlargest(int arr[], int n, int k) {
    sort(arr,arr+n,greater<int>());
    return arr[k - 1];
}
int main()
{
    int n; cin>>n; int k; cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<kthlargest(arr,n,k)<<endl;
    return 0;
}
