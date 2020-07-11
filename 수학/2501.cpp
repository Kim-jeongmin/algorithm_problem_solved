#include <iostream>
#include <queue>
using namespace std;

int main() {
	int a; cin >> a;
	queue<int> q;
	for (int i = 1; i <= a; i++) {
		if (a%i == 0) q.push(i);
	}
	int num; cin >> num;
	int cnt = 0;
	if (q.size() < num) cout << 0;
	else{
		while (cnt != num) {
			cnt++;
			if (cnt == num) {
				cout << q.front(); break;
			}
			q.pop();
		}
	}
}