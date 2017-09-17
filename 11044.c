#include<stdio.h>
int main(){
	int cases,m,n,sonar;
	scanf("%d",&cases);
	while(cases--){
		scanf("%d %d",&m,&n);
		printf("%d\n",(m/3)*(n/3));
	}
}