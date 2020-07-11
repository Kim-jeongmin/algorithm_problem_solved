#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>;
#include <cmath>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		int k; cin >> k;
		vector<int> v(k);
		queue<int> q;
		int cnt = 0;
		for (int i = 0; i < k; i++) {
			cin >> v[i];
			if (i % 2 == 0) {
				sort(v.begin(), v.begin()+i+1);
				q.push(v[ceil(i / 2)]);
				cnt++;
			}
		}
		cout << cnt << '\n';
		while (!q.empty()) {
			cout << q.front() << ' ';
			q.pop();
		}
		cout << '\n';
	}
}