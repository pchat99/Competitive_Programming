#include <bits/stdc++.h>
using namespace std;

void greaterthan(string str, int k) {
    stringstream s(str);
    string word;
    while (s >> word) {
        if ((word.length()) > k) {
            cout<<word<<endl;
        }
    }
}
int main()
{
    string str; 
    getline(cin,str);
    int k; cin>>k;
    greaterthan(str,k);
    return 0;
}
