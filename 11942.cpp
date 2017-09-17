#include<iostream>
using namespace std;
int main(){
	bool asc,dec,status;
	int cases,a,b;
	cout<<"Lumberjacks:"<<endl;
	cin>>cases;
	while(cases--){
		asc=false;dec=false,status=true;
		cin>>a;
		for(int i=1; i<10; i++){
			cin>>b;
			if(a<b)
				asc=true;
			else if(a>b)
				dec=true;
			else 
				continue;
			if(asc==dec)
				status=false;
			a=b;
		}
		if(status)
			cout<<"Ordered"<<endl;
		else
			cout<<"Unordered"<<endl;
	}
}