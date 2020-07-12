#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;


bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)	return a.second < b.second;
	else return a.first < b.first;
}
int main() {
	int a; cin >> a;
	vector<pair<int, int>> v(a);
	for (int i = 0; i < a; i++)	cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < a; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
}