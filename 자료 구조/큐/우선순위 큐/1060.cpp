#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll INF = 1e18;
map<int, bool> visited;

int main(){
    int L, n; cin >> L;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, 0});

    vector<ll> v(L+2);
    v[0] = 0;
    for(int i=1;i<=L;i++) {
        cin >> v[i];
        pq.push({1, v[i]});
        visited[v[i]] = true;
    }
    v[L+1] = 1000000001;

    sort(v.begin(), v.end());

    cin >> n;
    int cnt = 0;

    while(!pq.empty()){
        ll now = pq.top().second;

        pq.pop();

        if(now != 0) {
            cout << now << ' ';
            cnt++;
            if(cnt == n) break;
        }

        for(int i=0;i<L+1;i++){
            if(!visited[now+1] && v[i] < now + 1 && now + 1 < v[i+1]) {
                if(i == L) pq.push({INF, now+1});
                else pq.push({abs((v[i]-(now+1))*(v[i+1]-(now+1))), now+1});
                
                visited[now+1] = true;
                break;
            }
            
            if(!visited[now-1] && v[i] < now - 1 && now - 1 < v[i+1]){
                pq.push({abs((v[i]-(now-1))*(v[i+1]-(now-1))), now-1});
                visited[now-1] = true;
            }
        
        }


        
    }


}