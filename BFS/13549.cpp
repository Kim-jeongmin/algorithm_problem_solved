#include <bits/stdc++.h>
using namespace std;

const int MAX = 200000;

int N, K;
int cnt[MAX+1];

bool isIn(int x){
    return 0<=x && x<=MAX;
}

void bfs(){

    deque<int> dq;
    dq.push_back(N);
    cnt[N] = 0;

    while(!dq.empty()){
        
        int cur_num = dq.front();

        dq.pop_front();

        if(cur_num == K) {
            cout << cnt[cur_num];
            return;
        }

        if(isIn(cur_num + 1) && cnt[cur_num] + 1 < cnt[cur_num + 1]){
            cnt[cur_num + 1] = cnt[cur_num] + 1;
            dq.push_back(cur_num + 1);
        }

        if(isIn(cur_num - 1) && cnt[cur_num] + 1 < cnt[cur_num - 1]){
            cnt[cur_num - 1] = cnt[cur_num] + 1;
            dq.push_back(cur_num - 1);
        }

        if(isIn(2 * cur_num) && cnt[cur_num] < cnt[cur_num * 2]){
            cnt[cur_num * 2] = cnt[cur_num];
            dq.push_front(2 * cur_num);
        }


    }
}

int main(){
    
    cin >> N >> K;

    fill(cnt, cnt+MAX+1, INT_MAX);

    if(N != K) bfs();
    else cout << 0;
}