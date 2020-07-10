#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll a, b, c;

ll POW(ll a, ll b, ll c) {
    ll val;
    if (b == 1)
        return a % c;
    val = POW(a, b/2, c);
    val = val * val % c;
    if (b % 2 == 0)
        return val;
    else
        return val * a % c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;
    cout << POW(a, b, c);
    return 0;
}