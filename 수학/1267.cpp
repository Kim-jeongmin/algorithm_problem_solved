#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a; cin >> a;
	vector<int> v(a);
	for (int i = 0; i < a; i++)	cin >> v[i];
	int Y = 0, M = 0;
	for (int i = 0; i < a; i++) {
		Y += (v[i] / 30 + 1) * 10;
		M += (v[i] / 60 + 1) * 15;
	}
	if (Y == M) cout << "Y M " << Y;
	else if (Y > M) cout << "M " << M;
	else cout << "Y " << Y;
}