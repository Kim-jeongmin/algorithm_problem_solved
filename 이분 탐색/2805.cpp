#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	vector<long long> v(a);
	for (long long i = 0; i < a; i++)	cin >> v[i];
	sort(v.begin(), v.end());
	long long right = v[a-1];
	long long left = 0; 
	long long mid;
	while (left <= right) {
		mid = (right + left) / 2;
		long long sum1 = 0; long long sum2 = 0; long long sum3 = 0;
		for (long long i = 0; i < a; i++) {
			long long k = v[i] - mid;
			if (k > 0) sum1 += k;
			long long n = v[i] - (mid + 1);
			if (n > 0) sum2 += n;
			long long m = v[i] - (mid - 1);
			if (m > 0) sum3 += m;
		}
		if (sum1 > b) {
			if (sum2 > b) left = mid + 1;
			else if (sum2 == b) {
				mid += 1; break;
			}
			else break;
		}
		else if (sum1 < b) {
			if (sum3 < b) right = mid - 1;
			else {
				mid -= 1; break;
			}
				
		}
		else break;
	}
	cout << mid;
}