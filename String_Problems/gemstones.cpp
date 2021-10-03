#include <bits/stdc++.h>
using namespace std;

int main() {

    int N,alpa[26] = {0},check = 0;
    cin >> N;
    for(int j = 0;j < N; j++){

        string str;
        cin >> str;
        for(int i = 0; i < str.size(); i++){
            if(alpa[str[i]-97] == check){
                alpa[str[i]-97]++;
            }
        }
        check++;
    }
    int count = 0;
    for(int i = 0; i < 26; i++){

        if(alpa[i] == N){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
