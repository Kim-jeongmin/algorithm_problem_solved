#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

bool cmp(pair<int,string>a, pair<int,string>b){
    return a.first<b.first;
}
int main(){
    int k;
    cin >> k;
    vector<pair<int, string>> v(k);
    for(int i=0;i<k;i++){
    cin >> v[i].first >> v[i].second;
    }
    stable_sort(v.begin(),v.end(),cmp);
    for(int i=0;i<k;i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
}