#include <iostream>
#include <vector>
#include <string>
using namespace std;

string sum(string str1, string str2) {
	vector<int> v1(str1.size()); vector<int> v2(str1.size());
	for (int i = 0; i < str1.size(); i++) v1[i] = str1[str1.size() - (i + 1)] - '0';
	for (int i = 0; i < str2.size(); i++) v2[i] = str2[str2.size() - (i + 1)] - '0';
	for (int i = 0; i < str1.size(); i++) {
		if (v1[i] + v2[i] >= 10 && i != str1.size() - 1) {
			v1[i + 1] += 1; v1[i] += v2[i] - 10;
		}
		else v1[i] += v2[i];
	}
    string result;
	for (int i = str1.size()-1; i >= 0; i--){
        result += to_string(v1[i]);
    }

    return result;
}
int main(){
    int a; cin >> a;
    vector<string> v(a+1);
    v[0] = "0"; v[1] = "1";
    for(int i=2;i<a+1;i++){
        v[i] = sum(v[i-1],v[i-2]);
    }
    cout << v[a];
}