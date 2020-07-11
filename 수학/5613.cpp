#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue <string> q;
	while (true) {
		string str; cin >> str;
		if (cin.eof()) break;
		q.push(str);
	}
	int sum = stoi(q.front());
	q.pop();
	while (!q.empty()) {
		if (q.front() == "=") {
			cout << sum;
			q.pop();
		}
		else if (q.front() == "+") {
			q.pop(); sum += stoi(q.front());
		}
		else if (q.front() == "-") {
			q.pop(); sum -= stoi(q.front());
		}
		else if (q.front() == "*") {
			q.pop(); sum *= stoi(q.front());
		}
		else if (q.front() == "/") {
			q.pop(); sum /= stoi(q.front());
		}
		else q.pop();
		

	}
}