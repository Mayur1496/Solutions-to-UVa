#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	bool b=true;
	cin>>s;
for(int i=0; i<(s.size()/2); i++){
	if(s[i]==s[s.size()-i]){
		continue;
	}
	else{
		b=false;
		break;
	}
}
if(b)
		cout<<"YES";

	else
		cout<<"NO";
}