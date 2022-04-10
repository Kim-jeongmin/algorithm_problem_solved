#include <iostream>
#include <algorithm>

using namespace std;
int main(){
	long long saja[100001];
	int N; //세로 칸수
	cin>>N;
	saja[1]=3;
	saja[2]=7;
	saja[3]=17;
	saja[4]=41;
	for(int i=5;i<=N;i++){
		saja[i]=(saja[i-2]+saja[i-1]*2)%9901;
	}
	cout<<saja[N]<<endl;
	return 0;
}