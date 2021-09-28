#include <bits/stdc++.h>
using namespace std;

void printSubsequence(string input, string output)
{
    if (input.empty()) {
        cout << output << endl;
        return;
    }
 
    printSubsequence(input.substr(1), output + input[0]);
    printSubsequence(input.substr(1), output);
}

int main()
{
    string output = "";
    string str; cin>>str;
 
    printSubsequence(str, output);
 
    return 0;
}