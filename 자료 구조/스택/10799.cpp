#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str; int result = 0;
	cin >> str;
	stack<char> st;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') st.push(str[i]);
		else {
			st.pop();
			if (str[i - 1] == '(') result += st.size();
			else result++;
		}
	}
	cout << result << '\n';
}