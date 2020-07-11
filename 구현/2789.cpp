#include <iostream>
#include <string>
using namespace std;

int main() {
	string st; cin >> st;
	string cmp = "CAMBRIDGE";
	for (int i = 0; i < st.size(); i++) {
		int cnt = 0;
		for (int j = 0; j < 9; j++)	if (st[i] == cmp[j]) cnt++;
		if (cnt == 0) cout << st[i];
	}
}