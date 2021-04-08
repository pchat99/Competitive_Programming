#include <bits/stdc++.h>
using namespace std;

int findUnion(int arr1[], int arr2[], int n, int m) {
    int i = 0; int j = 0;
    while (i < n && j < m) {
        if ( arr1[i] < arr2[j] ) {
            cout<<arr1[i++]<<" ";
        }
        else if( arr2[j] < arr1[i] ) {
            cout<<arr2[j++]<<" ";
        }
        else {
            cout<<arr2[j++]<<" ";
            i++;
        }
        
    }
    /* Printing remaining elements of the array */
    while (i < n)
        cout << arr1[i++] << " ";
  
    while (j < m)
        cout << arr2[j++] << " ";
}

int findIntersection(int arr1[], int arr2[], int n, int m) {
    int i = 0; int j = 0;
    while (i < n && j < m) {
        if ( arr1[i] < arr2[j] ) {
            i++;
        }
        else if( arr2[j] < arr1[i] ) {
            j++;
        }
        else {
            cout<<arr2[j]<<" ";
            i++;
            j++;
        }
        
    }
}

int main () {
    int n , m;
    cin>>n>>m;
    int arr1[n]; int arr2[m];

    for (int i = 0; i < n; i++) {
        cin>>arr1[i];
    }

    for (int j = 0; j < m; j++) {
        cin>>arr2[j];
    }

    n = sizeof(arr1)/sizeof(arr1[0]);
    m = sizeof(arr2)/sizeof(arr2[0]);

    cout<<findUnion(arr1, arr2, n, m)<<" ";
	cout<<"\n";
    cout<<findIntersection(arr1, arr2, n, m)<<" ";

    return 0;
}
