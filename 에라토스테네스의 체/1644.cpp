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

  int lo = 0, hi = 0, temp = prime[0];
  
  while(lo <= hi && hi < pos){
  	
  	if(temp > N) temp -= prime[lo++];
  	else if(temp < N) temp += prime[++hi];
  	else {
  		result++; temp -= prime[lo++];
  	}
  }

  cout << result;
  
}