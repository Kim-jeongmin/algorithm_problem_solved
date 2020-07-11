#include <iostream>
#include <string>
using namespace std;

int main(){
	int i; cin >> i;
	for(int k=0;k<i;k++){
	string a;
	cin >> a;
	cout << a[0] << a[a.size()-1] << "\n";
	}
} 