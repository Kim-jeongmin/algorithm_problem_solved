#include <bits/stdc++.h>
using namespace std;


int main(){
  int result = 0;

  for(int i=1;i<1000;i++){
    if(i % 3 == 0 || i % 5 == 0) result += i;
  }

  cout << result;
}

// 정답 233168