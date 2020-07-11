#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int a, b, sum=0;
	cin >> a >> b;
	vector<int> v(3);
	for (int i = 0; i < 3; i++) {
		cout << a * (b % 10) << '\n';
		v[i] = a * (b % 10);
		b /= 10;
	}
	for (int i = 0; i < 3; i++) {
		if(i==0) sum += v[i];
		else sum += v[i] * pow(10,i);
	}
	cout << sum;
}