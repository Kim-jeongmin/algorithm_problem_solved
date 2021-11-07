#include <bits/stdc++.h>
#define MOD int(1e9+7)
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int T; cin >> T;
    
    while(T--){
        
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        long long result = 1;
        int N; cin >> N;
        
        for(int i=0;i<N;i++){
            long long n; cin >> n;
            pq.push(n);
        }
        
        while(pq.size() > 1){
            
            long long temp_1 = pq.top();
            pq.pop();
            long long temp_2 = pq.top();
            pq.pop();
            
            long long temp_3 = temp_1 * temp_2;
            
            pq.push(temp_3);
            
            result = (result * (temp_3%MOD)) % MOD;
        }
        
        cout << result << '\n';
        
        
    }
}