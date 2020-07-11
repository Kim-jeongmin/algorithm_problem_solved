#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v(5);
	int a, b; cin >> a >> b;
	int sum = a * b;
	for (int i = 0; i < 5; i++) cin >> v[i];
	for (int i = 0; i < 5; i++) cout << v[i] - sum << ' ';
}