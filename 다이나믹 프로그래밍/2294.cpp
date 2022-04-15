#include <bits/stdc++.h>
#define MAX 10010
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> numbers(MAX);
    vector<int> coins(n);


    for(int i=1;i<=k;i++) numbers[i] = -1;

    for(int i=0;i<n;i++){
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end());

    for(int i=1;i<=k;i++){
        for(int j=0;j<n;j++){
            if(i-coins[j] >= 0 && numbers[i-coins[j]] != -1) {
                
                if(numbers[i] == -1) numbers[i] = numbers[i-coins[j]]+1; 
                else numbers[i] = min(numbers[i-coins[j]]+1, numbers[i]);

            }
        }
    }

    cout << numbers[k];



}