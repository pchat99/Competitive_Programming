#include <climits>
#include <iostream>
using namespace std;
 
int maxProfit(int price[], int n, int k)
{
    
    int profit[k + 1][n + 1];
 
    // For day 0, you can't earn money
    // irrespective of how many times you trade
    for (int i = 0; i <= k; i++)
        profit[i][0] = 0;
 
    // profit is 0 if we don't do any transaction
    // (i.e. k =0)
    for (int j = 0; j <= n; j++)
        profit[0][j] = 0;
 
    // fill the table in bottom-up fashion
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j < n; j++) {
            int max_so_far = INT_MIN;
 
            for (int m = 0; m < j; m++)
                max_so_far = max(max_so_far,
                                 price[j] - price[m] + profit[i - 1][m]);
 
            profit[i][j] = max(profit[i][j - 1], max_so_far);
        }
    }
 
    return profit[k][n - 1];
}
 
// Driver code
int main()
{
    int k = 1;
    int price[] = {11,6,7,19,4,1,6,8,14};
    int n = sizeof(price) / sizeof(price[0]);
 
    cout<<maxProfit(price, n, k);
 
    return 0;
}