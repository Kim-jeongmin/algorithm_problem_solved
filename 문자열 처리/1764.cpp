#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main() {
	int a, b, num = 0;
	cin >> a >> b;
	int sum = a + b;
	set<string> bo;
	vector<string> fin(sum);
	for (int i = 0; i < a; i++) {
		string n;
		cin >> n;
		bo.insert(n);
	}
	for (int i = 0; i < b; i++) {
		string m;
		cin >> m;
		if (bo.count(m) == 1) {
			fin[num] = m;
			num++;
		}
	}
	cout << num << '\n';
	vector<string> job(num);
	for (int i = 0; i < num; i++) {
		job[i] = fin[i];
	}
	sort(job.begin(), job.end());
	for (int i = 0; i < num; i++) {
		cout << job[i] << '\n';
	}
	return 0;
}