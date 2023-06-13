#include <bits/stdc++.h>
#define MAX_INT 1001
using namespace std;

int main(){
    int N; cin >> N;

    vector<pair<int, int>> v(N);
    int max_x = -MAX_INT, max_y = -MAX_INT;
    int min_x = MAX_INT, min_y = MAX_INT;

    for(int i=0;i<N;i++){
        cin >> v[i].first >> v[i].second;

        max_x = max(max_x, v[i].first);
        max_y = max(max_y, v[i].second);
        min_x = min(min_x, v[i].first);
        min_y = min(min_y, v[i].second);
    }


    if(max_x - min_x != max_y - min_y) {
        if(max_x - min_x > max_y - min_y){
            min_y -= (max_x - min_x) - (max_y - min_y);
        } else {
            min_x -= (max_y - min_y) - (max_x - min_x);
        }
    }

    bool flag = true;
    for(int i=0;i<N;i++){
        int x = v[i].first, y = v[i].second;

        if(min_x == x || max_x == x){
            if(min_y <= y && y <= max_y) continue;
            else flag = false;
        }
        else if(min_y == y || max_y == y){
            if(min_x <= x && x <= max_x) continue;
            else flag = false;
        }
        else flag = false;

        if(!flag) break;
    }


    if(flag) cout << max_x - min_x;
    else cout << -1;

}