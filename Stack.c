#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

void push(int i);
int pop(void);

int *tos, *p1, stack[SIZE];

int main(void){
	int value;
	
	tos  = stack;
	p1 = stack;
	
	do{
		printf("Enter the Value : ");
		scanf("%d", &value);
		if(value != 0 ) push(value);
		else printf("Value at TOS is %d\n", pop());
	}while(value != -1);
	return 0;
}

void push(int value){
	p1++;
	if(p1 == (tos+SIZE) ) printf("Stack Overflow");
	else *p1 = value;
}

int pop(){
	if(p1 == tos) {
		printf("Stack Underflow");
		exit(1);
	}
	p1--;
	return *(p1+1);
}