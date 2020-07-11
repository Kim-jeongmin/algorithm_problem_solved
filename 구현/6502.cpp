#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num = 0;
	while (true) {
		num++;
		double r, w, l; cin >> r >> w >> l;
		if (r == 0) break;
		if (r*2 >= sqrt(pow(w, 2) + pow(l, 2))) cout << "Pizza " << num << " fits on the table.\n";
		else cout << "Pizza " << num << " does not fit on the table.\n";
	}
}