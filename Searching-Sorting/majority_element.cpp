#include <bits/stdc++.h>
using namespace std;

void majority(int arr[], int n) {
    int maxcount = 0;
    int index = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j  = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;            
            }
        }
        
        if (count > maxcount) {
            maxcount = count;
            index = i;
        }
    }

    if (maxcount > n/2) {
        cout<<arr[index]<<endl;
    }
    else {
        cout<<"-1"<<endl;
    }
}
 
int main() {
    int arr[] = {3,1,3,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    majority(arr,n);
    return 0;
}