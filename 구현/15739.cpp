#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

int arr[101][101];

int main() {
	int a; cin >> a;
	int f = 0;
	set<int> s;
	vector<int> v(a*a + 1);
	for (int i = 1; i <= a * a; i++) s.insert(i);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			int a; cin >> a;
			if (s.count(a) == 0) f++;
			v[a]++;
			arr[i][j] = a;
		}
	}
	for (int i = 1; i <= a*a; i++) {
		if (v[i] > 1) f++;
	}
	int sum = a * (pow(a, 2) + 1) / 2;
	for (int i = 0; i < a; i++) {
		int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
		for (int j = 0; j < a; j++) {
			sum1 += arr[i][j];
			sum2 += arr[j][i];
			sum3 += arr[j][j];
			sum4 += arr[j][a - j - 1];
		}
		if (sum1 != sum || sum2 != sum || sum3 != sum || sum4 != sum) f++;
	}
	if (f > 0) cout << "FALSE";
	else cout << "TRUE";
}