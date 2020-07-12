#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}
int main() {
	int a; cin >> a;
	while (a--) {
		int b; cin >> b;
		vector<pair<int, string>> v(b);
		for (int i = 0; i < b; i++) {
			int cost; string name;
			cin >> cost >> name;
			v[i] = { cost,name };
		}
		int max = 0;
		sort(v.begin(), v.end(),cmp);
		cout << v[b - 1].second << '\n';
		
	}
}