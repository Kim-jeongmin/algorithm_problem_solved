#include <bits/stdc++.h>
using namespace std;

int N, M;

int indegree[32002];
vector<int> graph[32002];

void topologySort(){

    vector<int> result;
    queue<int> q;

    for(int i=1;i<=N;i++){
        if(indegree[i] == 0){
            result.push_back(i);
            q.push(i);
        }
    }

    while(!q.empty()){

        int now = q.front();
        q.pop();

        for(int i=0;i<graph[now].size();i++){

            indegree[graph[now][i]]--;

            if(indegree[graph[now][i]] == 0){

                result.push_back(graph[now][i]);
                q.push(graph[now][i]);
            }
        }
    }

    for(int i=0;i<result.size();i++) {
        cout << result[i] << ' ';
    }
}

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    cin >> N >> M;

    for(int i=0;i<M;i++){
        int A, B; cin >> A >> B;

        graph[A].push_back(B);

        indegree[B]++;
    }

    topologySort();
}