#include <bits/stdc++.h>
using namespace std;

int T, N, K, W;

int indegree[1002];
int Time[1002];
vector<int> graph[1002];

void topologySort(){
    vector<int> result(1002);
    queue<int> q;

    for(int i=1;i<=N;i++){
        if(indegree[i] == 0) {
            q.push(i);
            result[i] = Time[i];
        }
    }

    while(!q.empty()){

        int now = q.front();
        q.pop();

        for(int i=0;i<graph[now].size();i++){

            indegree[graph[now][i]]--;

            result[graph[now][i]] = max(result[graph[now][i]], result[now] + Time[graph[now][i]]);

            if(indegree[graph[now][i]] == 0){

                q.push(graph[now][i]);


            }
        }
    }

    cout << result[W] << '\n';
}

int main(){

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;

    for(int i=0;i<T;i++){
        cin >> N >> K;

        for(int i=1;i<=N;i++) cin >> Time[i];

        for(int i=0;i<K;i++){
            int X, Y; cin >> X >> Y;

            graph[X].push_back(Y);

            indegree[Y]++;
        }
        
        cin >> W;

        topologySort();

        for(int i=0;i<1002;i++){
            Time[i] = 0;
            while(!graph[i].empty()) graph[i].pop_back();
        }

    }
}