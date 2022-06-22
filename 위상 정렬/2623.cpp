#include <bits/stdc++.h>
using namespace std;

int N, M;
bool flag = true;

int indegree[1002];
vector<int> graph[1002];
bool visited[1002];
vector<int> result;

void topologySort(){
    queue<int> q;

    for(int i=1;i<=N;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        
        int now = q.front();
        q.pop();

        result.push_back(now);
        visited[now] = true;

        for(int i=0;i<graph[now].size();i++){

            indegree[graph[now][i]]--;

            if(indegree[graph[now][i]] == 0){
                q.push(graph[now][i]);
            }
        }

        
        graph[now].clear();
        
    }

}

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    cin >> N >> M;

    for(int i=0;i<M;i++){
        int n; cin >> n;

        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];

        for(int j=1;j<n;j++){
            graph[v[j-1]].push_back(v[j]);
            indegree[v[j]]++;
        }
    }

    topologySort();

    for(int i=1;i<=N;i++){
        if(!visited[i]) {
            flag = false; break;
        }
    }

    if(flag){
        for(int i=0;i<N;i++) {
            cout << result[i] << '\n';
        }
    }
    else cout << 0;

}