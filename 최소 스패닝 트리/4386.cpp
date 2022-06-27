#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<double, double>> stars;
int parent[101];
bool flag;
double result = 0.0;

typedef struct EDGE{
    double dist;
    int x;
    int y;
}EDGE;
vector<EDGE> graph;

bool cmp(EDGE a, EDGE b){
    return a.dist < b.dist;
}

double distance(int i, int j){

    return sqrt(pow(stars[i].first - stars[j].first, 2) + pow(stars[i].second - stars[j].second, 2));

}

int find_parent(int x){
    if(parent[x] == x) return x;
    else return find_parent(parent[x]);
}

void unionVertex(int u, int v){
    flag = false;

    u = find_parent(u);
    v = find_parent(v);

    if(u == v) return;
    else{
        parent[u] = v;
        flag = true;
    }
}

int main(){
    cin >> n;

    for(int i=0;i<n;i++){
        double a, b; cin >> a >> b;
        stars.push_back({a, b});
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            graph.push_back({distance(i, j), i, j});
        }
    }

    for(int i=0;i<n;i++) parent[i] = i;

    sort(graph.begin(), graph.end(), cmp);

    for(int i=0;i<graph.size();i++){

        unionVertex(graph[i].x, graph[i].y);

        if(flag) result += graph[i].dist;
    }

    cout << fixed;
    cout.precision(2);
    cout << result;

}