#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<string> s;
	while(1){
		s.clear();
		string temp;
		int num,i=0;
		cin>>temp;
		if(temp=="END") break;
		s.push_back(temp);
		s.push_back( to_string(s[0].size()) );
		while(s[i]!=s[i+1]){
			s.push_back( to_string(s[i+1].size()) );
			i++;
		}
		cout<<(s.size()-1)<<endl;
	}
}
