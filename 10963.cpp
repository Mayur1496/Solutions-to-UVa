#include<iostream>
using namespace std;
int main(){
	int cases,col;
	cin>>cases;
	while(cases--){
		int diff,l,r,i;
		bool res=true;
		cin>>col;
		cin>>l>>r;
		diff=(l-r);
		for(i=1; i<col; i++){
			cin>>l>>r;
			if((l-r)!=diff)
				res=false;
		}
		if(res)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
		if(cases)
			cout<<endl;
	}
	return 0;
}