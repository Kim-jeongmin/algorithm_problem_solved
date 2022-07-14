#include <bits/stdc++.h>
using namespace std;

const int INF = 2100000000;
int N, M, W;
vector<tuple<int, int, int>> edges;
int d[501];

bool bf(int start){

    d[start] = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<edges.size();j++){

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

    ios::sync_with_stdio(0);
	cin.tie(0);
    int TC; cin >> TC;

    while(TC--){
        
        cin >> N >> M >> W;

        for(int i=1;i<=N;i++) d[i] = INF;

        int S, E, T;
        for(int i=0;i<M;i++){
            cin >> S >> E >> T;

            edges.push_back({S, E, T});
            edges.push_back({E, S, T});
        }

        for(int i=0;i<W;i++){
            cin >> S >> E >> T;

            edges.push_back({S, E, -T});
        }

        if(bf(1)) cout << "YES\n";
        else cout << "NO\n";
        

        edges.clear();

    }
}