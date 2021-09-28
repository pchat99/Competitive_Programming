#include <bits/stdc++.h>
using namespace std;

void evenlenwords(string s) {
    stringstream str(s);
    string word;
    while(str >> word) {
        if ((word.length())%2==0) {
            cout<<word<<endl;
        }
    }
}
int main()
{
    string s; 
    getline(cin,s);
    evenlenwords(s);
    return 0;
}