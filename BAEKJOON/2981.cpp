#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b!=0) return gcd(b,a%b);
    else return a;
}

int main(){
    int num; cin >> num;
    vector<int> v(num);
    for(int i=0;i<num;i++) cin >> v[i];
    sort(v.begin(),v.end());
    int g = v[1] - v[0];
    for(int i=2;i<num;i++){
        int cmp = v[i] - v[i-1];
        if(cmp < g) swap(cmp,g);
        g = gcd(cmp,g);
    }

    priority_queue <int,vector<int>,greater<int>> pq;

    for(int i=1;i*i<=g;i++){
        if(g%i == 0){
            pq.push(i);
            if(i != g/i) pq.push(g/i);
        }
    }
    while(!pq.empty()){
        if(pq.top() != 1) cout << pq.top() << ' ';
        pq.pop();
    }

}