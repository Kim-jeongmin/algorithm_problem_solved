#include <iostream>
#include <algorithm>
#include <utility>
#include <vector> 
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main(){
    int k;
    cin >> k;
    vector<pair<int, int>> v(k);
  for (int i = 0; i < k; i++){
      cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end(), cmp);
  for(int i=0;i<k;i++){
      cout << v[i].first << " " << v[i].second << "\n";
  }
}
