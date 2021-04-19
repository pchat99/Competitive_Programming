#include <bits/stdc++.h>
using namespace std; 

bool balancedparanthesis(string str) {
    stack<char> s;
    char x;
    int n = str.length();

    for (int i = 0; i < n; i++) {
        if (str[i] == '(' or str[i] == '{' or str[i] == '[' ) {
            s.push(str[i]);
            continue;
        }
        if (s.empty()) {
            return false;
        }

        switch(str[i]) {
            case ')':
            x = s.top();
            s.pop();
            if (x == '[' or x == '{') 
                return false;
            break;

            case ']':
            x = s.top();
            s.pop();
            if (x == '(' or x == '{') 
                return false;
            break;

            case '}':
            x = s.top();
            s.pop();
            if (x == '(' or x == '[') 
                return false;
            break;

        }
    }

    return (s.empty());
}

int main() {
    string str;
    cin>>str;
    
    if (balancedparanthesis(str)) {
        cout<<"True";
    }
    else {
        cout<<"False";
    }
    return 0;
}