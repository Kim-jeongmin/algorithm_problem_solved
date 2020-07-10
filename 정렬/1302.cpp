#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a,string b){
  return a<b;
}
int main(){
  int k; 
  cin >> k;
  vector<string> vec(k);
  for(int i=0;i<k;i++){
    cin >> vec[i]; 
  }
  sort(vec.begin(),vec.end(),cmp);
  vector<int> vec1(k);
  for(int i=0;i<k;i++){
    for(int j=i;j<k-1;j++){
      if(vec[i]==vec[j+1]) vec1[i]++;
    }
  }
  int max=0, n=0;
  for(int i=0;i<k;i++){
    if(vec1[i]>max) max=vec1[i];
  }
  for(int i=0;i<k;i++){
    if(max==vec1[i]){
      cout << vec[i] << "\n";
      break;
    }
  }
}