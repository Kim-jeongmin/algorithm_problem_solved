#include <bits/stdc++.h>
using namespace std;

priority_queue<long, vector<long>, greater<long>> pq;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(); cout.tie();
    int N; cin >> N;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            long num; cin >> num;
            pq.push(num);
            if(pq.size() > N) pq.pop();
        }
    }
    
    cout << pq.top();
    
}