#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	int a; cin >> a;
	cin.ignore();
	while (a--) {
		queue <string> q;
		double sum = 0;
		string str; getline(cin, str);
		int keep = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ') {
				q.push(str.substr(keep, i - keep));
				keep = i + 1;
			}
		}
		q.push(str.substr(keep, str.size() - keep));
		sum += stod(q.front());
		q.pop();
		while (!q.empty()) {
			if (q.front() == "@") sum *= 3;
			else if (q.front() == "#") sum -= 7;
			else if (q.front() == "%") sum += 5;
			q.pop();
		}
		cout << fixed;
		cout.precision(2);
		cout << sum << '\n';
	}
}