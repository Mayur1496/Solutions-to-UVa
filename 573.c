#include<stdio.h>
int main(){
	float h,u,d,f;
	while(scanf("%f %f %f %f",&h,&u,&d,&f),h!=0){
		float pos=0,per=u;
		for(int i=1;;i++){
			if(pos<0){
				printf("failure on day %d\n",i-1);
				break;}
			if(u>0)
				pos+=u;
			if(pos>h){
				printf("success on day %d\n",i);
				break;}
			pos-=d;
			u=u-(per*(f/100));
		}
	}
}