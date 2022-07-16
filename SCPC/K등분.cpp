/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll mod = 1000000007;
const int MAX = 500001;
int N, K;
ll Answer;
ll prefix_sum[MAX], arr[MAX];
map<tuple<int, ll, int>, ll> visited;


ll sum(int start, ll result, int k){
	
	ll x = 0;
    if(k == 0) {
        if(result == prefix_sum[N-1] - prefix_sum[start-1]) return 1;
		else return 0;
    }
    for(int i=start;i<N-k;i++) {
        if(result == prefix_sum[i] - prefix_sum[start-1])  {	
			if(visited.count({i+1, result, k-1})) {
				x=visited[{i+1, result, k-1}];
				break;
			}
			ll n=sum(i+1, result, k-1);
			x+=n;
			visited.insert({{i+1, result, k-1}, n});
		}
    }
	return x;
}

int main(int argc, char** argv)
{   
    std::ios_base::sync_with_stdio(false); std::cout.tie(NULL);
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */	

	// freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		cin >> N >> K;
		for(int i=0;i<N;i++) cin >> arr[i];

        prefix_sum[0] = arr[0];
        for(int i=1;i<N;i++) {
            prefix_sum[i] = arr[i] + prefix_sum[i-1];
        }
        K--;
        for(int i=0;i<N-K;i++) Answer += sum(i+1, prefix_sum[i], K-1);

		visited.clear();
		Answer %= mod;
		
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
} 