#include <iostream>
#include <vector>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int x = A * B * C;
	vector <int> v(10);
	while (x != 0){
		v[x % 10]++;
		x /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << v[i] << '\n';
	}
}