#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string str; cin >> str;
	int k = 0;
	int sum = 0;
	set<string> s;
	s.insert("c="); s.insert("c-"); s.insert("d-"); s.insert("lj"); s.insert("nj"); s.insert("s="); s.insert("z=");
 	while (k != str.size()) {
		if (str.substr(k, 3) == "dz=") {
			k += 3;
			sum++;
		}
		else if (s.count(str.substr(k, 2)) == 1) {
			k += 2;
			sum++;
		}
		else {
			k++;
			sum++;
		}
	}
	cout << sum;
}