#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    
    long long fibo[100];
    
    fibo[0] = 0;
    fibo[1] = 1;
    
    for(int i=2;i<=N;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    
    cout << fibo[N];
}