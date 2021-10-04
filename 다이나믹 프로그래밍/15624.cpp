#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
    int N; cin >> N;
    
    long long fibo[1000001];
    
    fibo[0] = 0;
    fibo[1] = 1;
    
    for(int i=2;i<=N;i++){
        fibo[i] = fibo[i-1] % MOD + fibo[i-2] % MOD;
        fibo[i] %= MOD;
    }
    
    cout << fibo[N];
}