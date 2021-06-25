#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int start, int end, int x) {
    if (end >= start) {
        int mid = start + (end - start)/2;
        
        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] > x) {
            return binarysearch(arr,start,mid-1,x);
        }
        return binarysearch(arr,mid+1,end,x);
        
    }
    return -1;
}

int main() {
    int arr[] = {1,2,5,7,9,13,21,55,63};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<binarysearch(arr,0,n-1,5);

    return 0;
}