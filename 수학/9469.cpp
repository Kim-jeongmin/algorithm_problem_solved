#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	for (int i = 1; i <= N; i++) {
		double  M, D, A, B, F; cin >> M >> D >> A >> B >> F;
		double time = D / (A + B);
		cout << fixed;
		cout.precision(6);
		cout << i << ' ' << time * F << '\n';
	}
}