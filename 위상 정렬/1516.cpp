#include <bits/stdc++.h>
using namespace std;

int N;

int indegree[502], Time[502];
vector<int> graph[502];

void topologySort(){

    vector<int> result(502);
    queue<int> q;

    for(int i=1;i<=N;i++){
        if(indegree[i] == 0){
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

    for(int i=1;i<=N;i++){
        cout << result[i] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    cin >> N; 

    for(int i=1;i<=N;i++){
        cin >> Time[i];

        while(true){
            int n; cin >> n;

            if(n == -1) break;
            graph[n].push_back(i);
            indegree[i]++;
        }
    }

    topologySort();
}