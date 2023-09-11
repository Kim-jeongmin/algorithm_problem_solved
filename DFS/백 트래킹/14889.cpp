#include <iostream>
#include <climits>
#include <vector>
#include <math.h>
using namespace std;

int S[21][21];
int N, result = INT_MAX;

bool team[21]; // true¸é team1, false¸é team2


void dfs(int cnt, int pos) {
	if (cnt == N / 2) {
		int teamOneCnt = 0, teamTwoCnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {

				if (team[i] == team[j]) {
					if (team[i]) teamOneCnt += S[i][j] + S[j][i];
					else teamTwoCnt += S[i][j] + S[j][i];
				}

			}
		}

		result = min(abs(teamOneCnt - teamTwoCnt), result);
		return;
	}



	for (int i = pos; i < N; i++) {

		team[i] = true;
		dfs(cnt + 1, i + 1);
		team[i] = false;

	}
}



int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> S[i][j];
		}
	}


	dfs(0, 0);

	cout << result;

}