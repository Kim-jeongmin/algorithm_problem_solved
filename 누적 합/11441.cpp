#include <iostream>
#include <vector>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false); cin.tie(0);
	int k; cin >> k;
	vector<int> v(k);
	vector<int> p(k+1);
	for (int i = 0; i < k; i++) cin >> v[i];
	p[1] = v[0];
	if (k > 1) {
		for (int i = 2; i < k + 1; i++) p[i] = p[i - 1] + v[i - 1];
	}
	int a; cin >> a;
	while (a--) {
		int start, end; cin >> start >> end;
		cout << p[end] - p[start-1] << '\n';
	}
}