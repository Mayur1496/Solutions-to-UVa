#include<stdio.h>
int main(){
	char c;
	int flag = 0;
	while((c=getchar())!=EOF){
		if(c==34&&flag==0){
			putchar(96);putchar(96);flag=1;}
		else if(c==34&&flag==1){
			putchar(39);putchar(39);flag=0;}
		else
			putchar(c);
	}
}