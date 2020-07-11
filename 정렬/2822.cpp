#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v(8);
	vector<int> posi(8);
	vector<int> result(5);
	int num = 0;
	int sum = 0;
	for (int i = 0; i < 8; i++)	cin >> v[i];
	for (int i = 0; i < 8; i++) posi[i] = v[i];
	sort(v.begin(), v.end());
	for (int i = 3; i < 8; i++) sum += v[i];
	cout << sum << '\n';
	for (int i = 3; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (v[i] == posi[j]) {
				result[num] += j + 1;
				num++;
				break;
			}
		}
	}
	sort(result.begin(), result.end());
	for(int i = 0; i < 5; i++) cout << result[i] << ' ';
}