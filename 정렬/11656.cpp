#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string k;
  string temp[1001];
  cin>>k;
  int num = k.length();
  for(int i=0;i<num;i++){
    temp[i] = k.substr(i,num);
  }
  sort(temp,temp+num);
  for(int i=0;i<num;i++){
    cout << temp[i] <<endl;
  }
}
