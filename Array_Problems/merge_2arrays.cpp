#include <bits/stdc++.h>
using namespace std;

int printUnion(int arr1[], int arr2[], int n, int m)
{
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
  
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
  
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }

    while (i < n)
        cout << arr1[i++] << " ";
  
    while (j < m)
        cout << arr2[j++] << " ";
}

int main()
{
    int m; int n;
    cin>>m>>n;
    int arr1[n]; int arr2[m];

    for (int i = 0;i<n;i++) {
    cin>>arr1[i];
}

for (int j = 0;j<m;j++) {
    cin>>arr2[j];
}

     m = sizeof(arr1) / sizeof(arr1[0]);
     n = sizeof(arr2) / sizeof(arr2[0]);
  
    // Function calling
    printUnion(arr1, arr2, m, n);
  
    return 0;
}
