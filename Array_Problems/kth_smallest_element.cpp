#include <bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[], int n, int k)
{
	sort(arr, arr + n);

	return arr[k - 1];
}
int main () {
	int n; cin>>n; int k; cin>>k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}

	n = sizeof(arr)/sizeof(arr[0]);
	cout<<kthsmallest(arr, n, k);
	return 0;
}