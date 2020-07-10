#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	double a; cin >> a;
	double sum = 0;
	vector < double > v(a);
	for (int i = 0; i < a; i++) {
		int num; cin >> num;
		v[i] = num;
	}
	sort(v.begin(), v.end());
	int max = v[a-1];
	for (int i = 0; i < a; i++) {
		v[i] = v[i]/max*100;
		sum += v[i];
	}
	sum /= a;
	cout << sum;
}