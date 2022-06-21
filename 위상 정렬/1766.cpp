#include <bits/stdc++.h>
using namespace std;

int N, M;

int indegree[32002];
vector<int> graph[32002];

void topologySort(){

    vector<int> result;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=1;i<=N;i++){
        if(indegree[i] == 0){
            pq.push(i);
        }
    }

    while(!pq.empty()){

        int now = pq.top();
        pq.pop();

        result.push_back(now);

        for(int i=0;i<graph[now].size();i++){

            indegree[graph[now][i]]--;

            if(indegree[graph[now][i]] == 0){
                pq.push(graph[now][i]);
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