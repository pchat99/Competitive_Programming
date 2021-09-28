#include <bits/stdc++.h>

using namespace std;
void checkvowel(char *s) {
    if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' || *s == 'E' || *s == 'O' || *s == 'I' || *s == 'U') {
        cout<<"Accepted"<<endl;
    }
    else {
        cout<<"Not Accepted"<<endl;
    }
}

int main()
{
    char str[100];
    cin>>str;
    checkvowel(str);
    return 0;
}
