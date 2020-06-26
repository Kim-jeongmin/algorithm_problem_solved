#include <bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,less<int>> min_pq; // 음수
priority_queue<int,vector<int>,greater<int>> max_pq; // 양수
 
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int num; cin >> num;
    for(int i=0;i<num;i++){
        int a; cin >> a;
        if(a>0) max_pq.push(a);
        else if(a<0) min_pq.push(a);
        else {
            if(!min_pq.empty() && !max_pq.empty()) {
                if(abs(min_pq.top()) > max_pq.top()){
                    cout << max_pq.top() << '\n'; max_pq.pop();
                }
                else {
                    cout << min_pq.top() << '\n'; min_pq.pop();
                }
            }
            else if(min_pq.empty() && !max_pq.empty()){
                cout << max_pq.top() << '\n'; max_pq.pop();
            }
            else if(max_pq.empty() && !min_pq.empty()){
                cout << min_pq.top() << '\n'; min_pq.pop();
            }
            else  cout << 0 <<'\n';
        }
    }
}