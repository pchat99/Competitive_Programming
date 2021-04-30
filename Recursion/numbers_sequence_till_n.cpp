#include <bits/stdc++.h>
using namespace std;

void sequence(int n) {
    if (n == 1) {
        cout<<"1"<<endl;
        return ;
    }

    sequence(n-1);
    cout<<n<<endl;
}

int main() {
    int n;
    cin>>n;

    sequence(n);
    return 0;
}