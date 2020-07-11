#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double L, A, B, C, D; cin >> L >> A >> B >> C >> D;
	if (ceil(A / C) >= ceil(B / D)) L -= ceil(A / C);
	else L -= ceil(B / D);
	cout << L;

}