#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1(9);
	vector<int> v2(9);
	for (int i = 0; i < 9; i++) cin >> v1[i];
	for (int i = 0; i < 9; i++) cin >> v2[i];
	int sum1 = 0, sum2 = 0;
	int win = 0, lose = 0;
	for (int i = 0; i < 9; i++) {
		sum1 += v1[i];
		if (sum1 > sum2) win++;
		sum2 += v2[i];
		if (sum1 < sum2) lose++;
	}
	if (win == 0) cout << "No";
	else if (win != 0) cout << "Yes";
}