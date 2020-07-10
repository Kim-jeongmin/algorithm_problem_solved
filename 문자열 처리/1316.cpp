#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 0;
	int num; cin >> num;
	while (num--) {
		string str; cin >> str;
		int fail = 0;
		for (int i = 0; i < str.size(); i++) {
			int diff = 0;
			for (int j = i + 1; j < str.size(); j++) {
				if (str[i] != str[j]) diff++;
				if (diff > 0 && str[i] == str[j]) fail++;
			}
		}
		if (fail == 0) cnt++;
	}
	cout << cnt;
}