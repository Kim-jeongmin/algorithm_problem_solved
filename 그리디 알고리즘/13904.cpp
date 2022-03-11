#include <bits/stdc++.h>
using namespace std;

bool cmp_1(pair<int, int> a, pair<int ,int> b) return a.first < b.first;
bool cmp_2(pair<int, int> a, pair<int, int> b) return a.second > b.second;

int main(){
    int N; cin >> N;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp_1> pq_day; // 일수가 낮은 순서대로
    priority_queue<pair<int, int> , vector<pair<int, int>>, cmp_2> pq_score // 점수 높은 순서대로

    for(int i=0;i<N;i++){
        int d, w; cin >> d >> w;
        pq_day.emplace(d, w);
        pq_score.emplace(d, w);
    }

    int day = 1;

    int result_1 = 0;
    int result_2 = 0;

    for(int i=0;i<N;i++){
        if(pq_day.top().first >= day) result_1 += pq_day.top().second;
        if(pq_score.top().first >= day) result_2 += pq_score.top().second;

        day++;
        pq_day.pop(); pq_score.pop(); 
    }

    cout << max(result_1, result_2);
}