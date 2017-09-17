#include<iostream>
using namespace std;
int main(){
	int curr,prev;
	while(1){
		cin>>curr>>prev;
		if(curr==-1&&prev==-1)
			break;
		int a,b;
		a=abs(curr-prev);
		if(prev<curr)
			b=prev+100-curr;
		else
			b=curr+100-prev;
		(a<b)?(cout<<a<<endl):(cout<<b<<endl);
	}
}