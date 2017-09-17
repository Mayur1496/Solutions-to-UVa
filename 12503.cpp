#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int cases,n;
	cin>>cases;
	while(cases--){
		cin>>n;
		string s;
		int inst[100],res=0,move;
		for(int i=0; i<n; i++){
			cin>>s;
			if(s=="LEFT"){
				res-=1;
				inst[i]=-1;
			}
			else if(s=="RIGHT"){
				res+=1;
				inst[i]=1;
			}
			else{
				scanf("%*s %d",&move);
				res+=inst[move-1];
				inst[i]=inst[move-1];
			}
		}
		cout<<res<<endl;
	}
}