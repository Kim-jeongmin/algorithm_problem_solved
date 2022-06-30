#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;

    ll n, m, result = 0; 
    while(t--){
        result = 0;
        cin >> n >> m;

        result = m*(m+1)/2 - m;
        result += n*(n+1)/2 * m;

        cout << result << '\n';
    }
}