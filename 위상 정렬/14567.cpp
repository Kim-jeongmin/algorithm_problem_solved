#include <bits/stdc++.h>
using namespace std;

int v, e, cnt = 1;

int indegree[1001];
vector<int> graph[1001];

void topologySort(){

    vector<int> result(1001);
    queue<int> q;


    for(int i=1;i<=v;i++){
        if(indegree[i] == 0){
            q.push(i); result[i] = cnt;
        }
    }

    cnt++;

    while(!q.empty()){

        int now = q.front();
        q.pop();

        result.push_back(now);

        for(int i=0;i<graph[now].size();i++){
            indegree[graph[now][i]] -= 1;

            if(indegree[graph[now][i]] == 0){
                q.push(graph[now][i]);
                result[graph[now][i]] = result[now]+1;
            }
        } 
    }

    for(int i=1;i<=v;i++) cout << result[i] << ' ';
}

int main(){
    
    cin >> v >> e;

    for(int i=0;i<e;i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);

        indegree[b]+=1;
    }

    topologySort();
}