#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct Person {  
    string name;        
    int language;                 
    int English;
    int math;       
} Person;     
bool cmp(Person s1, Person s2) { //정렬 조건 
	if(s1.language == s2.language) {
		if(s1.English == s2.English) {
			if(s1.math == s2.math)
				return s1.name < s2.name;
			else
				return s1.math > s2.math;
			}
		else
			return s1.English < s2.English;
		}
	else
		return s1.language > s2.language;
}      
int main(){
  int k;
  cin >> k;
  vector<Person> v(k);
  for(int i=0;i<k;i++){
    cin >> v[i].name >> v[i].language >> v[i].English >> v[i].math;
  }
  sort(v.begin(),v.end(),cmp);
  for(int i=0;i<k;i++){
    cout << v[i].name << "\n";
  }
}