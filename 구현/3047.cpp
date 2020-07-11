#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	vector <int> v(3);
	v[0] = a; v[1] = b; v[2] = c;
	string st; cin >> st;
	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++) {
		cout << v[st[i] - 65] << ' ';
	}
}