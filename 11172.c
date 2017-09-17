#include<stdio.h>
using namespace std;
int main(){
	int cases;
	long long int a,b;
	scanf("%d",&cases);
	while(cases--){
		scanf("%I64d %I64d",&a,&b);
		if(a<b)
			putchar(60);
		else if(a==b)
			putchar(61);
		else if(a>b)
			putchar(62);
		printf("\n");
	}
}