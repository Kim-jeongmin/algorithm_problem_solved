#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string str; getline(cin, str);
	vector<int> v(2);
	reverse(str.begin(), str. end());
	int keep = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			v[0] = stoi(str.substr(keep, i - keep));
			keep = i + 1;
		}
	}
	v[1] = stoi(str.substr(keep, str.size() - keep));
	sort(v.begin(), v.end());
	cout << v[1];
}