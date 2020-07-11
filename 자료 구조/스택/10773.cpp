#include <iostream>
#include <stack>
using namespace std;

int main() {
	int a; cin >> a;
	stack <int> st;
	while (a--) {
		int k; cin >> k;
		if (k == 0) st.pop();
		else st.push(k);
	}
	int sum = 0;
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	cout << sum;
}