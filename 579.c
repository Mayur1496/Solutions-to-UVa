#include<stdio.h>
#include<math.h>
int main(){
	float h,m;
	while(scanf("%f%*c%f",&h,&m)){
		if(h==0&&m==0)
			break;
		float angle1,angle2,res=0;
		angle1=m*6;	
		angle2=(h*5*6)+(m/2);
		if(fabs(angle2-angle1)>180)
			res=360-fabs(angle2-angle1);
		else
			res=fabs(angle2-angle1);
		printf("%0.3f\n",res);
	}
}