#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	int a;
	cin >> a;
	queue<int> q;
	for (int i = 0; i < a; i++) {
		string k;
		cin >> k;
		if (k == "push") {
			int num;
			cin >> num;
			q.push(num);
		}
		else if (k == "pop") {
			if (q.size() == 0) cout << "-1" << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (k == "size") {
			cout << q.size() << '\n';
		}
		else if (k == "empty") {
			if (q.empty()) cout << "1" << '\n';
			else cout << "0" << '\n';
		}
		else if (k == "front") {
			if (q.size() == 0) cout << "-1" << '\n';
			else cout << q.front() << '\n';
		}
		else if (k == "back") {
			if (q.size() == 0) cout << "-1" << '\n';
			else cout << q.back() << '\n';
		}
	}
}