#include<stdio.h>
int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		int stores,min=999,max=0,temp;
		scanf("%d",&stores);
		while(stores--){
			scanf("%d",&temp);
			if(temp>max)
				max=temp;
			if(temp<min)
				min=temp;
		}
		printf("%d\n",2*(max-min));
	}
}