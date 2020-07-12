#include <iostream>
#include <string>
using namespace std;

int main() {
  int k,sum=0;
  cin >> k;
  string num;
  cin >> num;
  for(int i=0;i<k;i++){
    int n = num[i]-'0';
    sum+= n;
  }
  cout << sum;
}