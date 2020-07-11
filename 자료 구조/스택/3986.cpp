#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main() {
	int a, result = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string str; cin >> str;
		stack<char> st;
		for (int j = 0; j < str.size(); j++) {
			if (j != 0 && !st.empty()) {
				if (str[j] == 'A' && st.top() == 'A') st.pop();
				else if (str[j] == 'B' && st.top() == 'B') st.pop();
				else st.push(str[j]);
			}
			else st.push(str[j]);
		}
		if (st.empty()) result++;
	}
	cout << result;
}