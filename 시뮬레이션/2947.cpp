#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(5);
	for (int i = 0; i < 5; i++)	cin >> v[i];
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 4; i++)	{
			if (v[i] > v[i + 1]) {
				swap(v[i], v[i + 1]);
				for (int i = 0; i < 5; i++)	cout << v[i] << ' ';
				cout << '\n';
			}
		}
	}
	
}