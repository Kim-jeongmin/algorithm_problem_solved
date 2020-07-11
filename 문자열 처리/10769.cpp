#include <iostream>
#include <string>
using namespace std;


int main() {
	int sad = 0, happy = 0;
	string str; getline(cin, str);
	for (int i = 0; i < str.size()-2; i++) {
		if (":-)" == str.substr(i, 3)) happy++;
		else if (":-(" == str.substr(i, 3)) sad++;
	}
	if (happy == 0 && sad == 0) cout << "none";
	else if (happy == sad) cout << "unsure";
	else if (happy > sad) cout << "happy";
	else if (happy < sad) cout << "sad";
}