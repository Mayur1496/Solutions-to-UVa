#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int duration,dep,m;
	float payment,total,per_arr[101],per;
	while(scanf("%d %f %f %d",&duration,&payment,&total,&dep),duration>0){		
		while(dep--){
			cin>>m>>per;
			for(int i=m; i<101; i++)
				per_arr[i]=per;
		}
		int month=0;
		float installment = total/duration;
		float value = (total+payment)*(1-per_arr[0]);
		while(total>value){
			month++;
			value = value*(1-per_arr[month]);
			total -= installment;		
		}
		if(month==1)
			printf("%d month\n",month);
		else
			printf("%d months\n",month);
		}
	return 0;
}