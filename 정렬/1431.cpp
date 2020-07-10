#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(string a,string b){
  if(a.length()==b.length()){
    int sum1=0,sum2=0;
    for(int i=0;i<a.length();i++){
      if('0'<=a[i]&&a[i]<='9') sum1+=a[i]-'0';
      if('0'<=b[i]&&b[i]<='9') sum2+=b[i]-'0';
    }
    if(sum1!=sum2) return sum1<sum2;
    else return a<b;
  }
  else return a.length()<b.length();
}
int main(){
  int k;
  cin >> k;
  vector<string> vec(k);
  for(int i=0;i<k;i++){
    cin >> vec[i];
  }
  sort(vec.begin(),vec.end(),cmp);
  for(int i=0;i<k;i++){
    cout << vec[i] << "\n";
  }
}