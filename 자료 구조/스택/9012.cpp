#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string k; int sum = 0;
		cin >> k;
		if (50 >= k.size() && k.size() >= 2) {
			for (int j = 0; j < k.size(); j++) {
				if (k.substr(j, 1) == "(") sum++;
				else sum--;
				if (sum < 0) break;
			}
			if (sum==0) cout << "YES" << '\n';
			else cout << "NO" << '\n';
		}
	}
}