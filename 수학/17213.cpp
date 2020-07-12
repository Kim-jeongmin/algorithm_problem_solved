#include <bits/stdc++.h>
using namespace std;

int Carr[50][50];
int C(int n,int r){
    Carr[1][0] = 1; Carr[1][1] = 1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<=i;j++){
            Carr[i][j] = Carr[i-1][j-1] + Carr[i-1][j];
        }
    }
    return Carr[n][r];
}
int main(){
    int a,b; cin >> a >> b;
    b-=a;
    cout << C(a+b-1,b);
    return 0;
}