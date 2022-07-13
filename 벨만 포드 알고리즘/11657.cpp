#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll INF = 1e9;
const int MAX = 6001;

ll d[MAX];
vector<tuple<int, int, ll>> edges;
int N, M;

bool bf(int start){

    d[start] = 0;

    for(int i=0;i<N;i++){

        for(int j=0;j<M;j++){
            int cur_node = get<0>(edges[j]);
            int next_node = get<1>(edges[j]);
            int cost = get<2>(edges[j]);

            if(d[cur_node] != INF && d[next_node] > d[cur_node] + cost){
                d[next_node] = d[cur_node] + cost;

                if(i == N-1) return true;
            }
        }
    }


    return false;                         
    
}

int main(){
    cin >> N >> M;

    for(int i=1;i<MAX;i++) d[i] = INF;

    for(int i=0;i<M;i++){
        int a, b; ll c; cin >> a >> b >> c;

        edges.push_back({a, b, c});
    }
    
    if(bf(1)){
        cout << -1 << '\n';
    }
    else {
        for(int i=2;i<=N;i++){
            if(d[i] != INF) cout << d[i] << '\n';
            else cout << -1 << '\n';
        }
    }
}