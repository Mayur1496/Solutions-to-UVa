#include<stdio.h>
int main(){
	int pos,k1,k2,k3,deg,temp;
	while(scanf("%d %d %d %d",&pos,&k1,&k2,&k3),(pos||k1||k2||k3)){
		deg=1080;
		do{
			pos = (pos+39)%40;
			deg+=9;
		}while(pos!=k1);
		do{
			pos = (pos+1)%40;
			deg+=9;
		}while(pos!=k2);
		do{
			pos = (pos+39)%40;
			deg+=9;
		}while(pos!=k3);
		printf("%d\n",deg);
	}
}