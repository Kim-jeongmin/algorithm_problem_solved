#include <iostream>
#include <vector>
using namespace std;

int k,n;
long long mod = 1000000007;

int main(){
    cin >> k >> n;
    vector<vector<long long>> S(k+1, vector<long long>(n+2, 0));
    for(int i=0;i<=k;i++){
        for(int j=1;j<=n;j++){
            if(i==0) S[i][j] = j;
            else S[i][j] = (S[i-1][j]%mod + S[i][j-1]%mod)%mod;
        }
    }
    cout << S[k][n];
}