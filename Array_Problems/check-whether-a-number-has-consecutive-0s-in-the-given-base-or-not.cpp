#include<bits/stdc++.h>
using namespace std;
 
 
 
// Function to convert N into base K
int toK(int N, int K)
{
 
// Weight of each digit
    int w = 1;
    int s = 0;
    while (N != 0)
     {
        int r = N % K;
        N = N/K;
        s = r * w + s;
        w *= 10;
     }
    return s;
 
}
 
// Function to check for consecutive 0
bool check(int N)
{
 
// Flag to check if there are consecutive
    // zero or not
    bool fl = false;
    while (N != 0)
    {
 
        int r = N % 10;
        N = N/10;
 
        // If there are two consecutive zero
        // then returning False
        if (fl == true and r == 0)
            return false;
        if (r > 0)
            {
            fl = false;
            continue;
            }
        fl = true;
 
    }
     return true;
         
}
 
int main()
{
int n; cin>>n;
int k; cin>>k;
int z = toK(n, k);
if (check(z))
    cout<<"Yes"<<endl;
else 
    cout<<"No"<<endl;
return 0;
}