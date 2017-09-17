#include<stdio.h>
#include<stdlib.h>
int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		int n,res;
		scanf("%d",&n);
		n= ((n*63+7492)*235)/47-498;
		n/=10;
		res=n%10;
		printf("%d\n",abs(res));
	}
}