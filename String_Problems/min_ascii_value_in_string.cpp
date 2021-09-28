#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin,s);
    char word;
    vector<char> arr;
    stringstream str(s);
    while (str >> word) {
        arr.push_back(word);
    }
    sort(arr.begin(),arr.end());
    cout<<arr[0];
    char max = *max_element(arr.begin(),arr.end());
    cout<<endl<<max;

    return 0;
}