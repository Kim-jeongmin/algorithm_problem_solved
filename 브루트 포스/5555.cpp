#include <iostream>
#include <string>
using namespace std;

int main() {
	string str; cin >> str;
	int a; cin >> a;
	int cnt = 0;
	for (int i = 0; i < a; i++) {
		string st; cin >> st;
		string st2 = st + st;
		for (int j = 0; j < 10; j++) {
			if (str == st2.substr(j, str.size())) {
				cnt++; break;
			}
		}
	}
	cout << cnt;
}