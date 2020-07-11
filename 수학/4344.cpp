#include <iostream>
#include <vector>
using namespace std;

int main() {
	int k; cin >> k;
	for (int i = 0; i < k; i++) {
		double num; cin >> num;
		double sum = 0;
		vector<double> v(num);
		for (int j = 0; j < num; j++) {
			int a; cin >> a;
			sum += a;
			v[j] = a;
		}
		sum /= num;
		double mem = 0;
		for(int j=0;j<num;j++){
			if (sum < v[j]) mem++;
		}
		cout << fixed;
		cout.precision(3);
		cout << mem / num * 100 << '%' << '\n';
	}
}