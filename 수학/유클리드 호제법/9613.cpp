#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main(){
    int a; cin >> a;
    while(a--){
        int t; cin >> t;
        long long sum = 0;
        vector<int> v(t);
        for(int i=0;i<t;i++) cin >> v[i];
        sort(v.begin(),v.end());
        for(int i=0;i<t;i++) for(int j=i+1;j<t;j++) sum += gcd(v[i],v[j]);
        cout << sum << '\n';
    }
}