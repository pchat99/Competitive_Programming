//In this challenge, you will determine whether a string is funny or not. 
//To determine whether a string is funny, create a copy of the string in reverse e.g. .
// Iterating through each string, compare the absolute difference in the ascii values of the characters at positions 0 and 1, 1 and 2 and so on to the end. 
//If the list of absolute differences is the same for both strings, they are funny.

//Determine whether a give string is funny. If it is, return Funny, otherwise return Not Funny
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,count;
    string s,r;
    cin>>n;
    while(n--)
{ count=0;
    cin>>s;
    r=s;reverse(r.begin(),r.end());
    for(int i=1;i<s.length();i++)
       {
          if(abs(s[i]-s[i-1])==abs(r[i]-r[i-1]))
            {count++;

            }
       }
if(count==s.length()-1)
{cout<<"Funny\n";
}else cout<<"Not Funny\n";

}
}