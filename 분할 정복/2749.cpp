#include <bits/stdc++.h>
#define MOD 1000000
using namespace std;

long long n;
map<long, long> dOcagne_map;

long long dOcagne(long long x){
    if(x == 0 || x == 1) return x;
    
    long long y = x/2;
    
    long long tmp_1, tmp_2, result;

    //x가 짝수일 때
    if(x % 2 == 0){
        if(dOcagne_map.find(y) == dOcagne_map.end()) 
            tmp_1 = dOcagne(y);
        else tmp_1 = dOcagne_map[y];
        if(dOcagne_map.find(y-1) == dOcagne_map.end()) 
            tmp_2 = dOcagne(y-1);
        else tmp_2 = dOcagne_map[y-1];
        result = tmp_1 * ((tmp_1 + 2 * tmp_2) % MOD) % MOD;
    }
    
    //x가 홀수일 때
    else{
        if(dOcagne_map.find(y) == dOcagne_map.end()) 
            tmp_1 = dOcagne(y);
        else tmp_1 = dOcagne_map[y];
        if(dOcagne_map.find(y+1) == dOcagne_map.end()) 
            tmp_2 = dOcagne(y+1);
        else tmp_2 = dOcagne_map[y+1];
        result = (tmp_2*tmp_2 % MOD + tmp_1*tmp_1 % MOD) % MOD;
    }
    
    dOcagne_map.insert({x, result});
    return result;
}

int main(){
    cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
    cin >> n;
    
    cout << dOcagne(n);
}