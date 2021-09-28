#include <bits/stdc++.h>
using namespace std;


int main() {
    string s; cin>>s;
    char arr[s.length()];
    strcpy(arr,s.c_str());
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        cout<<(int)arr[i]<<" ";
        sum = sum^arr[i];
        arr[i] = sum;

    }
    cout<<endl<<sum;
    return 0;
}