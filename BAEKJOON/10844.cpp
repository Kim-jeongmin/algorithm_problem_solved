#include <iostream>
using namespace std;

long long arr[101][10];
long long mod = 1000000000;

int main(){
    int a; cin >> a;
    for(int i=1;i<10;i++) arr[1][i] = 1;
    for(int i=2;i<=a;i++){
        for(int j=0;j<10;j++){
            if(j==0) arr[i][j] = arr[i-1][j+1];
            else if(j==9) arr[i][j] = arr[i-1][j-1];
            else arr[i][j] = (arr[i-1][j-1]%mod + arr[i-1][j+1]%mod)%mod;
        }
    }
    long long sum = 0;
    for(int i=0;i<10;i++) {
        sum+=arr[a][i];
        sum%=mod;
    }
    cout << sum%mod;
}