#include<iostream>
using namespace std;
int main(){
	int cases,farmers;
	float land,animals,eco,prem;
	cin>>cases;
	while(cases--){
		prem=0;
		cin>>farmers;
		for(int i=0; i<farmers; i++){
			cin>>land>>animals>>eco;
			prem+=(land*eco);
		}
		cout<<(int)prem<<endl;
	}
}