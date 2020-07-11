#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int a;
	stack <int> st;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string k;
		cin >> k;
		if (k == "push") {
			int num;
			cin >> num;
			st.push(num);
		}
		else if (k == "pop") {
			if (!st.empty()) {
				cout << st.top() << '\n';
				st.pop();
			}
			else cout << "-1" << '\n';
		}
		else if (k == "size") {
			cout << st.size() << '\n';
		}
		else if (k == "empty") {
			if (st.empty()) {
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
		else {
			if (!st.empty()) {
				cout << st.top() << '\n';
			}
			else cout << "-1" << '\n';
		}
	}
}