#include <iostream>
using namespace std;

int main() {
	int a; cin >> a;
	int Y = 0, K = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < 9; j++) {
			int n, m; cin >> n >> m;
			Y += n; K += m;
		}
		if (Y > K) cout << "Yonsei\n";
		else if (Y < K) cout << "Korea\n";
		else cout << "Draw\n";
	}
}