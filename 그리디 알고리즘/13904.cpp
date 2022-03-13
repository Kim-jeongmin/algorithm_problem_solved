#include <bits/stdc++.h>
using namespace std;

struct cmp{
    bool operator()(pair<int, int> a, pair<int, int> b){
        if(a.second != b.second) return a.second < b.second; // 점수가 높은 과제 순서대로
        else a.first > b.first; // 점수가 같다면 일수가 적은 것부터 앞으로
    }
};

priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
vector<int> v(1001);

int main(){
    int N; cin >> N;
    int result = 0;

    // pq에 과제들 담기
    for(int i=0;i<N;i++){
        int d, w; cin >> d >> w;
        pq.emplace(d, w);
    }

    while(!pq.empty()){
        
        int num = pq.top().second;
        int day = pq.top().first;

        for(int i=day;i>=1;i--){
            if(v[i] == 0) {
                v[i] = num; break;
            }
        }

        pq.pop();
    }

    for(int i=1;i<=1000;i++){
        result += v[i];
    }

    cout << result;
}
