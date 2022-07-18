#include <bits/stdc++.h>
using namespace std;

int n, m;
int parent[1000001];

int find_parent(int x){
    if(x == parent[x]) return x;
    else return parent[x] = find_parent(parent[x]);
}

void unionVertex(int a, int b){

    a = find_parent(a);
    b = find_parent(b);

    if(a == b) return;
    else parent[a] = b;
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;

    for(int i=0;i<=n;i++) parent[i] = i; 

    int k, a, b;
    for(int i=0;i<m;i++){
        cin >> k >> a >> b;

        if(k == 0) {
            if(a == b) continue;
            if(a > b) swap(a, b);
            unionVertex(a, b);
        }
        else {
            if(find_parent(a) != find_parent(b)) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}