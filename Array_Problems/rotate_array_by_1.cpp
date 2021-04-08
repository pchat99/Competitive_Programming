#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;
	
	int arr[n]; 
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}

	int x = arr[n - 1]; /* Store last element in variable x*/
	for (int i = n - 1; i > 0; i--) {
		arr[i] = arr[i - 1]; /*  Shift all element 1 position ahead.*/
	}
	
	arr[0] = x; /* Replace first element with last element */

	for (int i = 0; i < n; i++) {
		cout<<arr[i]<<" ";
	}

	return 0;
}