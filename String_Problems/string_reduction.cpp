#include<bits/stdc++.h>
using namespace std;
 
int stringReduction(string str)
{
    int n = str.length();
    // count occurences of 3 different characters in string
    int count[3] = {0};
    for (int i=0; i<n; ++i)
        count[str[i]-'a']++;
 
    if (count[0] == n || count[1] == n ||
        count[2] == n)
        return n;
 
    if ((count[0] % 2) == (count[1] % 2) &&
        (count[1] % 2) == (count[2] % 2))
        return 2;
 
    return 1;
}

int main() {
    string s;
    cin>>s;
    cout<<stringReduction(s)<<endl;
    return 0;
}