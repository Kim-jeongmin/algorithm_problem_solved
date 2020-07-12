#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue <int> q;
	while (true) {
		int k; cin >> k;
		if (cin.eof()) break;
		q.push(k);
	}
	int size = q.size();
	int cnt = 0;
	while (true) {
		int k = q.front();
		q.pop();
		if (q.empty()) break;
		if (k <= q.front()) cnt++;
	}
	if (cnt == size - 1) cout << "Good";
	else cout << "Bad";
}