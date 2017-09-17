#include<stdio.h>
int main(){
	int n;
	char ip[100];
	scanf("%d",&cases);
	while(cases--){
		int flag=0;
		scanf("%s",&ip);
		for(i=0;i<strlen(ip) && flag!=2;i++){
			if(ip[0] == 'R'){
				flag++;
				continue;
			}
			if(ip[i]>'A' && ip<'Z')
				flag++;
		}
		if(flag==2){
			
		}
	}
}
