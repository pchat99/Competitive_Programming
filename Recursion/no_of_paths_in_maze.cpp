#include <bits/stdc++.h>
using namespace std;

int pathsinMaze(int n, int i, int j) {
    if (i == n - 1 && j == n - 1) {
        return 1;
    }

    if (i >= n || j >= n) {
        return 0;
    }

    return pathsinMaze(n,i+1,j) + pathsinMaze(n,i,j+1);
}

int main() {
    int n,i,j;
    cin>>n>>i>>j;

    cout<<pathsinMaze(n,i,j);
    return 0;
}