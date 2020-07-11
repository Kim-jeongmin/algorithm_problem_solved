#include <iostream>
using namespace std;

int main() {
	long long a, b, v;
	cin >> a >> b >> v;
	int right = 1000000000;
	int left = 0;
	int mid;
	while (left <= right) {
		mid = (right + left) / 2;
		long long result = (a - b) * mid + a;
		long long r = (a - b)*(mid - 1) + a;
		if (result < v) left = mid + 1;
		else if (result >= v && r < v) {
			cout << mid + 1;
			break;
		}
		else right = mid - 1;
	}
}