#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	N -= 1;
	int right = 100;
	int left = 1;
	while (left <= right) {
		int mid = (right + left) / 2;
		if (mid*(mid + 1) > N) right = mid - 1;
		else if (mid*(mid + 1) < N) left = mid + 1;
		else {
			cout << mid;
			break;

		}
	}
}