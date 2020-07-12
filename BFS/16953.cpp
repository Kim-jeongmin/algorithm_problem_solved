#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int A, B;
int cnt = 1;
bool End;

void bfs() {
	queue < pair<long long,int>> q;
	q.push({ A,cnt });
	while (!q.empty() && End == false){
		long long n = q.front().first;
		int ct = q.front().second;
		if (ct > cnt) cnt++;
		q.pop();
		for (int i = 0; i < 2; i++) {
			long long m;
			if (i == 0) m = n * 2;
			else m = n * 10 + 1;
			if(m <= 1000000000) q.push({ m,ct + 1 });
			if (m == B)	return;
		}
	}
	cnt = -2;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> A >> B;
	bfs();
	cout << cnt + 1;
}