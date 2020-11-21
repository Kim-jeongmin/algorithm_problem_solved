#include <bits/stdc++.h>
using namespace std;

int main(){
  int A;
  cin >> A;
  for(int i=0;i<9;i++){
    int B; cin >> B;
    A -= B;
  }
  cout << A;
}