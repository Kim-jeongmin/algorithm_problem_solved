#include <bits/stdc++.h>
using namespace std;

int N, x, y;
double result = 0;
vector<pair<double, double>> v;

double triangle_area(int v1, int v2, int v3){
    return ((v[v1].first*v[v2].second + v[v2].first*v[v3].second + v[v3].first*v[v1].second) - (v[v2].first*v[v1].second + v[v3].first*v[v2].second + v[v1].first*v[v3].second))/2;
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> x >> y;
        v.push_back({x, y});
    }

    for(int i=1;i<N-1;i++){
        result += triangle_area(0, i, i+1);
    }

    cout << fixed;
    cout.precision(1);
    cout << abs(result);
}