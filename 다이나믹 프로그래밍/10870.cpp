#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a; cin >> a;
	vector<int> v(a + 1);
	v[0] = 0, v[1] = 1;
	for (int i = 2; i <= a; i++) v[i] = v[i - 1] + v[i - 2];
	cout << v[a];

}