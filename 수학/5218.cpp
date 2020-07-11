#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--){
		string str1, str2; cin >> str1 >> str2;
		vector<int> v(str1.size());
		for (int i = 0; i < str1.size(); i++) {
			int k = str2[i] - str1[i];
			if (k < 0) k += 26;
			v[i] = k;
		}
		cout << "Distances: ";
		for (int i = 0; i < str1.size(); i++) {
			cout << v[i] << ' ';
		}
		cout << '\n';
	}
}