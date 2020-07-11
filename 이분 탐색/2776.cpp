#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a; cin >> a;
	while (a--) {
		int b; cin >> b;
		vector<int> v(b);
		for (int i = 0; i < b; i++) cin >> v[i];
		sort(v.begin(), v.end());
		int c; cin >> c;
		for (int i = 0; i < c; i++) {
			int result = 0;
			int num; cin >> num;
			int right = b - 1;
			int left = 0;
			int mid;
			while (left <= right) {
				mid = (right + left) / 2;
				if (v[mid] > num) right = mid - 1;
				else if (v[mid] < num) left = mid + 1;
				else {
					result = 1;
					break;
				}
			}
			cout << result << '\n';
		}
	}
}