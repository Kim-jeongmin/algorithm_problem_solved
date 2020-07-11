#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int A, B;
	vector<int> v1(10);
	vector<int> v2(10);
	for (int i = 0; i < 10; i++) {
		int a; cin >> a;
		v1[i] = a;
	}
	for (int i = 0; i < 10; i++) {
		int a; cin >> a;
		v2[i] = a;
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	A = v1[9] + v1[8] + v1[7];
	B = v2[9] + v2[8] + v2[7];
	cout << A << ' ' << B;
}