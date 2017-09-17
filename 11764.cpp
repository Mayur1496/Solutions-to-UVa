#include<iostream>
using namespace std;
int main(){
	int h,l,cases,jumps,a,b,i=1;
	cin>>cases;
	while(cases--){
		h=0;l=0;
		cin>>jumps;
		cin>>a;
		jumps-=1;
		while(jumps--){
			cin>>b;
			if(a<b)
				h++;
			else if(a>b)
				l++;
			a=b;
		}
		cout<<"Case "<<i<<": "<<h<<" "<<l<<endl;
		i++;
	}
}
	