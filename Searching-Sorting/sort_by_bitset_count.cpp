#include <bits/stdc++.h>
using namespace std;

int countbits(int a) {
    int count = 0;
    while(a) {
        if (a & 1) {
            count += 1;
        a = a >> 1;
        }
    }
    return count;
 }

 int comparator(int a, int b) {
     int count1 = countbits(a);
     int count2 = countbits(b);

     if (count1 <= count2) {
         return false;
     } return true;
 }

 void sortsetbits(int arr[], int n) {
     stable_sort(arr, arr+n,comparator);
 }

 void printarray(int arr[], int n) {
     for (int i = 0; i<n; i++) {
         cout<<arr[i]<<" ";
     }
 }
 
 int main() {
     int arr[] = {5, 2, 3, 9, 4, 6, 7, 15, 32};
     int n = sizeof(arr)/sizeof(arr[0]);
     sortsetbits(arr, n);
     printarray(arr,n);
     return 0;
 }