#include <bits/stdc++.h>
#define ll long long
using namespace std;

int result_cnt = 0;
int K, N;
vector<ll> prime;
ll MAXvalue = 0;
map<ll, bool> visited;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> K >> N;
    
    priority_queue<ll , vector<ll>, greater<ll>> pq;

    for(int i=0;i<K;i++){
        ll n; cin >> n;
        pq.push(n);
        prime.push_back(n);
        visited[n] = true;
        MAXvalue = max(MAXvalue, n);
    }

    while(!pq.empty()){
        ll now = pq.top();
        pq.pop();
        result_cnt ++;
        
        if(result_cnt == N) {
            cout << now; break;
        }
        for(int i=0;i<K;i++){

            ll next = now * prime[i];

            if(N < pq.size() && next > MAXvalue) continue;
            if(!visited.count(next)){
                pq.push(next);
                visited[next] = true;
                MAXvalue = max(MAXvalue, next);
            }
        }
    }
}