#include <iostream>
using namespace std;

int dictionary(string &word) {
    string dictionary[] =  {"cats", "cat", "and", "sand", "dog"};
    int n = sizeof(dictionary)/sizeof(dictionary[0]);
    for (int i = 0; i < n; i++) {
        if (dictionary[i].compare(word) == 0) {
            return true;
        return false;
        }
    }
}

void wordBreakUtil(string str, int size, string result);

void wordBreak(string s) {
    wordBreakUtil(s, s.size(), "");
}

void wordBreakUtil(string str, int n, string result) {
    for (int i = 1; i < n; i++) {
        string prefix = str.substr(0,i);

        if (dictionary(prefix)) {
            if (i == n) {
                result += prefix;
                cout<<result<<endl;
                return ;
            }
            wordBreakUtil(str.substr(i, n-i), n-i,
                                result + prefix + " ");
        }
    }
}

int main() {
    wordBreak("catsanddog");
    return 0;
}

