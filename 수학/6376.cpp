#include <iostream>
using namespace std;

double p(int a) {
	double k = a;
	for (int i = 1; i < a; i++) {
		k *= i;
	}
	return 1/k;
}
int main() {
	cout << "n e\n" << "- -----------" << '\n';
	for (int i = 0; i < 10; i++) {
		cout.precision(10);
		if (i == 0) cout << i << " 1" << '\n';
		else {
			double result = 1.0;
			for (int j = 1; j <= i; j++) {
				result += p(j);
			}
			if(i==8) cout << i << " " << result << "0\n";
			else cout << i << " " << result << '\n';
		}
	}
}