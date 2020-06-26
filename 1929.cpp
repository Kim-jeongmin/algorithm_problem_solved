#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B; cin >> A >> B;
    vector<int> v(B+1);
    for(int i=0;i<=B;i++){
        v[i] = i;
    }
    for(long long i=2;i<=B;i++){
        if(v[i] != 0) {
            for(long long j=i*i;j<=B;j+=i){
                if(v[j] == 0) continue;
                if(v[j] % v[i] == 0) v[j] = 0;
            }
        }
    }
    for(int i=A;i<=B;i++){
        if(i==1) continue;
        if(v[i]!=0) cout << v[i] << '\n';
    }
}