#include <bits/stdc++.h>
using namespace std;

int main(){
    int testCase; cin >> testCase;
    while(testCase--){
        int num, primeNumber = 0; cin >> num;
        vector<bool> number(num+1);

        for(int i=2;i<num+1;i++) number[i] = true;

        for(int i=2;i*i<=num;i++){
            if(number[i]){
                for(int j=i*i; j<=num; j+=i){
                    number[j] = false;
                }
            }
        }

        for(int i=2;i<=num;i++) {
            if(number[i]) primeNumber++;
        }

        vector<int> prime(primeNumber);
        int p = 0;

        for(int i=2;i<num+1;i++) {
            if(number[i] == true) {
                prime[p++] = i;
            }
        }

        int min = 9999;
        int a,b;

        for(int i=0;i<primeNumber;i++){
            for(int j=i;j<primeNumber;j++){
                if(prime[i]+prime[j]==num) {
                    if(prime[j]-prime[i] < min) {
                        min = prime[j]-prime[i];
                        a = prime[i], b = prime[j];
                    }
                }
            }
        }

        cout << a << ' ' << b << '\n';

    }
}