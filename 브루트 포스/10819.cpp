#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int a; cin >> a;
	int v[10], result[100001];
	for (int i = 0; i < a; i++) cin >> v[i];
	sort(v, v + a);
	int s = 1;
	for (int i = 1; i <= a; i++) {
		s *= i;
	}
	int cnt = 0;
	for (int i = 0; i < a - 1; i++) {
		result[cnt] += abs(v[i] - v[i + 1]);
	}
	while (cnt != s) {
		cnt++;
		for (int i = a - 2; i >= 0; i--) {
			if (v[i] < v[i + 1]) {
				int num = 100001, pos;
				for (int j = i; j < a; j++) {
					if (v[i] < v[j] && v[j] < num) {
						num = v[j];
						pos = j;
					}
				}
				swap(v[i], v[pos]);
				sort(v + i + 1, v + a);
				int sum = 0;
				for (int i = 0; i < a - 1; i++) {
					sum += abs(v[i] - v[i + 1]);
				}
				result[cnt] = sum;
				break;
			}
		}
	}
	int max = 0;
	for (int i = 0; i < s; i++) {
		if (max < result[i]) max = result[i];
	}
	cout << max;
}