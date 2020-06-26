#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    long long arr[101][101];
    arr[1][1] = 1; arr[1][0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) arr[i][j] = 1;
            else arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
        }
    }
    cout << arr[n][m] << '\n';

    /*for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }*/
}