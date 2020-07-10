#include <iostream>
using namespace std;

int main() {
	long long  A, B, C; cin >> A >> B >> C;
	int  k  = A / (C - B);
	if (B < C) {
		cout << k+1;
	}
	else printf("-1");
}