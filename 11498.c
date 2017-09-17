#include<stdio.h>
int main(){
	int cases,x,y,h,k;
	scanf("%d",&cases);
	while(cases){
		scanf("%d %d",&x,&y);
		while(cases--){
			scanf("%d %d",&h,&k);
			if(x==h||y==k)
				printf("divisa\n");
			else if(h>x&&k>y)
				printf("NE\n");
			else if(h>x&&k<y)
				printf("SE\n");
			else if(h<x&&k>y)
				printf("NO\n");
			else if(h<x&&k<y)
				printf("SO\n");
		}
	scanf("%d",&cases);
	}	
}