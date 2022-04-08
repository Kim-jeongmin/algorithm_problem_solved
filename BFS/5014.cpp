#include <bits/stdc++.h>
using namespace std;

int F, S, G, U, D;
bool visited[1000002];

void bfs(){

    queue<pair<int, int>> q;
    q.push({S, 0});
    visited[S] = true;

    if(S == G) {
        cout << 0; 
        return;
    }

    while(!q.empty()){

        int cur_pos = q.front().first;
        int cur_cnt = q.front().second;

        q.pop();

        if(cur_pos+U == G || cur_pos-D == G){
            cout << cur_cnt+1;
            return;
        }

        if(cur_pos+U <= F && !visited[cur_pos+U]) {
            q.push({cur_pos+U, cur_cnt + 1});
            visited[cur_pos+U] = true;
        }
        if(cur_pos-D >= 1 && !visited[cur_pos-D]) {
            q.push({cur_pos-D, cur_cnt + 1});
            visited[cur_pos-D] = true;
        }
    }

    cout << "use the stairs";
}

int main(){
    cin >> F >> S >> G >> U >> D;

    if((U == 0 && S < G) || (D == 0 && S > G)) cout << "use the stairs";
    else bfs();
}