#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int n, m, cnt = 0; cin >> n >> m;
		priority_queue<int> pq;
		queue<pair<int,int>> q;
		for (int j = 0; j < n; j++) {
			int num; cin >> num;
			pq.push(num);
			q.push({ j,num });
		}
		while (true) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (value == pq.top()) {
				pq.pop();
				cnt++;
				if (index == m) {
					cout << cnt << '\n';
					break;
				}
			}
			else q.push({ index,value });
		}
	}
}