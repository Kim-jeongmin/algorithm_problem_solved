#include <iostream>
#include <cmath>
using namespace std;

double arr[6][2];
int main() {
	double a, b; cin >> a >> b;
	int cnt = 0;
	while (a--) {
		int sex, grade; cin >> sex >> grade;
		arr[grade-1][sex]++;
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			cnt += ceil(arr[i][j] / b);
		}
	}
	cout << cnt;
}