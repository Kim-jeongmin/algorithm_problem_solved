#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int k;
		cin >> k;
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			for (int n = 0; n < k; n++) {
				cout << s.substr(j, 1);
			}
		}
		cout << '\n';
	}
}