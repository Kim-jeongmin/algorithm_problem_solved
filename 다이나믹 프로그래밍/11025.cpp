#include <bits/stdc++.h>
using namespace std;

long long josephus(int N, int K){
    if(N == 1) return 0;
    if(N < K) return (josephus(N-1, K)+K)%N;
    
}

int main(){
    int N, K; cin >> N >> K;

    cout << josephus(N, K);

    
    
}