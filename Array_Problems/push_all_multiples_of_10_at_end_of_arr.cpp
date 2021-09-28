#include <bits/stdc++.h>
using namespace std;

void multipleof10(int arr[], int n) {
    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 10 != 0) {
            a.push_back(arr[i]);
        }
        else
        {
            b.push_back(arr[i]);
        }
    }
    vector<int> v(a.size() + b.size());
    vector<int>::iterator it, st;
 
    it = set_union(a.begin(),
                   a.end(),
                   b.begin(),
                   b.end(),
                   v.begin());
 
    for (st = v.begin(); st != it; st++)
        cout << *st <<" ";
    cout <<endl;
}

int main() {
    int n; cin>>n;
    int arr[n];
    n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    multipleof10(arr,n);
    return 0;
}