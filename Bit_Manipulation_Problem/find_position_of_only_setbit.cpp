#include <bits/stdc++.h>
using namespace std; 

int powerof2(int n) {
    return (n && !(n & (n - 1)));
}

int findposition(int n) {
    if (!powerof2(n)) 
        return n;

    int pos = 1; int i = 1;

    while(!(i & n)) {
        i = i << 1;
        ++pos;
    }
    return pos;
    
}
   
int main() {
    int n;
    cin>>n;

    int pos = findposition(n);
    (pos == -1) ? cout<<"Invalid number"<<endl : cout<<pos<<endl;
    return 0;
}