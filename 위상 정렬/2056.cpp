#include <bits/stdc++.h>
using namespace std;

int N;
int indegree[10002];
int Time[10002];
vector<int> graph[10002];
int ans = 0;


void topologySort(){

    vector<int> result(10001);
    queue<int> q;

    for(int i=1;i<=N;i++){ 
        if(indegree[i] == 0){
            q.push(i);
            result[i] = Time[i];
            ans = max(ans, Time[i]);
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

                ans = max(ans, result[graph[now][i]]);
            }
        }
    }
    
    cout << ans;

}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> N;

    for(int i=1;i<=N;i++){
        int a, b; cin >> a >> b;

        Time[i] = a;

        for(int j=0;j<b;j++){
            int c; cin >> c;
            graph[c].push_back(i);
            indegree[i]++;
        }
    }

    topologySort();
}