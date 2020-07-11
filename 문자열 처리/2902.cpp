#include <iostream>
#include <string>
using namespace std;

int main() {
	string st; cin >> st;
	cout << st[0];
	for (int i = 1; i < st.size(); i++) {
		if (st[i] == 45) cout << st[i + 1];
	}
}