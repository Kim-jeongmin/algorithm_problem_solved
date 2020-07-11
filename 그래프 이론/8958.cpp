#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	for (int i = 0; i < a; i++) {
		int num = 0, cnt = 0;
		string k;
		cin >> k;
		for (int j = 0; j < k.size(); j++) {
			if (k.substr(j, 1) == "O") {
				num++;
				cnt += num;
			}
			else num = 0;
		}
		cout << cnt << '\n';
	}
}