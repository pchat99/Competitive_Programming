#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b,c;
    cin>>a>>b>>c;

    int arr[] = {a,b,c};
    sort(arr,arr+3);
    cout<<arr[1];
}