#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a; cin >> a;
	vector<int> v(a);
	for (int i = 0; i < a; i++) cin >> v[i];
	sort(v.begin(), v.end());
	int b; cin >> b;
	for (int i = 0; i < b; i++) {
		int result = 0;
		int num; cin >> num;
		int left = 0;
		int right = a - 1;
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
		cout << result << ' ';
	}
}