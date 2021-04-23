#include <bits/stdc++.h>
using namespace std; 

int squareofno(int n) {
    if (n == 0) 
        return 0;

    if (n < 0) 
        n = -n;

    int x = n >> 1;

    if (n & 1) { // if n is odd 
        return ((squareofno(x) << 2) + (x << 2) + 1);
    }
    else // if n is even
    {
        return (squareofno(x) << 2);
    }
    
}
  
int main() {
    int n;
    cin>>n;
    cout<<squareofno(n);
    return 0;
}