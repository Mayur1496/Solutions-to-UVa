#include<stdio.h>
int main(){
	int person,budget,hotel,week;
	while(scanf("%d %d %d %d",&person,&budget,&hotel,&week)!=EOF){
		int tourCost=budget,bedCost,available,temp,flag=0;
		for(int i=0; i<hotel; i++){
			scanf("%d",&bedCost);
			for(int j=0; j<week; j++){
				scanf("%d",&available);
				if(available>person){
					temp = person*bedCost;
					if(temp<tourCost){
						tourCost=temp;
						flag=1;
					}
				}
			}
		}
		if(flag==1)
			printf("%d\n",tourCost);
		else
			printf("stay home\n");
	}
}