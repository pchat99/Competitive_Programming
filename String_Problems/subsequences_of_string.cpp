#include <bits/stdc++.h>
using namespace std;

void printSubsequence(string input, string output)
{
    vector<string> res;
    if (input.empty()) {
        res.push_back(output);
        return;
    }
 
    printSubsequence(input.substr(1), output + input[0]);
    printSubsequence(input.substr(1), output);

    for (int i = 0; i < res.size(); i++) {
        if (res[i] == "hackerrank") {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
}

int main()
{
    string output = "";
    string str; cin>>str;
 
    printSubsequence(str, output);
 
    return 0;
}