#include <iostream>
#include <queue>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	queue <int> q;
	int result1=0, result2;
	for (int i = a; i <= b; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (i%j == 0) sum++;
		}
		if (sum == 1) q.push(i);
	}
	if (q.empty()) cout << -1;
	else {
		result2 = q.front();
		while (!q.empty()) {
			result1 += q.front();
			q.pop();
		}
		cout << result1 << '\n' << result2;
	}
}