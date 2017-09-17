#include<stdio.h>
int main(){
	int cases,c=1;
	scanf("%d",&cases);
	while(cases--){
		int kids,speed,max=0;
		scanf("%d",&kids);
		for(int i=0; i<kids; i++){
			scanf("%d",&speed);
			if(max<speed)
				max=speed;
		}
		printf("Case %d: %d\n",c++,max);
	}
}