#include <bits/stdc++.h>
using namespace std;

vector<int> valueequalindex(int arr[], int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (arr[i] == i) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    int arr[] = {1,3,2,4,7,5,13,21,55,63};
    int n = sizeof(arr)/sizeof(arr[0]);
    valueequalindex(arr,n);

    return 0;
}