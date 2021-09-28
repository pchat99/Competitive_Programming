#include <bits/stdc++.h>
 
using namespace std;
 
// function to count the total
// number of ways to sum up to 'N'
int countWays(int arr[], int m, int N)
{
    int count[N + 1];
    memset(count, 0, sizeof(count));
     
    // base case
    count[0] = 1;
     
    // count ways for all values up
    // to 'N' and store the result
    for (int i = 1; i <= N; i++)
        for (int j = 0; j < m; j++)
 
            // if i >= arr[j] then
            // accumulate count for value 'i' as
            // ways to form value 'i-arr[j]'
            if (i >= arr[j])
                count[i] += count[i - arr[j]];
     
    // required number of ways
    return count[N];
     
}
 
// Driver code
int main()
{
    int arr[] = {1, 2, 3};
    int m = sizeof(arr) / sizeof(arr[0]);
    int N = 4;
    cout << "Total number of ways = "
        << countWays(arr, m, N);
    return 0;
}