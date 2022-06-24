#include <bits/stdc++.h>
using namespace std;

int indegree[501];
bool graph[501][501], visited[501];
vector<int> result;
int n; 
bool flag1 = false;

void topologySort(){
    queue<int> q;

    for(int i=1;i<=n;i++){
        if(indegree[i] == 0){
            q.push(i);
            visited[i] = true;
        }
    }

    while(!q.empty()){

        if(q.size() > 1) {
           flag1 = true;
            return;
        }

        int now = q.front();

        q.pop();

        result.push_back(now);

        for(int i=1;i<501;i++){
            if(graph[now][i] == true){
                indegree[i] --;

                if(indegree[i] == 0){
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    int T; cin >> T;

    while(T--){
        cin >> n;
        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                graph[v[i]][v[j]] = true;
                indegree[v[j]]++;
            }
        }

        int m; cin >> m;

        for(int i=0;i<m;i++){
            int a, b; cin >> a >> b;

            if(graph[a][b]){
                graph[a][b] = false;
                graph[b][a] = true;
                indegree[b]--; indegree[a]++;
            }
            else if(graph[b][a]){
                graph[b][a] = false;
                graph[a][b] = true;
                indegree[b]++; indegree[a]--;
            }
        }
        
        topologySort();

        bool flag = true;
        for(int i=1;i<=n;i++){
            if(!visited[i]) flag = false;
        }

        if(flag1){
            cout << "?";
        }else if(flag){
            for(int i=0;i<n;i++){
                cout << result[i] << ' ';
            }
        }
        else cout << "IMPOSSIBLE";

        cout << "\n";

        for(int i=0;i<501;i++){
            indegree[i] = 0;
            visited[i] = false;
            for(int j=0;j<501;j++){
                graph[i][j] = false;
            }
        }
        result.clear();
        flag1 = false;
    }
}