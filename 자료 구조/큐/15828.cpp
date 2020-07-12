#include <iostream>
#include <queue>
using namespace std;

int main() {
	int a; cin >> a;
	queue<int> q;
	while (true) {
		int k; cin >> k;
		if (q.size() < a) {
			if (k > 0) q.push(k);
			else if (k == 0) q.pop();
			else break;
		}
		else {
			if (k == 0) q.pop();
			else if (k == -1) break;
		}
	}
	if (q.size() != 0) {
		while (q.size() != 0) {
			cout << q.front() << " ";
			q.pop();
		}
	}
	else cout << "empty";

}