#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1(5);
	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			int k; cin >> k;
			sum += k;
		}
		v1[i] = sum;
	}
	int max = 0 , num;
	for (int i = 0; i < 5; i++) {
		if (v1[i] > max) {
			num = i + 1;
			max = v1[i];
		}
	}
	cout << num << " " << max;
}