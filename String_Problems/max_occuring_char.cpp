#include <bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;

char maxoccuringchar(char *str) {
    int count[ASCII_SIZE] = {0};
    int n = strlen(str);
    int max = 0;
    char result;

    for (int i = 0; i < n; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }
    return result;

}

int main() {
    char s[100];
    cin>>s;
    cout<<maxoccuringchar(s)<<endl;
    return 0;
}
