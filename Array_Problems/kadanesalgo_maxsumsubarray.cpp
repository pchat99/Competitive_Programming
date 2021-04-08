#include <bits/stdc++.h>
using namespace std; 

int main() {

int n;
cin>>n;

int arr[n];
for (int i = 0;i<n;i++) {
    cin>>arr[i];
}

int currSum = arr[0];
int maxSum = arr[0];


for (int i = 1; i<n; i++) {
    if (currSum >= 0) {
        currSum += arr[i];
    }
    else {
        currSum = arr[i];
    }
    if (currSum > maxSum) {
        maxSum =  currSum;
    }
}
cout<<maxSum;

return 0;
}
