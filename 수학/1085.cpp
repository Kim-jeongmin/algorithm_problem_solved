#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int x, y, w, h; cin >> x >> y >> w >> h;
	vector <int> v(4);
	v[0] = x; v[1] = y; v[2] = w - x; v[3] = h - y;
	sort(v.begin(), v.end());
	cout << v[0];
}