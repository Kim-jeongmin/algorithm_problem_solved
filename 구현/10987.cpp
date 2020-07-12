#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string a;
	int num=0;
	cin >> a;
	set<string> s ;
	s.insert("a");
	s.insert("e");
	s.insert("i");
	s.insert("o");
	s.insert("u");
	for (int i = 0; i < a.size(); i++) {
		if (s.count(a.substr(i,1)) == 1) num++;
	}
	cout << num;
}