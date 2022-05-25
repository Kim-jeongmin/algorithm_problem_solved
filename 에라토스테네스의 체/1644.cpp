#include <bits/stdc++.h>
#define MAX 4000001
using namespace std;

bool isPrime[MAX];
int N, prime[MAX], pos = 0, result = 0;

int main(){
  
  cin >> N;

  for(int i=2;i<MAX;i++){

    for(int j=i+i;j<MAX;j+=i){
      if(isPrime[j] == false) isPrime[j] = true;
    }
    
  }

  for(int i=2;i<=N;i++){
    if(!isPrime[i]) prime[pos++] = i;
  }

  for(int i=0;i<pos;i++){
    
    int temp = prime[i];
    
    if(temp == N) {
      result++; break;
    }
    for(int j=i+1;j<pos;j++){
      
      temp += prime[j];

      if(temp > MAX) break;
      if(temp == N) {
        result++;
        break;
      }
    }
  }

  cout << result;
  
}