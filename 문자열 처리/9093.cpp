#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	int a; cin >> a;
	cin.ignore();
	for (int i = 0; i < a; i++) {
		string st; getline(cin, st);
		string temp;
		for (int i = 0; i < st.length(); i++) {
			if (st[i] == ' ') {
				reverse(temp.begin(), temp.end());
				cout << temp << " ";
				temp.clear();
			}
			else temp += st[i];
		}
		reverse(temp.begin(), temp.end());
		cout << temp << "\n";
	}
}