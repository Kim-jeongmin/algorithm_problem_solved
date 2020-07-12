#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a; cin >> a;
	vector <long long> v(a);
	v[0] = 1;
	if (a > 1) {
		v[1] = 3;
		for (int i = 2; i < a; i++) v[i] = (v[i - 1] + 2 * v[i - 2]);
	}
	cout << v[a - 1]%10007;

}