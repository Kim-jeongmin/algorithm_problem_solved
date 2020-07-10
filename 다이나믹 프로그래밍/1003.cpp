#include <iostream>
#include <vector>
using namespace std;

int zero[50] = { 1,0, }, one[50] = { 0,1, };

void zerofibonacci(int k) {
	for (int i = 2; i <= k; i++) {
		zero[i] = zero[i - 1] + zero[i - 2];
	}
}
void onefibonacci(int k) {
	for (int i = 2; i <= k; i++) {
		one[i] = one[i - 1] + one[i - 2];
	}
}
int main() {
	int a; cin >> a;
	while (a--) {
		int k; cin >> k;
		if (k >= 2) {
			onefibonacci(k); zerofibonacci(k);
		}
		cout << zero[k] << ' ' << one[k] << '\n';
	}
}