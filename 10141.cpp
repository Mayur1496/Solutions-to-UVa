#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
	int items,proposals,cases=1;
	while(cin>>items>>proposals){
		if(items==0)
			break;
		if(cases>1)
			cout<<endl;
		string item,company,temp1;
		getline(cin, item);
		for(int i=0; i<items; i++)
			getline(cin,item);
		int req_met=0,temp2;
		float cost=0,temp3;
		for(int i=0; i<proposals; i++){
			getline(cin,company);
			scanf("%f %d",&temp3,&temp2);
			getline(cin,item);
			for(int j=0; j<temp2; j++)
				getline(cin,item);
			if(temp2>req_met){
				req_met=temp2; company=temp1; cost=temp3; 
			}
			else if(temp2==req_met){
				if(temp3<cost){
					req_met=temp2; company=temp1; cost=temp3;
				}
			}
		}
		printf("RFP #%d\n\n",cases++);
		cout<<company;
	}
}