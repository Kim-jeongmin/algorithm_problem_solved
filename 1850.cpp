#include <iostream>
#include <string>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main(){
    long long a,b; cin >> a >> b;
    if(b>a) swap(a,b);
    long long num = gcd(a,b);
    string result;
    for(int i=0;i<num;i++){
        result += '1';
    }
    cout << result;

}