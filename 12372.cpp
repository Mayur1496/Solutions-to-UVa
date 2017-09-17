#include<iostream>
using namespace std;
int main(){
	int cases,caseno=1;
	cin>>cases;
	while(cases--){
		int l,b,h;
		cin>>l>>b>>h;
		if(l>20||b>20||h>20)
			cout<<"Case "<<caseno<<": bad"<<endl;
		else
			cout<<"Case "<<caseno<<": good"<<endl;
		caseno++;
	}
}