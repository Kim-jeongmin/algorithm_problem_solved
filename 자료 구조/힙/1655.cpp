#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, less<int>> max_heap;
priority_queue<int, vector<int>, greater<int>> min_heap;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a; cin >> a;
	for (int i = 0; i < a; i++) {
		int k; cin >> k;
		if (i % 2 == 0) max_heap.push(k);
		else min_heap.push(k);
		if (!min_heap.empty()) {
			if (max_heap.top() > min_heap.top()) {
				int k1, k2;
				k1 = max_heap.top(); k2 = min_heap.top();
				max_heap.pop(); max_heap.push(k2);
				min_heap.pop(); min_heap.push(k1);
			}
		}
		cout << max_heap.top() << '\n';
	}
	

}