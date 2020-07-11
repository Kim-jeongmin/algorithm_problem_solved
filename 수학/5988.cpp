#include <iostream>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	while (a--) {
		string k; cin >> k;
		if ((k[k.size()-1] - '0') % 2 == 0) cout << "even\n";
		else cout << "odd\n";
	}
}