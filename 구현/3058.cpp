#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a; cin >> a;
	cin.ignore();
	while (a--) {
		vector<int> v(1000);
		string str; getline(cin, str);
		int keep = 0;
		int num = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ') {
				if (stoi(str.substr(keep, i - keep)) % 2 == 0)	v[num++] = stoi(str.substr(keep, i - keep));
				keep = i + 1;
			}
		}
		if (stoi(str.substr(keep, str.size() - keep)) % 2 == 0)	v[num++] = stoi(str.substr(keep, str.size() - keep));
		sort(v.begin(), v.begin()+num);
		int sum = 0;
		for (int i = 0; i < num; i++) sum += v[i];
		cout << sum << ' ' << v[0] << '\n';
		v.clear();
	}
}