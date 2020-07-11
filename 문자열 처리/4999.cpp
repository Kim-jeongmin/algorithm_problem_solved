#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> v(2);
	for (int i = 0; i < 2; i++)	cin >> v[i];
	if (v[0].size() >= v[1].size()) cout << "go";
	else cout << "no";
	
}